package net.skoumal.joogar.integration;

import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.shared.SQLException;
import net.skoumal.joogar.shared.util.NamingHelper;
import net.skoumal.joogar.util.CrudTestCase;
import net.skoumal.joogar.util.model.SimpleAnnotatedModel;
import net.skoumal.joogar.util.model.SimpleExtendedModel;

import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.NoSuchElementException;

public class SimpleExtendedModelTests extends CrudTestCase {

    public void testEmptyDatabase() throws Exception {
        assertEquals(0L, JoogarRecord.count(SimpleExtendedModel.class));
    }

    public void testOneSave() throws Exception {
        JoogarRecord.save(new SimpleExtendedModel());
        assertEquals(1L, JoogarRecord.count(SimpleExtendedModel.class));
    }

    public void testTwoSave() throws Exception {
        JoogarRecord.save(new SimpleExtendedModel());
        JoogarRecord.save(new SimpleExtendedModel());
        assertEquals(2L, JoogarRecord.count(SimpleExtendedModel.class));
    }

    public void testManySave() throws Exception {
        for (int i = 1; i <= 100; i++) {
            JoogarRecord.save(new SimpleExtendedModel());
        }
        assertEquals(100L, JoogarRecord.count(SimpleExtendedModel.class));
    }

    public void testDefaultId() throws Exception {
        assertEquals(1L, JoogarRecord.save(new SimpleExtendedModel()));
    }

    public void testWhereCount() throws Exception {
        JoogarRecord.save(new SimpleExtendedModel());
        JoogarRecord.save(new SimpleExtendedModel());
        assertEquals(1L, JoogarRecord.count(SimpleExtendedModel.class, "id = ?", new String[]{"1"}));
    }

    public void testWhereNoCount() throws Exception {
        assertEquals(0L, JoogarRecord.count(SimpleExtendedModel.class, "id = ?", new String[]{"1"}));
        JoogarRecord.save(new SimpleExtendedModel());
        JoogarRecord.save(new SimpleExtendedModel());
        assertEquals(0L, JoogarRecord.count(SimpleExtendedModel.class, "id = ?", new String[]{"3"}));
        assertEquals(0L, JoogarRecord.count(SimpleExtendedModel.class, "id = ?", new String[]{"a"}));
    }

    public void testWhereBrokenCount() throws Exception {
        JoogarRecord.save(new SimpleExtendedModel());
        JoogarRecord.save(new SimpleExtendedModel());
        try {
            JoogarRecord.count(SimpleExtendedModel.class, "di = ?", new String[]{"1"});
            fail("SQLException should be thrown.");
        } catch (SQLException e) {
            // this is correct behaviour
        }
    }

    public void testSaveMethod() throws Exception {
        SimpleExtendedModel model = new SimpleExtendedModel();
        model.save();
        try {
            JoogarRecord.count(SimpleExtendedModel.class, "di = ?", new String[]{"1"});
            fail("SQLException should be thrown.");
        } catch (SQLException e) {
            // this is correct behaviour
        }
    }

    public void testDelete() throws Exception {
        SimpleExtendedModel model = new SimpleExtendedModel();
        JoogarRecord.save(model);
        assertEquals(1L, JoogarRecord.count(SimpleExtendedModel.class));
        assertTrue(JoogarRecord.delete(model));
        assertEquals(0L, JoogarRecord.count(SimpleExtendedModel.class));
    }

    public void testDeleteUnsaved() throws Exception {
        SimpleExtendedModel model = new SimpleExtendedModel();
        assertEquals(0L, JoogarRecord.count(SimpleExtendedModel.class));
        assertFalse(JoogarRecord.delete(model));
        assertEquals(0L, JoogarRecord.count(SimpleExtendedModel.class));
    }

    public void testDeleteWrong() throws Exception {
        SimpleExtendedModel model = new SimpleExtendedModel();
        JoogarRecord.save(model);
        assertEquals(1L, JoogarRecord.count(SimpleExtendedModel.class));
        Field idField = model.getClass().getSuperclass().getDeclaredField("id");
        idField.setAccessible(true);
        idField.set(model, Long.MAX_VALUE);
        assertFalse(JoogarRecord.delete(model));
        assertEquals(1L, JoogarRecord.count(SimpleExtendedModel.class));
    }

    public void testDeleteAll() throws Exception {
        int elementNumber = 100;
        for (int i = 1; i <= elementNumber; i++) {
            JoogarRecord.save(new SimpleExtendedModel());
        }
        assertEquals(elementNumber, JoogarRecord.deleteAll(SimpleExtendedModel.class));
        assertEquals(0L, JoogarRecord.count(SimpleExtendedModel.class));
    }

    public void testDeleteAllWhere() throws Exception {
        int elementNumber = 100;
        for (int i = 1; i <= elementNumber; i++) {
            JoogarRecord.save(new SimpleExtendedModel());
        }
        assertEquals(elementNumber - 1, JoogarRecord.deleteAll(SimpleExtendedModel.class,
                                                              "id > ?",
                                                              new String[]{"1"}));
        assertEquals(1L, JoogarRecord.count(SimpleExtendedModel.class));
    }

    public void testDeleteInTransactionFew() throws Exception {
        SimpleExtendedModel first = new SimpleExtendedModel();
        SimpleExtendedModel second = new SimpleExtendedModel();
        SimpleExtendedModel third = new SimpleExtendedModel();
        JoogarRecord.save(first);
        JoogarRecord.save(second);
        // Not saving last model
        assertEquals(2L, JoogarRecord.count(SimpleExtendedModel.class));
        //TODO [2] uncomment this two lines after transaction implementation
//        assertEquals(2, JoogarRecord.deleteInTx(first, second, third));
//        assertEquals(0L, JoogarRecord.count(SimpleExtendedModel.class));
    }

    public void testDeleteInTransactionMany() throws Exception {
        long elementNumber = 100;
        List<SimpleExtendedModel> models = new ArrayList<>();
        for (int i = 1; i <= elementNumber; i++) {
            SimpleExtendedModel model = new SimpleExtendedModel();
            models.add(model);
            // Not saving last model
            if (i < elementNumber) {
                JoogarRecord.save(model);
            }
        }
        assertEquals(elementNumber - 1, JoogarRecord.count(SimpleExtendedModel.class));
        //TODO [2] uncomment this line after transaction implementation
//        assertEquals(elementNumber - 1, JoogarRecord.deleteInTx(models));
//        assertEquals(0L, JoogarRecord.count(SimpleExtendedModel.class));
    }

    public void testSaveInTransaction() throws Exception {
        //TODO [2] uncomment this line after transaction implementation
//        JoogarRecord.saveInTx(new SimpleExtendedModel(), new SimpleExtendedModel());
//        assertEquals(2L, JoogarRecord.count(SimpleExtendedModel.class));
    }

    public void testListAll() throws Exception {
        for (int i = 1; i <= 100; i++) {
            JoogarRecord.save(new SimpleExtendedModel());
        }
        List<SimpleExtendedModel> models = JoogarRecord.findAll(SimpleExtendedModel.class).toList();
        assertEquals(100, models.size());
        for (long i = 1; i <= 100; i++) {
            assertEquals(new Long(i), models.get((int) i - 1).getId());
        }
    }

    public void testFind() throws Exception {
        JoogarRecord.save(new SimpleExtendedModel());
        JoogarRecord.save(new SimpleExtendedModel());
        List<SimpleExtendedModel> models =
                JoogarRecord.find(SimpleExtendedModel.class, "id = ?", "2").toList();
        assertEquals(1, models.size());
        assertEquals(new Long(2L), models.get(0).getId());
    }

    public void testFindWithQuery() throws Exception {
        for (int i = 1; i <= 100; i++) {
            JoogarRecord.save(new SimpleExtendedModel());
        }
        List<SimpleExtendedModel> models =
                JoogarRecord.findWithQuery(SimpleExtendedModel.class, "Select * from " +
                                          NamingHelper.toSQLName(SimpleExtendedModel.class) +
                                          " where id >= ? ", "50").toList();
        for (SimpleExtendedModel model : models) {
            assertEquals(new Long(75), model.getId(), 25L);
        }
    }

    public void testFindById() throws Exception {
        JoogarRecord.save(new SimpleExtendedModel());
        assertEquals(new Long(1L), JoogarRecord.findById(SimpleExtendedModel.class, 1L).getId());
    }

    public void testFindByIdInteger() throws Exception {
        JoogarRecord.save(new SimpleExtendedModel());
        assertEquals(new Long(1L), JoogarRecord.findById(SimpleExtendedModel.class, 1).getId());
    }

    public void testFindByIdStringsNull() throws Exception {
        JoogarRecord.save(new SimpleExtendedModel());
        assertEquals(0, JoogarRecord.findById(SimpleExtendedModel.class, new String[]{""}).getCount());
    }

    public void testFindByIdStringsOne() throws Exception {
        JoogarRecord.save(new SimpleExtendedModel());
        List<SimpleExtendedModel> models =
                JoogarRecord.findById(SimpleExtendedModel.class, new String[]{"1"}).toList();
        assertEquals(1, models.size());
        assertEquals(new Long(1L), models.get(0).getId());
    }

    public void testFindByIdStringsTwo() throws Exception {
        JoogarRecord.save(new SimpleExtendedModel());
        JoogarRecord.save(new SimpleExtendedModel());
        JoogarRecord.save(new SimpleExtendedModel());
        List<SimpleExtendedModel> models =
                JoogarRecord.findById(SimpleExtendedModel.class, new String[]{"1", "3"}).toList();
        assertEquals(2, models.size());
        assertEquals(new Long(1L), models.get(0).getId());
        assertEquals(new Long(3L), models.get(1).getId());
    }

    public void testFindByIdStringsMany() throws Exception {
        for (int i = 1; i <= 10; i++) {
            JoogarRecord.save(new SimpleExtendedModel());
        }
        List<SimpleExtendedModel> models =
                JoogarRecord.findById(SimpleExtendedModel.class,
                        new String[]{"1", "3", "6", "10"}).toList();
        assertEquals(4, models.size());
        assertEquals(new Long(1L), models.get(0).getId());
        assertEquals(new Long(3L), models.get(1).getId());
        assertEquals(new Long(6L), models.get(2).getId());
        assertEquals(new Long(10L), models.get(3).getId());
    }

    public void testFindByIdStringsOrder() throws Exception {
        for (int i = 1; i <= 10; i++) {
            JoogarRecord.save(new SimpleExtendedModel());
        }
        List<SimpleExtendedModel> models =
                JoogarRecord.findById(SimpleExtendedModel.class,
                        new String[]{"10", "6", "3", "1"}).toList();
        assertEquals(4, models.size());
        // The order of the query doesn't matter
        assertEquals(new Long(1L), models.get(0).getId());
        assertEquals(new Long(3L), models.get(1).getId());
        assertEquals(new Long(6L), models.get(2).getId());
        assertEquals(new Long(10L), models.get(3).getId());
    }

    public void testFindByIdNull() throws Exception {
        JoogarRecord.save(new SimpleExtendedModel());
        assertNull(JoogarRecord.findById(SimpleExtendedModel.class, 2L));
    }

    public void testFindAll() throws Exception {
        for (int i = 1; i <= 100; i++) {
            JoogarRecord.save(new SimpleExtendedModel());
        }
        Iterator<SimpleExtendedModel> cursor = JoogarRecord.findAll(SimpleExtendedModel.class).iterator();
        for (int i = 1; i <= 100; i++) {
            assertTrue(cursor.hasNext());
            SimpleExtendedModel model = cursor.next();
            assertNotNull(model);
            assertEquals(new Long(i), model.getId());
        }
    }

    public void testFindAsIterator() throws Exception {
        for (int i = 1; i <= 100; i++) {
            JoogarRecord.save(new SimpleExtendedModel());
        }
        Iterator<SimpleExtendedModel> cursor = JoogarRecord.find(SimpleExtendedModel.class,
                "id >= ?", "50").iterator();
        for (int i = 50; i <= 100; i++) {
            assertTrue(cursor.hasNext());
            SimpleExtendedModel model = cursor.next();
            assertNotNull(model);
            assertEquals(new Long(i), model.getId());
        }
    }

    public void testFindWithQueryAsIterator() throws Exception {
        for (int i = 1; i <= 100; i++) {
            JoogarRecord.save(new SimpleExtendedModel());
        }
        Iterator<SimpleExtendedModel> cursor =
                JoogarRecord.findWithQuery(SimpleExtendedModel.class,
                        "Select * from " +
                                NamingHelper.toSQLName(SimpleExtendedModel.class) +
                                " where id >= ? ", "50").iterator();
        for (int i = 50; i <= 100; i++) {
            assertTrue(cursor.hasNext());
            SimpleExtendedModel model = cursor.next();
            assertNotNull(model);
            assertEquals(new Long(i), model.getId());
        }
    }

    public void testFindAsIteratorOutOfBounds() throws Exception {
        JoogarRecord.save(new SimpleExtendedModel());
        Iterator<SimpleExtendedModel> cursor = JoogarRecord.find(SimpleExtendedModel.class,
                "id = ?", "1").iterator();
        assertTrue(cursor.hasNext());
        SimpleExtendedModel model = cursor.next();
        assertNotNull(model);
        assertEquals(new Long(1), model.getId());

        model = cursor.next();
        assertNull(model);
    }

    public void testDisallowRemoveCursor() throws Exception {
        JoogarRecord.save(new SimpleExtendedModel());
        Iterator<SimpleExtendedModel> cursor = JoogarRecord.find(SimpleExtendedModel.class,
                "id = ?", "1").iterator();
        assertTrue(cursor.hasNext());
        SimpleExtendedModel model = cursor.next();
        assertNotNull(model);
        assertEquals(new Long(1), model.getId());

        try {
            cursor.remove();
            fail("UnsupportedOperationException should be thrown.");
        } catch (UnsupportedOperationException e) {
            // This is correct behaviour
        }
    }

    public void testVacuum() throws Exception {
        JoogarRecord.executeQuery("Vacuum");
    }
}