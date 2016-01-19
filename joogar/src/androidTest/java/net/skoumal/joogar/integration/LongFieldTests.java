package net.skoumal.joogar.integration;

import net.skoumal.joogar.util.model.LongFieldAnnotatedModel;
import net.skoumal.joogar.util.model.LongFieldExtendedModel;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;

public class LongFieldTests extends CrudTestCase{

    public void testNullLongExtended() {
        JoogarRecord.save(new LongFieldExtendedModel());
        LongFieldExtendedModel model = JoogarRecord.findById(LongFieldExtendedModel.class, 1);
        assertNull(model.getLong());
    }

    public void testNullRawLongExtended() {
        JoogarRecord.save(new LongFieldExtendedModel());
        LongFieldExtendedModel model = JoogarRecord.findById(LongFieldExtendedModel.class, 1);
        assertEquals(0L, model.getRawLong());
    }

    public void testNullLongAnnotated() {
        JoogarRecord.save(new LongFieldAnnotatedModel());
        LongFieldAnnotatedModel model = JoogarRecord.findById(LongFieldAnnotatedModel.class, 1);
        assertNull(model.getLong());
    }

    public void testNullRawLongAnnotated() {
        JoogarRecord.save(new LongFieldAnnotatedModel());
        LongFieldAnnotatedModel model = JoogarRecord.findById(LongFieldAnnotatedModel.class, 1);
        assertEquals(0L, model.getRawLong());
    }

    public void testObjectLongExtended() {
        Long objectLong = new Long(25L);
        JoogarRecord.save(new LongFieldExtendedModel(objectLong));
        LongFieldExtendedModel model = JoogarRecord.findById(LongFieldExtendedModel.class, 1);
        assertEquals(objectLong, model.getLong());
    }

    public void testRawLongExtended() {
        JoogarRecord.save(new LongFieldExtendedModel(25L));
        LongFieldExtendedModel model = JoogarRecord.findById(LongFieldExtendedModel.class, 1);
        assertEquals(25L, model.getRawLong());
    }

    public void testObjectLongAnnotated() {
        Long objectLong = new Long(25L);
        JoogarRecord.save(new LongFieldAnnotatedModel(objectLong));
        LongFieldAnnotatedModel model = JoogarRecord.findById(LongFieldAnnotatedModel.class, 1);
        assertEquals(objectLong, model.getLong());
    }

    public void testRawLongAnnotated() {
        JoogarRecord.save(new LongFieldAnnotatedModel(25L));
        LongFieldAnnotatedModel model = JoogarRecord.findById(LongFieldAnnotatedModel.class, 1);
        assertEquals(25L, model.getRawLong());
    }
}
