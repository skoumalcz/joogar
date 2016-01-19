package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;

import java.math.BigDecimal;

public class BigDecimalFieldExtendedModel extends JoogarRecord {
    private BigDecimal decimal;

    public BigDecimalFieldExtendedModel() {}

    public BigDecimalFieldExtendedModel(BigDecimal decimal) {
        this.decimal = decimal;
    }

    public BigDecimal getBigDecimal() {
        return decimal;
    }
}
