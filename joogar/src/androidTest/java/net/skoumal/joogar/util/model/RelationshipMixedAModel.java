package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;

public class RelationshipMixedAModel extends JoogarRecord {
    private SimpleAnnotatedModel simple;

    public RelationshipMixedAModel() {}

    public RelationshipMixedAModel(SimpleAnnotatedModel simple) {
        this.simple = simple;
    }

    public SimpleAnnotatedModel getSimple() {
        return simple;
    }
}
