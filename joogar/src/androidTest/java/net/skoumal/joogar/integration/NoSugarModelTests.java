package net.skoumal.joogar.integration;

import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;
import net.skoumal.joogar.util.model.NoSugarModel;

public class NoSugarModelTests extends CrudTestCase {

    public void testDelete() throws Exception {
        NoSugarModel model = new NoSugarModel();
        assertFalse(JoogarRecord.delete(model));
    }

    public void saveInTransactionTest() throws Exception {
        JoogarRecord.saveInTx(new NoSugarModel(), new NoSugarModel());
        assertEquals(-1L, JoogarRecord.count(NoSugarModel.class));
    }
}
