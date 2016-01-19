package net.skoumal.joogar.example.models;

import net.skoumal.joogar.shared.dsl.Table;

@Table
public class LongFieldAnnotatedModel {
    private Long objectLong;
    private long rawLong;
    private Long id;

    public LongFieldAnnotatedModel() {}

    public LongFieldAnnotatedModel(Long objectLong) {
        this.objectLong = objectLong;
    }

    public LongFieldAnnotatedModel(long rawLong) {
        this.rawLong = rawLong;
    }

    public Long getLong() {
        return objectLong;
    }

    public long getRawLong() {
        return rawLong;
    }
}
