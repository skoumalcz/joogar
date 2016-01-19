package net.skoumal.joogar.integration;

import net.skoumal.joogar.util.model.StringFieldAnnotatedModel;
import net.skoumal.joogar.util.model.StringFieldAnnotatedNoIdModel;
import net.skoumal.joogar.util.model.StringFieldExtendedModel;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;

public class MultipleSaveTests extends CrudTestCase {

    public void testStringMultipleSaveOriginalExtended() {
        String string = "Test String";
        StringFieldExtendedModel model = new StringFieldExtendedModel(string);
        long id = JoogarRecord.save(model);
        StringFieldExtendedModel query = JoogarRecord.findById(StringFieldExtendedModel.class, id);
        assertEquals(string, query.getString());
        model.setString("Another test");
        assertEquals(id, JoogarRecord.save(model));
        assertNull(JoogarRecord.findById(StringFieldExtendedModel.class, 2));
    }

    public void testStringMultipleSaveQueriedExtended() {
        String string = "Test String";
        StringFieldExtendedModel model = new StringFieldExtendedModel(string);
        long id = JoogarRecord.save(model);
        StringFieldExtendedModel query = JoogarRecord.findById(StringFieldExtendedModel.class, id);
        assertEquals(string, query.getString());
        query.setString("Another test");
        assertEquals(id, JoogarRecord.save(query));
        assertNull(JoogarRecord.findById(StringFieldExtendedModel.class, 2));
    }

    public void testStringMultipleSaveOriginalAnnotated() {
        String string = "Test String";
        StringFieldAnnotatedModel model = new StringFieldAnnotatedModel(string);
        long id = JoogarRecord.save(model);
        StringFieldAnnotatedModel query = JoogarRecord.findById(StringFieldAnnotatedModel.class, id);
        assertEquals(string, query.getString());
        model.setString("Another test");
        assertEquals(id, JoogarRecord.save(model));
        assertNull(JoogarRecord.findById(StringFieldAnnotatedModel.class, 2));
    }

    public void testStringMultipleSaveQueriedAnnotated() {
        String string = "Test String";
        StringFieldAnnotatedModel model = new StringFieldAnnotatedModel(string);
        long id = JoogarRecord.save(model);
        StringFieldAnnotatedModel query = JoogarRecord.findById(StringFieldAnnotatedModel.class, id);
        assertEquals(string, query.getString());
        query.setString("Another test");
        assertEquals(id, JoogarRecord.save(query));
        assertNull(JoogarRecord.findById(StringFieldAnnotatedModel.class, 2));
    }
}
