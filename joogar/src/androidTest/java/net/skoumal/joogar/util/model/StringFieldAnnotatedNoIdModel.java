package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.dsl.Table;

@Table
public class StringFieldAnnotatedNoIdModel {
    private String string;

    public StringFieldAnnotatedNoIdModel() {}

    public StringFieldAnnotatedNoIdModel(String string) {
        this.string = string;
    }

    public String getString() {
        return string;
    }

    public void setString(String string) {
        this.string = string;
    }
}
