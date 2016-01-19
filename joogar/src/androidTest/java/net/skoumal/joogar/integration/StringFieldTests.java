package net.skoumal.joogar.integration;

import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;
import net.skoumal.joogar.util.model.StringFieldAnnotatedModel;
import net.skoumal.joogar.util.model.StringFieldExtendedModel;

public class StringFieldTests extends CrudTestCase {

    public void testNullStringExtended() {
        JoogarRecord.save(new StringFieldExtendedModel());
        StringFieldExtendedModel model = JoogarRecord.findById(StringFieldExtendedModel.class, 1);
        assertNull(model.getString());
    }

    public void testNullStringAnnotated() {
        JoogarRecord.save(new StringFieldAnnotatedModel());
        StringFieldAnnotatedModel model = JoogarRecord.findById(StringFieldAnnotatedModel.class, 1);
        assertNull(model.getString());
    }

    public void testStringExtended() {
        String string = "Test String";
        JoogarRecord.save(new StringFieldExtendedModel(string));
        StringFieldExtendedModel model = JoogarRecord.findById(StringFieldExtendedModel.class, 1);
        assertEquals(string, model.getString());
    }

    public void testStringAnnotated() {
        String string = "Test String";
        JoogarRecord.save(new StringFieldAnnotatedModel(string));
        StringFieldAnnotatedModel model = JoogarRecord.findById(StringFieldAnnotatedModel.class, 1);
        assertEquals(string, model.getString());
    }
}
