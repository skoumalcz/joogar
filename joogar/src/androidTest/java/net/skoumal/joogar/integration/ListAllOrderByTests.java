package net.skoumal.joogar.integration;

import net.skoumal.joogar.util.model.IntegerFieldExtendedModel;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.shared.cursor.JoogarCursor;
import net.skoumal.joogar.util.CrudTestCase;

public class ListAllOrderByTests extends CrudTestCase {

    public void testListAllOrderByEmpty() {
        assertEquals(0L, JoogarRecord.find(IntegerFieldExtendedModel.class, null, null, null, "id", null).getCount());
    }

    public void testListAllOrderById() {
        for(int i = 1; i <= 100; i++) {
            JoogarRecord.save(new IntegerFieldExtendedModel(i));
        }
        JoogarCursor<IntegerFieldExtendedModel> models =
                JoogarRecord.find(IntegerFieldExtendedModel.class, null, null, null, "id", null);
        assertEquals(100L, models.getCount());

        models.setPosition(0);
        Long id = models.getItem().getId() - 1;
        for(IntegerFieldExtendedModel m : models) {
            assertTrue(id < m.getId());
            id = m.getId();
        }

        models.close();
    }

    public void testListAllOrderByField() {
        for(int i = 1; i <= 100; i++) {
            JoogarRecord.save(new IntegerFieldExtendedModel(i));
        }
        JoogarCursor<IntegerFieldExtendedModel> models =
                JoogarRecord.find(IntegerFieldExtendedModel.class, null, null, null,  "raw_integer", null);
        assertEquals(100L, models.getCount());

        models.setPosition(0);
        int raw = models.getItem().getInt();
        for(int i = 1; i < 100; i++) {
            models.setPosition(i);
            assertTrue(raw < models.getItem().getInt());
        }

        models.close();
    }
}
