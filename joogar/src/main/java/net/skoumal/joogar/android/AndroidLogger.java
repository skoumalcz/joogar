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

import android.util.Log;

import net.skoumal.joogar.shared.JoogarLogger;

/**
 * Created by gingo on 3.4.2015.
 */
public class AndroidLogger implements JoogarLogger {

    private static final String TAG = "joogar";

    @Override
    public void e(String gMsg) {
        Log.e(TAG, gMsg);
    }

    @Override
    public void w(String gMsg) {
        Log.w(TAG, gMsg);
    }

    @Override
    public void i(String gMsg) {
        Log.i(TAG, gMsg);
    }

    @Override
    public void d(String gMsg) {
        Log.d(TAG, gMsg);
    }
}
