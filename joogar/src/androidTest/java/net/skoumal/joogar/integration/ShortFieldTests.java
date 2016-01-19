package net.skoumal.joogar.integration;

import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;
import net.skoumal.joogar.util.model.ShortFieldAnnotatedModel;
import net.skoumal.joogar.util.model.ShortFieldExtendedModel;

public class ShortFieldTests extends CrudTestCase {

    public void testNullShortExtended() {
        JoogarRecord.save(new ShortFieldExtendedModel());
        ShortFieldExtendedModel model = JoogarRecord.findById(ShortFieldExtendedModel.class, 1);
        assertNull(model.getShort());
    }

    public void testNullRawShortExtended() {
        JoogarRecord.save(new ShortFieldExtendedModel());
        ShortFieldExtendedModel model = JoogarRecord.findById(ShortFieldExtendedModel.class, 1);
        assertEquals((short) 0, model.getRawShort());
    }

    public void testNullShortAnnotated() {
        JoogarRecord.save(new ShortFieldAnnotatedModel());
        ShortFieldAnnotatedModel model = JoogarRecord.findById(ShortFieldAnnotatedModel.class, 1);
        assertNull(model.getShort());
    }

    public void testNullRawShortAnnotated() {
        JoogarRecord.save(new ShortFieldAnnotatedModel());
        ShortFieldAnnotatedModel model = JoogarRecord.findById(ShortFieldAnnotatedModel.class, 1);
        assertEquals((short) 0, model.getRawShort());
    }

    public void testObjectShortExtended() {
        Short objectShort = new Short((short) 25);
        JoogarRecord.save(new ShortFieldExtendedModel(objectShort));
        ShortFieldExtendedModel model = JoogarRecord.findById(ShortFieldExtendedModel.class, 1);
        assertEquals(objectShort, model.getShort());
    }

    public void testRawShortExtended() {
        JoogarRecord.save(new ShortFieldExtendedModel((short) 25));
        ShortFieldExtendedModel model = JoogarRecord.findById(ShortFieldExtendedModel.class, 1);
        assertEquals((short) 25, model.getRawShort());
    }

    public void testObjectShortAnnotated() {
        Short objectShort = new Short((short) 25);
        JoogarRecord.save(new ShortFieldAnnotatedModel(objectShort));
        ShortFieldAnnotatedModel model = JoogarRecord.findById(ShortFieldAnnotatedModel.class, 1);
        assertEquals(objectShort.shortValue(), model.getShort().shortValue());
    }

    public void testRawShortAnnotated() {
        JoogarRecord.save(new ShortFieldAnnotatedModel((short) 25));
        ShortFieldAnnotatedModel model = JoogarRecord.findById(ShortFieldAnnotatedModel.class, 1);
        assertEquals((short) 25, model.getRawShort());
    }
}
