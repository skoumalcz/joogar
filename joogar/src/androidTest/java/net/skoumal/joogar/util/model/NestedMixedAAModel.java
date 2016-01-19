package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;

public class NestedMixedAAModel extends JoogarRecord {
    private RelationshipMixedAModel nested;

    public NestedMixedAAModel() {}

    public NestedMixedAAModel(RelationshipMixedAModel nested) {
        this.nested = nested;
    }

    public RelationshipMixedAModel getNested() {
        return nested;
    }
}
