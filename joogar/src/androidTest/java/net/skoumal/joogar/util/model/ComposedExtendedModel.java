package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;

public class ComposedExtendedModel extends JoogarRecord {

    private boolean active;
    private String name;
    private long created;
    private int size;
    private double floating;

    public ComposedExtendedModel() {}

    public ComposedExtendedModel(boolean gActive, String gName, Long gCreated, int gSize, double gFloating) {
        active = gActive;
        name = gName;
        created = gCreated;
        size = gSize;
        floating = gFloating;
    }
}
