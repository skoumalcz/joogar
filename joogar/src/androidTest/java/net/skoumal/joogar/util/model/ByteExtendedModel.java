package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;

public class ByteExtendedModel extends JoogarRecord {
    private byte rawByte;
    private Byte objectByte;

    public ByteExtendedModel() {}

    public ByteExtendedModel(byte gByte) {
        this.rawByte = gByte;
    }

    public ByteExtendedModel(Byte gByte) {
        this.objectByte = gByte;
    }

    public byte getRawByte() {
        return rawByte;
    }

    public Byte getObjectByte() {
        return objectByte;
    }
}
