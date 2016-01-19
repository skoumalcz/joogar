package net.skoumal.joogar.example.models;

import net.skoumal.joogar.shared.dsl.Table;

@Table
public class NestedMixedBBModel {
    private RelationshipMixedBModel nested;
    private Long id;

    public NestedMixedBBModel() {}

    public NestedMixedBBModel(RelationshipMixedBModel nested) {
        this.nested = nested;
    }

    public RelationshipMixedBModel getNested() {
        return nested;
    }

    public Long getId() {
        return id;
    }
}
