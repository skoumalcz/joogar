package net.skoumal.joogar.integration;

import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;
import net.skoumal.joogar.util.model.ByteAnnotatedModel;
import net.skoumal.joogar.util.model.ByteArrayAnnotatedModel;
import net.skoumal.joogar.util.model.ByteArrayExtendedModel;
import net.skoumal.joogar.util.model.ByteExtendedModel;

import java.util.Arrays;

public class ByteFieldTests extends CrudTestCase {

    public void testNullByteExtended() {
        Byte byteNull = null;
        JoogarRecord.save(new ByteExtendedModel(byteNull));
        ByteExtendedModel model = JoogarRecord.findById(ByteExtendedModel.class, 1);
        assertEquals(null, model.getObjectByte());
    }

    public void testNullByteAnnotated() {
        Byte byteNull = null;
        JoogarRecord.save(new ByteAnnotatedModel(byteNull));
        ByteAnnotatedModel model = JoogarRecord.findById(ByteAnnotatedModel.class, 1);
        assertEquals(null, model.getObjectByte());
    }

    public void testRawByteExtended() {
        byte rawByte = 33;
        JoogarRecord.save(new ByteExtendedModel(rawByte));
        ByteExtendedModel model = JoogarRecord.findById(ByteExtendedModel.class, 1);
        assertEquals(rawByte, model.getRawByte());
    }

    public void testRawByteAnnotated() {
        byte rawByte = 33;
        JoogarRecord.save(new ByteAnnotatedModel(rawByte));
        ByteAnnotatedModel model = JoogarRecord.findById(ByteAnnotatedModel.class, 1);
        assertEquals(rawByte, model.getRawByte());
    }

    public void testObjectByteExtended() {
        Byte objectByte = 33;
        JoogarRecord.save(new ByteExtendedModel(objectByte));
        ByteExtendedModel model = JoogarRecord.findById(ByteExtendedModel.class, 1);
        assertEquals(objectByte, model.getObjectByte());
    }

    public void testObjectByteAnnotated() {
        Byte objectByte = 33;
        JoogarRecord.save(new ByteAnnotatedModel(objectByte));
        ByteAnnotatedModel model = JoogarRecord.findById(ByteAnnotatedModel.class, 1);
        assertEquals(objectByte, model.getObjectByte());
    }
}
