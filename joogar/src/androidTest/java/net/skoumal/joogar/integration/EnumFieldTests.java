package net.skoumal.joogar.integration;

import net.skoumal.joogar.util.model.EnumFieldAnnotatedModel;
import net.skoumal.joogar.util.model.EnumFieldExtendedModel;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;

public class EnumFieldTests extends CrudTestCase {
    public void testNullDefaultEnumExtended() {
        JoogarRecord.save(new EnumFieldExtendedModel());
        EnumFieldExtendedModel model = JoogarRecord.findById(EnumFieldExtendedModel.class, 1);
        assertNull(model.getDefaultEnum());
    }

    public void testNullOverriddenEnumExtended() {
        JoogarRecord.save(new EnumFieldExtendedModel());
        EnumFieldExtendedModel model = JoogarRecord.findById(EnumFieldExtendedModel.class, 1);
        assertNull(model.getOverrideEnum());
    }

    public void testNullDefaultEnumAnnotated() {
        JoogarRecord.save(new EnumFieldAnnotatedModel());
        EnumFieldAnnotatedModel model = JoogarRecord.findById(EnumFieldAnnotatedModel.class, 1);
        assertNull(model.getDefaultEnum());
    }

    public void testNullOverriddenEnumAnnotated() {
        JoogarRecord.save(new EnumFieldAnnotatedModel());
        EnumFieldAnnotatedModel model = JoogarRecord.findById(EnumFieldAnnotatedModel.class, 1);
        assertNull(model.getOverrideEnum());
    }

    public void testDefaultEnumExtended() {
        JoogarRecord.save(new EnumFieldExtendedModel(EnumFieldExtendedModel.OverrideEnum.ONE,
                EnumFieldExtendedModel.DefaultEnum.TWO));
        EnumFieldExtendedModel model = JoogarRecord.findById(EnumFieldExtendedModel.class, 1);
        assertNotNull(model);
        assertEquals(model.getDefaultEnum(), EnumFieldExtendedModel.DefaultEnum.TWO);
    }

    public void testOverriddenEnumExtended() {
        JoogarRecord.save(new EnumFieldExtendedModel(EnumFieldExtendedModel.OverrideEnum.ONE,
                EnumFieldExtendedModel.DefaultEnum.TWO));
        EnumFieldExtendedModel model = JoogarRecord.findById(EnumFieldExtendedModel.class, 1);
        assertNotNull(model);
        assertEquals(model.getOverrideEnum(), EnumFieldExtendedModel.OverrideEnum.ONE);
    }

    public void testDefaultEnumAnnotated() {
        JoogarRecord.save(new EnumFieldAnnotatedModel(EnumFieldAnnotatedModel.OverrideEnum.ONE,
                EnumFieldAnnotatedModel.DefaultEnum.TWO));
        EnumFieldAnnotatedModel model = JoogarRecord.findById(EnumFieldAnnotatedModel.class, 1);
        assertNotNull(model);
        assertEquals(model.getDefaultEnum(), EnumFieldAnnotatedModel.DefaultEnum.TWO);
    }

    public void testOverriddenEnumAnnotated() {
        JoogarRecord.save(new EnumFieldAnnotatedModel(EnumFieldAnnotatedModel.OverrideEnum.ONE,
                EnumFieldAnnotatedModel.DefaultEnum.TWO));
        EnumFieldAnnotatedModel model = JoogarRecord.findById(EnumFieldAnnotatedModel.class, 1);
        assertNotNull(model);
        assertEquals(EnumFieldAnnotatedModel.OverrideEnum.ONE, model.getOverrideEnum());
    }
}
