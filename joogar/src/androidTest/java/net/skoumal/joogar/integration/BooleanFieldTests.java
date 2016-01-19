package net.skoumal.joogar.integration;

import net.skoumal.joogar.util.model.BooleanFieldAnnotatedModel;
import net.skoumal.joogar.util.model.BooleanFieldExtendedModel;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;

public class BooleanFieldTests extends CrudTestCase {

    public void testNullBooleanExtended() {
        JoogarRecord.save(new BooleanFieldExtendedModel());
        BooleanFieldExtendedModel model = JoogarRecord.findById(BooleanFieldExtendedModel.class, 1);
        assertNull(model.getBoolean());
    }

    public void testNullRawBooleanExtended() {
        JoogarRecord.save(new BooleanFieldExtendedModel());
        BooleanFieldExtendedModel model = JoogarRecord.findById(BooleanFieldExtendedModel.class, 1);
        assertEquals(false, model.getRawBoolean());
    }

    public void testNullBooleanAnnotated() {
        JoogarRecord.save(new BooleanFieldAnnotatedModel());
        BooleanFieldAnnotatedModel model = JoogarRecord.findById(BooleanFieldAnnotatedModel.class, 1);
        assertNull(model.getBoolean());
    }

    public void testNullRawBooleanAnnotated() {
        JoogarRecord.save(new BooleanFieldAnnotatedModel());
        BooleanFieldAnnotatedModel model = JoogarRecord.findById(BooleanFieldAnnotatedModel.class, 1);
        assertEquals(false, model.getRawBoolean());
    }

    public void testObjectBooleanExtended() {
        Boolean objectBoolean = new Boolean(true);
        JoogarRecord.save(new BooleanFieldExtendedModel(objectBoolean));
        BooleanFieldExtendedModel model = JoogarRecord.findById(BooleanFieldExtendedModel.class, 1);
        assertEquals(objectBoolean, model.getBoolean());
    }

    public void testRawBooleanExtended() {
        JoogarRecord.save(new BooleanFieldExtendedModel(true));
        BooleanFieldExtendedModel model = JoogarRecord.findById(BooleanFieldExtendedModel.class, 1);
        assertEquals(true, model.getRawBoolean());
    }

    public void testObjectBooleanAnnotated() {
        Boolean objectBoolean = new Boolean(true);
        JoogarRecord.save(new BooleanFieldAnnotatedModel(objectBoolean));
        BooleanFieldAnnotatedModel model = JoogarRecord.findById(BooleanFieldAnnotatedModel.class, 1);
        assertEquals(objectBoolean, model.getBoolean());
    }

    public void testRawBooleanAnnotated() {
        JoogarRecord.save(new BooleanFieldAnnotatedModel(true));
        BooleanFieldAnnotatedModel model = JoogarRecord.findById(BooleanFieldAnnotatedModel.class, 1);
        assertEquals(true, model.getRawBoolean());
    }
}
