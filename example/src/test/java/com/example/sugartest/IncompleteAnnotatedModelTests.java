package com.example.sugartest;


import android.database.sqlite.SQLiteException;

import net.skoumal.joogar.example.models.IncompleteAnnotatedModel;

import org.junit.Test;
import org.junit.runner.RunWith;
import org.robolectric.annotation.Config;

import static com.orm.SugarRecord.save;

@RunWith(RobolectricGradleTestRunner.class)
@Config(emulateSdk=18)
public class IncompleteAnnotatedModelTests {
    @Test(expected=SQLiteException.class)
    public void noIdFieldTest() {
        save(new IncompleteAnnotatedModel());
    }
}
