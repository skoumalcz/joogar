package net.skoumal.joogar.example.models;

import net.skoumal.joogar.shared.dsl.Table;

@Table
public class StringFieldAnnotatedModel {
    private String string;
    private Long id;

    public StringFieldAnnotatedModel() {}

    public StringFieldAnnotatedModel(String string) {
        this.string = string;
    }

    public String getString() {
        return string;
    }
}
