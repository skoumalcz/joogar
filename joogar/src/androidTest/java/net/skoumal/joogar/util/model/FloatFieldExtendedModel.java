package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;

public class FloatFieldExtendedModel extends JoogarRecord {
    private Float objectFloat;
    private float rawFloat;

    public FloatFieldExtendedModel() {}

    public FloatFieldExtendedModel(Float objectFloat) {
        this.objectFloat = objectFloat;
    }

    public FloatFieldExtendedModel(float rawFloat) {
        this.rawFloat = rawFloat;
    }

    public Float getFloat() {
        return objectFloat;
    }

    public float getRawFloat() {
        return rawFloat;
    }
}
