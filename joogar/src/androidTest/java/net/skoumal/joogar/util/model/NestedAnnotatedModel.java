package net.skoumal.joogar.util.model;


import net.skoumal.joogar.shared.dsl.Table;

@Table
public class NestedAnnotatedModel {
    private RelationshipAnnotatedModel nested;
    private Long id;

    public NestedAnnotatedModel() {}

    public NestedAnnotatedModel(RelationshipAnnotatedModel nested) {
        this.nested = nested;
    }

    public RelationshipAnnotatedModel getNested() {
        return nested;
    }

    public Long getId() {
        return id;
    }
}
