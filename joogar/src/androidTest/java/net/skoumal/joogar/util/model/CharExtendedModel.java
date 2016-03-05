package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.JoogarRecord;

public class CharExtendedModel extends JoogarRecord {
    private char rawChar;
    private Character objectCharacter;

    public CharExtendedModel() {}

    public CharExtendedModel(char gChar) {
        this.rawChar = gChar;
    }

    public CharExtendedModel(Character gChar) {
        this.objectCharacter = gChar;
    }

    public char getRawChar() {
        return rawChar;
    }

    public Character getObjectCharacter() {
        return objectCharacter;
    }
}
