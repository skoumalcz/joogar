package net.skoumal.joogar.example.models;

import net.skoumal.joogar.shared.dsl.Table;

@Table
public class SimpleAnnotatedModel {
    private Long id;

    public SimpleAnnotatedModel() {}

    public Long getId() {
        return id;
    }
}
