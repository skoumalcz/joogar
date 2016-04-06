package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.shared.dsl.TableIndex;

/**
 * Created by gingo on 5.4.2016.
 */
@TableIndex(columns = {"driverName", "count"})
public class ClassIndexedModel extends JoogarRecord {

    public String driverName;
    public long count;
}
