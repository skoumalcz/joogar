package net.skoumal.joogar.integration;

import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;
import net.skoumal.joogar.util.model.ByteAnnotatedModel;
import net.skoumal.joogar.util.model.ByteExtendedModel;
import net.skoumal.joogar.util.model.CharAnnotatedModel;
import net.skoumal.joogar.util.model.CharExtendedModel;

public class CharFieldTests extends CrudTestCase {

    public void testNullCharacterExtended() {
        Character characterNull = null;
        JoogarRecord.save(new CharExtendedModel(characterNull));
        CharExtendedModel model = JoogarRecord.findById(CharExtendedModel.class, 1);
        assertEquals(null, model.getObjectCharacter());
    }

    public void testNullCharacterAnnotated() {
        Character characterNull = null;
        JoogarRecord.save(new CharAnnotatedModel(characterNull));
        CharAnnotatedModel model = JoogarRecord.findById(CharAnnotatedModel.class, 1);
        assertEquals(null, model.getObjectCharacter());
    }

    public void testRawCharExtended() {
        char rawChar = 'h';
        JoogarRecord.save(new CharExtendedModel(rawChar));
        CharExtendedModel model = JoogarRecord.findById(CharExtendedModel.class, 1);
        assertEquals(rawChar, model.getRawChar());
    }

    public void testRawCharAnnotated() {
        char rawChar = 'h';
        JoogarRecord.save(new CharAnnotatedModel(rawChar));
        CharAnnotatedModel model = JoogarRecord.findById(CharAnnotatedModel.class, 1);
        assertEquals(rawChar, model.getRawChar());
    }

    public void testObjectCharacterExtended() {
        Character objectCharacter = 'g';
        JoogarRecord.save(new CharExtendedModel(objectCharacter));
        CharExtendedModel model = JoogarRecord.findById(CharExtendedModel.class, 1);
        assertEquals(objectCharacter, model.getObjectCharacter());
    }

    public void testObjectCharacterAnnotated() {
        Character objectCharacter = 'g';
        JoogarRecord.save(new CharAnnotatedModel(objectCharacter));
        CharAnnotatedModel model = JoogarRecord.findById(CharAnnotatedModel.class, 1);
        assertEquals(objectCharacter, model.getObjectCharacter());
    }
}
