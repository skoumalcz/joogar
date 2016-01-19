package net.skoumal.joogar.example.models;

import net.skoumal.joogar.shared.dsl.Table;

@Table(name = "text_note")
public class TextNote extends Note {
    public String desc;

    public TextNote() {
    }
}
