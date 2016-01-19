package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;

public class ByteArrayExtendedModel extends JoogarRecord {
    private byte[] byteArray;

    public ByteArrayExtendedModel() {}

    public ByteArrayExtendedModel(byte[] byteArray) {
        this.byteArray = byteArray;
    }

    public byte[] getByteArray() {
        return byteArray;
    }
}
