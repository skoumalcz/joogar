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

import android.database.Cursor;

import net.skoumal.joogar.shared.JoogarDatabaseResult;

/**
 * Created by gingo on 4.4.2015.
 */
public class AndroidDatabaseResult implements JoogarDatabaseResult {

    private Cursor cursor;

    public AndroidDatabaseResult(Cursor gCursor) {
        cursor = gCursor;
    }

    @Override
    public boolean next() {
        return cursor.moveToNext();
    }

    @Override
    public void close() {
        cursor.close();
    }

    @Override
    public int count() {
        return cursor.getCount();
    }

    @Override
    public int getPosition() {
        return cursor.getPosition();
    }

    @Override
    public void setPosition(int position) {
        cursor.moveToPosition(position);
    }

    @Override
    public boolean allowsRandomAccess() {
        return true;
    }

    @Override
    public int getColumnIndex(String colName) {
        return cursor.getColumnIndex(colName);
    }

    @Override
    public boolean isNull(int columnIndex) {
        return cursor.isNull(columnIndex);
    }

    @Override
    public long getLong(int columnIndex) {
        return cursor.getLong(columnIndex);
    }

    @Override
    public String getString(int columnIndex) {
        return cursor.getString(columnIndex);
    }

    @Override
    public double getDouble(int columnIndex) {
        return cursor.getDouble(columnIndex);
    }

    @Override
    public byte [] getBlob(int columnIndex) {
        return cursor.getBlob(columnIndex);
    }

    @Override
    public int getInt(int columnIndex) {
        return cursor.getInt(columnIndex);
    }

    @Override
    public float getFloat(int columnIndex) {
        return cursor.getFloat(columnIndex);
    }
}
