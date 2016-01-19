package net.skoumal.joogar.example.models;

import net.skoumal.joogar.shared.JoogarRecord;

public class DoubleFieldExtendedModel extends JoogarRecord {
    private Double objectDouble;
    private double rawDouble;

    public DoubleFieldExtendedModel() {}

    public DoubleFieldExtendedModel(Double objectDouble) {
        this.objectDouble = objectDouble;
    }

    public DoubleFieldExtendedModel(double rawDouble) {
        this.rawDouble = rawDouble;
    }

    public Double getDouble() {
        return objectDouble;
    }

    public double getRawDouble() {
        return rawDouble;
    }
}
