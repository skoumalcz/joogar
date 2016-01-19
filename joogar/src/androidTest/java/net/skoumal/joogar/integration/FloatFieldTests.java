package net.skoumal.joogar.integration;

import net.skoumal.joogar.util.model.FloatFieldAnnotatedModel;
import net.skoumal.joogar.util.model.FloatFieldExtendedModel;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;

public class FloatFieldTests extends CrudTestCase {

    public void testNullFloatExtended() {
        JoogarRecord.save(new FloatFieldExtendedModel());
        FloatFieldExtendedModel model = JoogarRecord.findById(FloatFieldExtendedModel.class, 1);
        assertNull(model.getFloat());
    }

    public void testNullRawFloatExtended() {
        JoogarRecord.save(new FloatFieldExtendedModel());
        FloatFieldExtendedModel model = JoogarRecord.findById(FloatFieldExtendedModel.class, 1);
        assertEquals(0F, model.getRawFloat(), 0.0000000001F);
    }

    public void testNullFloatAnnotated() {
        JoogarRecord.save(new FloatFieldAnnotatedModel());
        FloatFieldAnnotatedModel model = JoogarRecord.findById(FloatFieldAnnotatedModel.class, 1);
        assertNull(model.getFloat());
    }

    public void testNullRawFloatAnnotated() {
        JoogarRecord.save(new FloatFieldAnnotatedModel());
        FloatFieldAnnotatedModel model = JoogarRecord.findById(FloatFieldAnnotatedModel.class, 1);
        assertEquals(0F, model.getRawFloat(), 0.0000000001F);
    }

    public void testObjectFloatExtended() {
        Float objectFloat = new Float(25F);
        JoogarRecord.save(new FloatFieldExtendedModel(objectFloat));
        FloatFieldExtendedModel model = JoogarRecord.findById(FloatFieldExtendedModel.class, 1);
        assertEquals(objectFloat, model.getFloat());
    }

    public void testRawFloatExtended() {
        JoogarRecord.save(new FloatFieldExtendedModel(25F));
        FloatFieldExtendedModel model = JoogarRecord.findById(FloatFieldExtendedModel.class, 1);
        assertEquals(25F, model.getRawFloat(), 0.0000000001F);
    }

    public void testObjectFloatAnnotated() {
        Float objectFloat = new Float(25F);
        JoogarRecord.save(new FloatFieldAnnotatedModel(objectFloat));
        FloatFieldAnnotatedModel model = JoogarRecord.findById(FloatFieldAnnotatedModel.class, 1);
        assertEquals(objectFloat, model.getFloat());
    }

    public void testRawFloatAnnotated() {
        JoogarRecord.save(new FloatFieldAnnotatedModel(25F));
        FloatFieldAnnotatedModel model = JoogarRecord.findById(FloatFieldAnnotatedModel.class, 1);
        assertEquals(25F, model.getRawFloat(), 0.0000000001F);
    }
}
