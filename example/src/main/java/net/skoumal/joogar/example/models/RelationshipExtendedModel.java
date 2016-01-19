package net.skoumal.joogar.example.models;

import net.skoumal.joogar.shared.JoogarRecord;

public class RelationshipExtendedModel extends JoogarRecord {
    private SimpleExtendedModel simple;

    public RelationshipExtendedModel() {}

    public RelationshipExtendedModel(SimpleExtendedModel simple) {
        this.simple = simple;
    }

    public SimpleExtendedModel getSimple() {
        return simple;
    }
}
