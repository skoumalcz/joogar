package net.skoumal.joogar.integration;

import android.os.Build;

import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;
import net.skoumal.joogar.util.model.StringFieldAnnotatedModel;
import net.skoumal.joogar.util.model.StringFieldExtendedModel;

public class WalTests extends CrudTestCase {

    public void testParallelReadDuringTransaction() {
        if(Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN) {
            JoogarRecord.openTransaction();

            String string = "Test String";
            StringFieldExtendedModel model = new StringFieldExtendedModel(string);
            long id = model.save();

            JoogarRecord.commitTransaction();

            StringFieldExtendedModel query = JoogarRecord.findById(StringFieldExtendedModel.class, id);
            assertEquals(string, query.getString());
        } else {
            // WAL not supported for API < 16
        }
    }
}
