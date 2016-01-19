package net.skoumal.joogar.example.models;
import net.skoumal.joogar.shared.JoogarRecord;

public class StringFieldExtendedModel extends JoogarRecord {
    private String string;

    public StringFieldExtendedModel() {}

    public StringFieldExtendedModel(String string) {
        this.string = string;
    }

    public String getString() {
        return string;
    }
}
