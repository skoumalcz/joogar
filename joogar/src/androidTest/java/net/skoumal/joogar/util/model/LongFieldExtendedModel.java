package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;

public class LongFieldExtendedModel extends JoogarRecord {
    private Long objectLong;
    private long rawLong;

    public LongFieldExtendedModel() {}

    public LongFieldExtendedModel(Long objectLong) {
        this.objectLong = objectLong;
    }

    public LongFieldExtendedModel(long rawLong) {
        this.rawLong = rawLong;
    }

    public Long getLong() {
        return objectLong;
    }

    public long getRawLong() {
        return rawLong;
    }
}
