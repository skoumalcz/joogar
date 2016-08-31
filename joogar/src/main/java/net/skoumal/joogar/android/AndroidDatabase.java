/*
 * Copyright 2015 SKOUMAL, s.r.o.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package net.skoumal.joogar.android;

import android.content.Context;
import android.database.Cursor;
import android.database.DatabaseUtils;
import android.database.SQLException;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteException;
import android.database.sqlite.SQLiteStatement;
import android.os.Build;
import android.text.TextUtils;

import net.skoumal.joogar.android.util.JoogarCursorFactory;
import net.skoumal.joogar.shared.Joogar;
import net.skoumal.joogar.shared.JoogarDatabase;
import net.skoumal.joogar.shared.JoogarDatabaseResult;
import net.skoumal.joogar.shared.util.NamingHelper;

import java.io.File;
import java.lang.reflect.Field;
import java.util.Hashtable;
import java.util.List;

/**
 * Created by gingo on 4.4.2015.
 */
public class AndroidDatabase extends JoogarDatabase {

    private static final boolean WAL_SUPPORTED = Build.VERSION.SDK_INT >= Build.VERSION_CODES.HONEYCOMB;

    SQLiteDatabase db;

    private Hashtable<String, SQLiteStatement> precompiledStatements = new Hashtable<String, SQLiteStatement>();

    public AndroidDatabase(File gPath, boolean gWalMode) {
        super(gPath, gWalMode && WAL_SUPPORTED);

        openDatabase(gPath, gWalMode && WAL_SUPPORTED);
    }

    public AndroidDatabase(String gName, Context gContext, boolean gWalMode) {
        super(gContext.getDatabasePath(gName), gWalMode && WAL_SUPPORTED);

        File path = getPath();
        File directory = path.getParentFile();

        if(!directory.exists()) {
            directory.mkdirs();
        }

        openDatabase(path, gWalMode && WAL_SUPPORTED);
    }

    private void openDatabase(File gPath, boolean gWalMode) {
        int flags = SQLiteDatabase.CREATE_IF_NECESSARY;
        if(gWalMode) {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN) {
                flags = flags | SQLiteDatabase.ENABLE_WRITE_AHEAD_LOGGING;
            }
        }
        db = SQLiteDatabase.openDatabase(gPath.getPath(), new JoogarCursorFactory(), flags);

        // backward compatibility hack to support WAL on pre-jelly-bean devices
        if(gWalMode) {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.HONEYCOMB &&
                    Build.VERSION.SDK_INT < Build.VERSION_CODES.JELLY_BEAN) {
                db.enableWriteAheadLogging();
            } else {
                Joogar.getInstance().getLogger().w("WAL is not supported on API levels below 11.");
            }
        }
    }

    @Override
    public JoogarDatabaseResult rawQuery(String query, String[] arguments) {
        try {
            Cursor cursor = db.rawQuery(query, arguments);
            return new AndroidDatabaseResult(cursor);
        } catch (SQLiteException e) {
            throw new net.skoumal.joogar.shared.SQLException(e);
        }
    }

    @Override
    public int execSQL(String query, String[] arguments) {
        try {
            db.acquireReference();
            try {
                SQLiteStatement statement = db.compileStatement(query);
                statement.bindAllArgsAsStrings(arguments);
                try {
                    return statement.executeUpdateDelete();
                } finally {
                    statement.close();
                }
            } finally {
                db.releaseReference();
            }
        } catch (SQLException e) {
            throw new net.skoumal.joogar.shared.SQLException(e);
        }
    }

    @Override
    public long insertOrUpdateInternal(String sqlStr, Object[] values) {

        SQLiteStatement statement = precompiledStatements.get(sqlStr);
        if(statement == null) { // not pre-compiled yet
            statement = db.compileStatement(sqlStr);
            precompiledStatements.put(sqlStr, statement);
        }

        for (int i = 1; i <= values.length; i++) {
            Object v = values[i - 1];
            if (v == null) {
                statement.bindNull(i);
            } else if (v instanceof byte[]) {
                statement.bindBlob(i, (byte[])v);
            } else if (v instanceof Float || v instanceof Double) {
                statement.bindDouble(i, ((Number)v).doubleValue());
            } else if (v instanceof Long || v instanceof Integer
                    || v instanceof Short || v instanceof Byte) {
                statement.bindLong(i, ((Number)v).longValue());
            } else {
                statement.bindString(i, String.valueOf(v));
            }
        }

        return statement.executeInsert();
    }

    public void openTransaction() {
        if(walMode) { // immediate transaction in WAL mode allows parallel reads and write
            db.beginTransactionNonExclusive();
        } else {
            db.beginTransaction();
        }
    }

    public void commitTransaction() {
        db.setTransactionSuccessful();
        db.endTransaction();
    }

    public void rollbackTransaction() {
        db.endTransaction();
    }

    @Override
    public void close() {

        if(db.isOpen()) {

            // close precompiled statements
            for (SQLiteStatement s : precompiledStatements.values()) {
                s.close();
            }

            db.close();

        }
    }
}
