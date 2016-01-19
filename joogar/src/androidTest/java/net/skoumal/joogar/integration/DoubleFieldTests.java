package net.skoumal.joogar.integration;

import net.skoumal.joogar.util.model.DoubleFieldAnnotatedModel;
import net.skoumal.joogar.util.model.DoubleFieldExtendedModel;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;

public class DoubleFieldTests extends CrudTestCase {

    public void testNullDoubleExtended() {
        JoogarRecord.save(new DoubleFieldExtendedModel());
        DoubleFieldExtendedModel model = JoogarRecord.findById(DoubleFieldExtendedModel.class, 1);
        assertNull(model.getDouble());
    }

    public void testNullRawDoubleExtended() {
        JoogarRecord.save(new DoubleFieldExtendedModel());
        DoubleFieldExtendedModel model = JoogarRecord.findById(DoubleFieldExtendedModel.class, 1);
        assertEquals(0.0, model.getRawDouble(), 0.0000000001);
    }

    public void testNullDoubleAnnotated() {
        JoogarRecord.save(new DoubleFieldAnnotatedModel());
        DoubleFieldAnnotatedModel model = JoogarRecord.findById(DoubleFieldAnnotatedModel.class, 1);
        assertNull(model.getDouble());
    }

    public void testNullRawDoubleAnnotated() {
        JoogarRecord.save(new DoubleFieldAnnotatedModel());
        DoubleFieldAnnotatedModel model = JoogarRecord.findById(DoubleFieldAnnotatedModel.class, 1);
        assertEquals(0.0, model.getRawDouble(), 0.0000000001);
    }

    public void testObjectDoubleExtended() {
        Double objectDouble = new Double(25.0);
        JoogarRecord.save(new DoubleFieldExtendedModel(objectDouble));
        DoubleFieldExtendedModel model = JoogarRecord.findById(DoubleFieldExtendedModel.class, 1);
        assertEquals(objectDouble, model.getDouble());
    }

    public void testRawDoubleExtended() {
        JoogarRecord.save(new DoubleFieldExtendedModel(25.0));
        DoubleFieldExtendedModel model = JoogarRecord.findById(DoubleFieldExtendedModel.class, 1);
        assertEquals(25.0, model.getRawDouble(), 0.0000000001);
    }

    public void testObjectDoubleAnnotated() {
        Double objectDouble = new Double(25.0);
        JoogarRecord.save(new DoubleFieldAnnotatedModel(objectDouble));
        DoubleFieldAnnotatedModel model = JoogarRecord.findById(DoubleFieldAnnotatedModel.class, 1);
        assertEquals(objectDouble, model.getDouble());
    }

    public void testRawDoubleAnnotated() {
        JoogarRecord.save(new DoubleFieldAnnotatedModel(25.0));
        DoubleFieldAnnotatedModel model = JoogarRecord.findById(DoubleFieldAnnotatedModel.class, 1);
        assertEquals(25.0, model.getRawDouble(), 0.0000000001);
    }
}
