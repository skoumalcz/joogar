package net.skoumal.joogar.integration;

import net.skoumal.joogar.shared.Joogar;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.shared.cursor.JoogarCursorImpl;
import net.skoumal.joogar.shared.util.NamingHelper;
import net.skoumal.joogar.shared.util.SchemaGenerator;
import net.skoumal.joogar.util.CrudTestCase;
import net.skoumal.joogar.util.model.ClassIndexedModel;
import net.skoumal.joogar.util.model.FloatFieldAnnotatedModel;
import net.skoumal.joogar.util.model.FloatFieldExtendedModel;

import java.util.List;

public class IndexTests extends CrudTestCase {

    public void testClassIndex() {
        List<SchemaGenerator.DatabaseIndex> tableIndexes = new JoogarCursorImpl<SchemaGenerator.DatabaseIndex>(SchemaGenerator.DatabaseIndex.class,
                Joogar.getInstance().getDB().rawQuery("PRAGMA index_list (\"" + NamingHelper.toSQLName(ClassIndexedModel.class) + "\")", null)).toListAndClose();

        assertEquals(1, tableIndexes.size());
    }


}
