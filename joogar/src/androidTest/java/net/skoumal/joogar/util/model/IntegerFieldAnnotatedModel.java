package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.dsl.Table;

@Table
public class IntegerFieldAnnotatedModel {
    public Integer integer;
    public int rawInteger;
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
