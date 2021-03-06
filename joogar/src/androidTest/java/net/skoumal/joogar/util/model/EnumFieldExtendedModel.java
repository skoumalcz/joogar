package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;

public class EnumFieldExtendedModel extends JoogarRecord {
    public static enum DefaultEnum {
        ONE, TWO
    }

    public static enum OverrideEnum {
        ONE, TWO;

        @Override
        public String toString() {
            return super.toString().toLowerCase();
        }
    }

    private OverrideEnum overrideEnum;
    private DefaultEnum defaultEnum;

    public EnumFieldExtendedModel() {

    }

    public EnumFieldExtendedModel(OverrideEnum e1, DefaultEnum d1) {
        overrideEnum = e1;
        defaultEnum = d1;
    }

    public DefaultEnum getDefaultEnum() {
        return defaultEnum;
    }

    public void setDefaultEnum(DefaultEnum defaultEnum) {
        this.defaultEnum = defaultEnum;
    }

    public void setOverrideEnum(OverrideEnum overrideEnum) {
        this.overrideEnum = overrideEnum;
    }

    public OverrideEnum getOverrideEnum() {
        return overrideEnum;
    }
}
