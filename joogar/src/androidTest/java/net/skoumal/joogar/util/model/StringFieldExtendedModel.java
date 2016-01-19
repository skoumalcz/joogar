package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;

public class StringFieldExtendedModel extends JoogarRecord {
    private String string;

    public StringFieldExtendedModel() {}

    public StringFieldExtendedModel(String string) {
        this.string = string;
    }

    public String getString() {
        return string;
    }

    public void setString(String string) {
        this.string = string;
    }
}
