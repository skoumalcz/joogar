package net.skoumal.joogar.unit;

import android.test.AndroidTestCase;

import net.skoumal.joogar.shared.JoogarDatabaseBuilder;
import net.skoumal.joogar.util.model.BooleanFieldAnnotatedModel;

/**
 * Created by gingo on 31.5.2015.
 */
public class JoogarDatabaseBuilderTests extends AndroidTestCase {

    public void testMinimalVersion() {
        try {
            JoogarDatabaseBuilder builder = new JoogarDatabaseBuilder();
            builder.setVersion(0);
            fail("Minimal allowed version should be 1");
        } catch (IllegalArgumentException e) {
            // correct behaviour
        }
    }
}
