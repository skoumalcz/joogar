package net.skoumal.joogar.util.model;

import net.skoumal.joogar.shared.dsl.Table;

@Table
public class CharAnnotatedModel {
    private char rawChar;
    private Character objectCharacter;
    private Long id;

    public CharAnnotatedModel() {}

    public CharAnnotatedModel(char gChar) {
        this.rawChar = gChar;
    }

    public CharAnnotatedModel(Character gCharacter) {
        this.objectCharacter = gCharacter;
    }

    public char getRawChar() {
        return rawChar;
    }

    public Character getObjectCharacter() {
        return objectCharacter;
    }

    public Long getId() {
        return id;
    }
}
