package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.dsl.Table;

@Table
public class StringFieldAnnotatedModel {
    public String string;
    public Long id;

    public StringFieldAnnotatedModel() {}

    public StringFieldAnnotatedModel(String string) {
        this.string = string;
    }

    public String getString() {
        return string;
    }

    public void setString(String string) {
        this.string = string;
    }
}
