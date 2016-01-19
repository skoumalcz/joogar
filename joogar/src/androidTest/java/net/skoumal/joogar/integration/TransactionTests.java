package net.skoumal.joogar.integration;

import net.skoumal.joogar.shared.Joogar;
import net.skoumal.joogar.shared.JoogarDatabase;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;
import net.skoumal.joogar.util.model.FloatFieldAnnotatedModel;
import net.skoumal.joogar.util.model.StringFieldAnnotatedModel;
import net.skoumal.joogar.util.model.StringFieldExtendedModel;

public class TransactionTests extends CrudTestCase {

    public void testCommitTransaction() {
        JoogarRecord.openTransaction();

        String string = "Test String";
        StringFieldExtendedModel model = new StringFieldExtendedModel(string);
        long id = model.save();

        JoogarRecord.commitTransaction();

        StringFieldExtendedModel query = JoogarRecord.findById(StringFieldExtendedModel.class, id);
        assertEquals(string, query.getString());
    }

    public void testRollbackTransaction() {

        JoogarRecord.openTransaction();

        String string = "Test String";
        StringFieldExtendedModel model = new StringFieldExtendedModel(string);
        long id = model.save();

        JoogarRecord.rollbackTransaction();

        StringFieldExtendedModel query = JoogarRecord.findById(StringFieldExtendedModel.class, id);
        assertNull(query);
    }

}
