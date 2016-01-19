package net.skoumal.joogar.integration;

import net.skoumal.joogar.util.model.ByteArrayAnnotatedModel;
import net.skoumal.joogar.util.model.ByteArrayExtendedModel;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;

import java.util.Arrays;

public class ByteArrayFieldTests extends CrudTestCase {

    public void testNullByteArrayExtended() {
        byte[] array = null;
        JoogarRecord.save(new ByteArrayExtendedModel(array));
        ByteArrayExtendedModel model = JoogarRecord.findById(ByteArrayExtendedModel.class, 1);
        assertTrue(Arrays.equals(array, model.getByteArray()));
    }

    public void testNullByteArrayAnnotated() {
        byte[] array = null;
        JoogarRecord.save(new ByteArrayAnnotatedModel(array));
        ByteArrayAnnotatedModel model = JoogarRecord.findById(ByteArrayAnnotatedModel.class, 1);
        assertTrue(Arrays.equals(array, model.getByteArray()));
    }

    public void testEmptyByteArrayExtended() {
        byte[] array = "".getBytes();
        JoogarRecord.save(new ByteArrayExtendedModel(array));
        ByteArrayExtendedModel model = JoogarRecord.findById(ByteArrayExtendedModel.class, 1);
        assertEquals(new String(array), new String(model.getByteArray()));
        assertTrue(Arrays.equals(array, model.getByteArray()));
    }

    public void testEmptyByteArrayAnnotated() {
        byte[] array = "".getBytes();
        JoogarRecord.save(new ByteArrayAnnotatedModel(array));
        ByteArrayAnnotatedModel model = JoogarRecord.findById(ByteArrayAnnotatedModel.class, 1);
        assertEquals(new String(array), new String(model.getByteArray()));
        assertTrue(Arrays.equals(array, model.getByteArray()));
    }

    public void testByteArrayExtended() {
        byte[] array = "hello".getBytes();
        JoogarRecord.save(new ByteArrayExtendedModel(array));
        ByteArrayExtendedModel model = JoogarRecord.findById(ByteArrayExtendedModel.class, 1);
        assertEquals(new String(array), new String(model.getByteArray()));
        assertTrue(Arrays.equals(array, model.getByteArray()));
    }

    public void testByteArrayAnnotated() {
        byte[] array = "hello".getBytes();
        JoogarRecord.save(new ByteArrayAnnotatedModel(array));
        ByteArrayAnnotatedModel model = JoogarRecord.findById(ByteArrayAnnotatedModel.class, 1);
        assertEquals(new String(array), new String(model.getByteArray()));
        assertTrue(Arrays.equals(array, model.getByteArray()));
    }
}
