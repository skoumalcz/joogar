package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;

public class NestedMixedABModel extends JoogarRecord {
    private RelationshipMixedBModel nested;

    public NestedMixedABModel() {}

    public NestedMixedABModel(RelationshipMixedBModel nested) {
        this.nested = nested;
    }

    public RelationshipMixedBModel getNested() {
        return nested;
    }
}
