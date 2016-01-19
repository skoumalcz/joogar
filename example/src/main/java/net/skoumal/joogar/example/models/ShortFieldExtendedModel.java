package net.skoumal.joogar.example.models;

import net.skoumal.joogar.shared.JoogarRecord;

public class ShortFieldExtendedModel extends JoogarRecord {
    private Short objectShort;
    private short rawShort;

    public ShortFieldExtendedModel() {}

    public ShortFieldExtendedModel(Short objectShort) {
        this.objectShort = objectShort;
    }

    public ShortFieldExtendedModel(short rawShort) {
        this.rawShort = rawShort;
    }

    public Short getShort() {
        return objectShort;
    }

    public short getRawShort() {
        return rawShort;
    }
}
