package net.skoumal.joogar.integration;

import net.skoumal.joogar.util.model.BigDecimalFieldAnnotatedModel;
import net.skoumal.joogar.util.model.BigDecimalFieldExtendedModel;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.util.CrudTestCase;

import java.math.BigDecimal;

public class BigDecimalFieldTests extends CrudTestCase {

    public void testNullBigDecimalExtended() {
        JoogarRecord.save(new BigDecimalFieldExtendedModel());
        BigDecimalFieldExtendedModel model =
                JoogarRecord.findById(BigDecimalFieldExtendedModel.class, 1);
        assertNull(model.getBigDecimal());
    }

    public void testNullBigDecimalAnnotated() {
        JoogarRecord.save(new BigDecimalFieldAnnotatedModel());
        BigDecimalFieldAnnotatedModel model =
                JoogarRecord.findById(BigDecimalFieldAnnotatedModel.class, 1);
        assertNull(model.getBigDecimal());
    }

    public void testBigDecimalExtended() {
        BigDecimal decimal = new BigDecimal(1234.5678901234567890123456789);
        JoogarRecord.save(new BigDecimalFieldExtendedModel(decimal));
        BigDecimalFieldExtendedModel model = JoogarRecord.findById(BigDecimalFieldExtendedModel.class, 1);
        assertEquals(decimal, model.getBigDecimal());
    }

    public void testBigDecimalAnnotated() {
        BigDecimal decimal = new BigDecimal(1234.5678901234567890123456789);
        JoogarRecord.save(new BigDecimalFieldAnnotatedModel(decimal));
        BigDecimalFieldAnnotatedModel model =
                JoogarRecord.findById(BigDecimalFieldAnnotatedModel.class, 1);
        assertEquals(decimal, model.getBigDecimal());
    }
}
