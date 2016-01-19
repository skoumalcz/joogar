package net.skoumal.joogar.util.model;

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
