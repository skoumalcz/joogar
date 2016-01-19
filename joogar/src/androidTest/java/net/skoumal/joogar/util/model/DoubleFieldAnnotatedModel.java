package net.skoumal.joogar.util.model;


import net.skoumal.joogar.shared.dsl.Table;

@Table
public class DoubleFieldAnnotatedModel {
    public Double objectDouble;
    public double rawDouble;
    private Long id;

    public DoubleFieldAnnotatedModel() {}

    public DoubleFieldAnnotatedModel(Double objectDouble) {
        this.objectDouble = objectDouble;
    }

    public DoubleFieldAnnotatedModel(double rawDouble) {
        this.rawDouble = rawDouble;
    }

    public Double getDouble() {
        return objectDouble;
    }

    public double getRawDouble() {
        return rawDouble;
    }
}
