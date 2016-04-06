package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.shared.dsl.TableIndex;
import net.skoumal.joogar.shared.dsl.TableIndexes;

/**
 * Created by gingo on 5.4.2016.
 */
@TableIndexes (indexes = {
    @TableIndex (columns = {"driverName", "count"}),
    @TableIndex (columns = {"driverName"})
})
public class ClassMultiIndexedModel extends JoogarRecord {

    public String driverName;
    public long count;
}
