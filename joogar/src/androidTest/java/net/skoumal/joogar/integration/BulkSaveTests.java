package net.skoumal.joogar.integration;

import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.shared.cursor.JoogarCursor;
import net.skoumal.joogar.util.CrudTestCase;
import net.skoumal.joogar.util.model.StringFieldAnnotatedModel;
import net.skoumal.joogar.util.model.StringFieldExtendedModel;

import java.util.ArrayList;
import java.util.List;

public class BulkSaveTests extends CrudTestCase {

    public void testStringCollectionBulkSaveExtended() {
        List<StringFieldExtendedModel> modelList = prepareEntityList();

        JoogarRecord.save(modelList);

        checkEntityList();
    }

    public void testStringArrayBulkSaveExtended() {
        List<StringFieldExtendedModel> modelList = prepareEntityList();

        JoogarRecord.save(modelList.toArray());

        checkEntityList();
    }

    private void checkEntityList() {
        JoogarCursor<StringFieldExtendedModel> cursor = JoogarRecord.findAll(StringFieldExtendedModel.class);

        int index = 0;
        for (StringFieldExtendedModel sf : cursor) {
            assertEquals(sf.getString(), getStringForIndex(index));

            index ++;
        }
    }

    private List<StringFieldExtendedModel> prepareEntityList() {
        List<StringFieldExtendedModel> modelList = new ArrayList<>(10);

        for (int i = 0; i < 10; i++) {
            modelList.add(new StringFieldExtendedModel(getStringForIndex(i)));
        }
        return modelList;
    }

    private String getStringForIndex(int gIndex) {
        return "abc" + gIndex;
    }
}
