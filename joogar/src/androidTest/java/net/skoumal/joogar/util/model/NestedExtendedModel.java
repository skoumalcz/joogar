package net.skoumal.joogar.util.model;


import net.skoumal.joogar.shared.JoogarRecord;

public class NestedExtendedModel extends JoogarRecord {
    private RelationshipExtendedModel nested;

    public NestedExtendedModel() {}

    public NestedExtendedModel(RelationshipExtendedModel nested) {
        this.nested = nested;
    }

    public RelationshipExtendedModel getNested() {
        return nested;
    }
}
