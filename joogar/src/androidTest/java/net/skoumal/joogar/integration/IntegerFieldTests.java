package net.skoumal.joogar.integration;

import net.skoumal.joogar.util.model.IntegerFieldAnnotatedModel;
import net.skoumal.joogar.util.model.IntegerFieldExtendedModel;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;

public class IntegerFieldTests extends CrudTestCase{

    public void testNullIntegerExtended() {
        JoogarRecord.save(new IntegerFieldExtendedModel());
        IntegerFieldExtendedModel model = JoogarRecord.findById(IntegerFieldExtendedModel.class, 1);
        assertNull(model.getInteger());
    }

    public void testNullIntExtended() {
        JoogarRecord.save(new IntegerFieldExtendedModel());
        IntegerFieldExtendedModel model = JoogarRecord.findById(IntegerFieldExtendedModel.class, 1);
        assertEquals(0, model.getInt());
    }

    public void testNullIntegerAnnotated() {
        JoogarRecord.save(new IntegerFieldAnnotatedModel());
        IntegerFieldAnnotatedModel model = JoogarRecord.findById(IntegerFieldAnnotatedModel.class, 1);
        assertNull(model.getInteger());
    }

    public void testNullIntAnnotated() {
        JoogarRecord.save(new IntegerFieldAnnotatedModel());
        IntegerFieldAnnotatedModel model = JoogarRecord.findById(IntegerFieldAnnotatedModel.class, 1);
        assertEquals(0, model.getInt());
    }

    public void testIntegerExtended() {
        Integer integer = new Integer(25);
        JoogarRecord.save(new IntegerFieldExtendedModel(integer));
        IntegerFieldExtendedModel model = JoogarRecord.findById(IntegerFieldExtendedModel.class, 1);
        assertEquals(integer, model.getInteger());
    }

    public void testIntExtended() {
        JoogarRecord.save(new IntegerFieldExtendedModel(25));
        IntegerFieldExtendedModel model = JoogarRecord.findById(IntegerFieldExtendedModel.class, 1);
        assertEquals(25, model.getInt());
    }

    public void testIntegerAnnotated() {
        Integer integer = new Integer(25);
        JoogarRecord.save(new IntegerFieldAnnotatedModel(integer));
        IntegerFieldAnnotatedModel model = JoogarRecord.findById(IntegerFieldAnnotatedModel.class, 1);
        assertEquals(integer, model.getInteger());
    }

    public void testIntAnnotated() {
        JoogarRecord.save(new IntegerFieldAnnotatedModel(25));
        IntegerFieldAnnotatedModel model = JoogarRecord.findById(IntegerFieldAnnotatedModel.class, 1);
        assertEquals(25, model.getInt());
    }
}
