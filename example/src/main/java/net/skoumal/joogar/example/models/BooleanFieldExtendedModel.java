package net.skoumal.joogar.example.models;

import net.skoumal.joogar.shared.JoogarRecord;

public class BooleanFieldExtendedModel extends JoogarRecord {
    private Boolean objectBoolean;
    private boolean rawBoolean;

    public BooleanFieldExtendedModel() {}

    public BooleanFieldExtendedModel(Boolean objectBoolean) {
        this.objectBoolean = objectBoolean;
    }

    public BooleanFieldExtendedModel(boolean rawBoolean) {
        this.rawBoolean = rawBoolean;
    }

    public Boolean getBoolean() {
        return objectBoolean;
    }

    public boolean getRawBoolean() {
        return rawBoolean;
    }
}
