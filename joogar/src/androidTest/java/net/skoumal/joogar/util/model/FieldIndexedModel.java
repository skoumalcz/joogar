package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.shared.dsl.Index;
import net.skoumal.joogar.shared.dsl.TableIndex;

/**
 * Created by gingo on 5.4.2016.
 */
@TableIndex(columns = {"driverName", "count"})
public class FieldIndexedModel extends JoogarRecord {

    @Index()
    public String driverName;
    public long count;
}
