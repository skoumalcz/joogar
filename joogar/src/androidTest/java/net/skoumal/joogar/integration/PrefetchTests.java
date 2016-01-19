package net.skoumal.joogar.integration;

import net.skoumal.joogar.util.model.NestedAnnotatedModel;
import net.skoumal.joogar.util.model.RelationshipAnnotatedModel;
import net.skoumal.joogar.util.model.SimpleAnnotatedModel;
import net.skoumal.joogar.util.CrudTestCase;

public class PrefetchTests extends CrudTestCase {

    //TODO [1] implement prefetch tests
//    public void testEmptyDatabase() throws Exception {
//        assertEquals(0L, JoogarRecord.count(NestedAnnotatedModel.class));
//        assertEquals(0L, JoogarRecord.count(RelationshipAnnotatedModel.class));
//        assertEquals(0L, JoogarRecord.count(SimpleAnnotatedModel.class));
//    }
//
//    public void testOneSave() throws Exception {
//        SimpleAnnotatedModel simple = new SimpleAnnotatedModel();
//        JoogarRecord.save(simple);
//        RelationshipAnnotatedModel nested = new RelationshipAnnotatedModel(simple);
//        JoogarRecord.save(nested);
//        JoogarRecord.save(new NestedAnnotatedModel(nested));
//        assertEquals(1L, JoogarRecord.count(SimpleAnnotatedModel.class));
//        assertEquals(1L, JoogarRecord.count(RelationshipAnnotatedModel.class));
//        assertEquals(1L, JoogarRecord.count(NestedAnnotatedModel.class));
//    }
//
//    public void testTwoSameSave() throws Exception {
//        SimpleAnnotatedModel simple = new SimpleAnnotatedModel();
//        JoogarRecord.save(simple);
//        RelationshipAnnotatedModel nested = new RelationshipAnnotatedModel(simple);
//        JoogarRecord.save(nested);
//        JoogarRecord.save(new NestedAnnotatedModel(nested));
//        JoogarRecord.save(new NestedAnnotatedModel(nested));
//        assertEquals(1L, JoogarRecord.count(SimpleAnnotatedModel.class));
//        assertEquals(1L, JoogarRecord.count(RelationshipAnnotatedModel.class));
//        assertEquals(2L, JoogarRecord.count(NestedAnnotatedModel.class));
//    }
//
//    public void testTwoDifferentSave() throws Exception {
//        SimpleAnnotatedModel simple = new SimpleAnnotatedModel();
//        JoogarRecord.save(simple);
//        SimpleAnnotatedModel another_simple = new SimpleAnnotatedModel();
//        JoogarRecord.save(another_simple);
//        RelationshipAnnotatedModel nested = new RelationshipAnnotatedModel(simple);
//        JoogarRecord.save(nested);
//        RelationshipAnnotatedModel another_nested = new RelationshipAnnotatedModel(another_simple);
//        JoogarRecord.save(another_nested);
//        JoogarRecord.save(new NestedAnnotatedModel(nested));
//        JoogarRecord.save(new NestedAnnotatedModel(another_nested));
//        assertEquals(2L, JoogarRecord.count(SimpleAnnotatedModel.class));
//        assertEquals(2L, JoogarRecord.count(RelationshipAnnotatedModel.class));
//        assertEquals(2L, JoogarRecord.count(NestedAnnotatedModel.class));
//    }
//
//    public void testManySameSave() throws Exception {
//        SimpleAnnotatedModel simple = new SimpleAnnotatedModel();
//        JoogarRecord.save(simple);
//        RelationshipAnnotatedModel nested = new RelationshipAnnotatedModel(simple);
//        JoogarRecord.save(nested);
//        for (int i = 1; i <= 100; i++) {
//            JoogarRecord.save(new NestedAnnotatedModel(nested));
//        }
//        assertEquals(1L, JoogarRecord.count(SimpleAnnotatedModel.class));
//        assertEquals(1L, JoogarRecord.count(RelationshipAnnotatedModel.class));
//        assertEquals(100L, JoogarRecord.count(NestedAnnotatedModel.class));
//    }
//
//    public void testManyDifferentSave() throws Exception {
//        for (int i = 1; i <= 100; i++) {
//            SimpleAnnotatedModel simple = new SimpleAnnotatedModel();
//            JoogarRecord.save(simple);
//            RelationshipAnnotatedModel nested = new RelationshipAnnotatedModel(simple);
//            JoogarRecord.save(nested);
//            JoogarRecord.save(new NestedAnnotatedModel(nested));
//        }
//        assertEquals(100L, JoogarRecord.count(SimpleAnnotatedModel.class));
//        assertEquals(100L, JoogarRecord.count(RelationshipAnnotatedModel.class));
//        assertEquals(100L, JoogarRecord.count(NestedAnnotatedModel.class));
//    }
//
//    public void testListAllSame() throws Exception {
//        SimpleAnnotatedModel simple = new SimpleAnnotatedModel();
//        JoogarRecord.save(simple);
//        RelationshipAnnotatedModel nested = new RelationshipAnnotatedModel(simple);
//        JoogarRecord.save(nested);
//        for (int i = 1; i <= 100; i++) {
//            JoogarRecord.save(new NestedAnnotatedModel(nested));
//        }
//        JoogarCursor<NestedAnnotatedModel> models = JoogarRecord.findAll(NestedAnnotatedModel.class);
//        assertEquals(100, models.getCount());
//        for (NestedAnnotatedModel model : models) {
//            assertEquals(nested.getId(), model.getNested().getId());
//            assertEquals(simple.getId(), model.getNested().getSimple().getId());
//        }
//    }
//
//    public void testListAllDifferent() throws Exception {
//        for (int i = 1; i <= 100; i++) {
//            SimpleAnnotatedModel simple = new SimpleAnnotatedModel();
//            JoogarRecord.save(simple);
//            RelationshipAnnotatedModel nested = new RelationshipAnnotatedModel(simple);
//            JoogarRecord.save(nested);
//            JoogarRecord.save(new NestedAnnotatedModel(nested));
//        }
//        JoogarCursor<NestedAnnotatedModel> models = JoogarRecord.findAll(NestedAnnotatedModel.class);
//        assertEquals(100, models.getCount());
//        for (NestedAnnotatedModel model : models) {
//            assertEquals(model.getId(), model.getNested().getId());
//            assertEquals(model.getId(), model.getNested().getSimple().getId());
//        }
//    }
}
