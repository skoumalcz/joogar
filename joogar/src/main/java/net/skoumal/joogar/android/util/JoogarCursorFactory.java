package net.skoumal.joogar.android.util;

import android.database.Cursor;
import android.database.sqlite.SQLiteCursor;
import android.database.sqlite.SQLiteCursorDriver;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteQuery;

import net.skoumal.joogar.shared.Joogar;

/**
 * Created by gingo on 4.4.2015.
 */

public class JoogarCursorFactory implements SQLiteDatabase.CursorFactory {

    @SuppressWarnings("deprecation")
    public Cursor newCursor(SQLiteDatabase sqLiteDatabase,
                            SQLiteCursorDriver sqLiteCursorDriver,
                            String editTable,
                            SQLiteQuery sqLiteQuery) {

        if(Joogar.isDebug()) {
            Joogar.getInstance().getLogger().d(sqLiteQuery.toString());
        }

        return new SQLiteCursor(sqLiteDatabase, sqLiteCursorDriver, editTable, sqLiteQuery);
    }

}
