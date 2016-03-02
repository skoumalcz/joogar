package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.dsl.Table;

@Table
public class ByteAnnotatedModel {
    private byte rawByte;
    private Byte objectByte;
    private Long id;

    public ByteAnnotatedModel() {}

    public ByteAnnotatedModel(byte gByte) {
        this.rawByte = gByte;
    }

    public ByteAnnotatedModel(Byte gByte) {
        this.objectByte = gByte;
    }

    public byte getRawByte() {
        return rawByte;
    }

    public Byte getObjectByte() {
        return objectByte;
    }

    public Long getId() {
        return id;
    }
}
