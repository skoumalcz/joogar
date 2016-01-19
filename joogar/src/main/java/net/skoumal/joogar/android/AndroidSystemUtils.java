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

import net.skoumal.joogar.shared.SystemUtils;

import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * Created by gingo on 9.4.2015.
 */
public class AndroidSystemUtils implements SystemUtils {

    private Context context;

    public AndroidSystemUtils(Context gContext) {
        context = gContext;
    }

    @Override
    public List<String> getUpgradeScripts(String gDbName) {
        try {
            return Arrays.asList(context.getAssets().list("joogar/" + gDbName));
        } catch (IOException e) {
            throw new RuntimeException(gDbName);
        }
    }

    public InputStream openUpgradeScript(String gScriptName) {
        try {
            return context.getAssets().open(gScriptName);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
