package net.skoumal.joogar.example.models;

import net.skoumal.joogar.shared.dsl.Table;

@Table
public class IntegerFieldAnnotatedModel {
    private Integer integer;
    private int rawInteger;
    public Long id;

    public IntegerFieldAnnotatedModel() {}

    public IntegerFieldAnnotatedModel(Integer integer) {
        this.integer = integer;
    }

    public IntegerFieldAnnotatedModel(int rawInteger) {
        this.rawInteger = rawInteger;
    }

    public Integer getInteger() {
        return integer;
    }

    public int getInt() {
        return rawInteger;
    }
}
