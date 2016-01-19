package net.skoumal.joogar.example.models;

import net.skoumal.joogar.shared.JoogarRecord;

public class IntegerFieldExtendedModel extends JoogarRecord {
    private Integer integer;
    private int rawInteger;

    public IntegerFieldExtendedModel() {}

    public IntegerFieldExtendedModel(Integer integer) {
        this.integer = integer;
    }

    public IntegerFieldExtendedModel(int rawInteger) {
        this.rawInteger = rawInteger;
    }

    public Integer getInteger() {
        return integer;
    }

    public int getInt() {
        return rawInteger;
    }
}
