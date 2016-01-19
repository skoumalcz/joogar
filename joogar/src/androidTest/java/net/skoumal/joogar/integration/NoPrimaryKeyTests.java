package net.skoumal.joogar.integration;

import net.skoumal.joogar.util.model.StringFieldAnnotatedModel;
import net.skoumal.joogar.util.model.StringFieldAnnotatedNoIdModel;
import net.skoumal.joogar.util.model.StringFieldExtendedModel;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.shared.SQLException;
import net.skoumal.joogar.util.CrudTestCase;

public class NoPrimaryKeyTests extends CrudTestCase {

    public void testSaveOriginalAnnotatedNoId() {
        String string = "Test String";
        StringFieldAnnotatedNoIdModel model = new StringFieldAnnotatedNoIdModel(string);

        try {
            JoogarRecord.save(model);
            fail("Save should return SQLException for models without primary key.");
        } catch (SQLException e) {

        }

    }

    // for future usage :)
//    public void testQueryAnnotatedNoId() {
//
//        try {
//            JoogarRecord.findById(StringFieldAnnotatedNoIdModel.class, 1);
//            fail("Find should throw SQLException for models without primary key.");
//        } catch (SQLException e) {
//
//        }
//
//    }
}
