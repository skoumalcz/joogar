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

import net.skoumal.joogar.shared.JoogarDatabase;
import net.skoumal.joogar.shared.JoogarLogger;
import net.skoumal.joogar.shared.JoogarObjectAbstractFactory;
import net.skoumal.joogar.shared.SystemUtils;
import net.skoumal.joogar.shared.util.ReflectionUtils;

import java.io.File;

/**
 * Created by gingo on 3.4.2015.
 */
public class AndroidObjectFactory implements JoogarObjectAbstractFactory {

    private Context context;

    public AndroidObjectFactory(Context gContext) {
        context = gContext;
    }

    @Override
    public JoogarLogger getLogger() {
        return  new AndroidLogger();
    }

    @Override
    public JoogarDatabase getDatabase(String gName) {
        return new AndroidDatabase(gName, context);
    }

    @Override
    public JoogarDatabase getDatabase(File gPath) {
        return new AndroidDatabase(gPath);
    }

    @Override
    public SystemUtils getSystemUtils() {
        return new AndroidSystemUtils(context);
    }

    @Override
    public ReflectionUtils getReflectionUtils() {
        return new AndroidReflectionUtils();
    }
}
