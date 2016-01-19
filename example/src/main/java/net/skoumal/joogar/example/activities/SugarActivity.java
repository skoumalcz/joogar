package net.skoumal.joogar.example.activities;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;

import net.skoumal.joogar.example.models.NewNote;
import net.skoumal.joogar.example.models.Note;
import net.skoumal.joogar.example.models.Tag;
import net.skoumal.joogar.example.models.TextNote;
import net.skoumal.joogar.shared.JoogarDatabaseResult;
import net.skoumal.joogar.shared.JoogarRecord;

import com.example.R;

public class SugarActivity extends Activity
{
    /**
     * Called when the activity is first created.
     */
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);

        initDb();

        // join example
        JoogarRecord.find(Note.class, null, null, null, null, null, new JoogarRecord.OneToOnePrefetch("tag", "tagId", "id"));

        Intent intent = new Intent(this, NoteListActivity.class);
        startActivity(intent);
    }

    private void initDb() {
        JoogarRecord.deleteAll(Note.class);
        JoogarRecord.deleteAll(TextNote.class);
        JoogarRecord.deleteAll(Tag.class);
        JoogarRecord.deleteAll(NewNote.class);

        Tag t1 = new Tag("tag1");
        Tag t2 = new Tag("tag2");
        JoogarRecord.save(t1);
        JoogarRecord.save(t2);

        Note n1 = new Note( 10, "note1", "description1", t1);
        Note n2 = new Note(11, "note12", "description2", t1);
        Note n3 = new Note( 12, "note13", "description3", t2);
        Note n4 = new Note( 13, "note4", "description4", t2);

        TextNote textNote = new TextNote();
        textNote.desc = "Test";

        JoogarRecord.save(textNote);
        JoogarRecord.save(n1);
        JoogarRecord.save(n2);
        JoogarRecord.save(n3);
        JoogarRecord.save(n4);

        n1.setDescription("matrix");
        n1.setTitle("atrix");
        JoogarRecord.save(n1);
        n2.setDescription("matrix");
        n2.setTitle("satrix");
        JoogarRecord.save(n2);
        n3.setDescription("matrix");
        n3.setTitle("batrix");
        JoogarRecord.save(n3);

        NewNote newNote = new NewNote();
        newNote.name = "name";
        JoogarRecord.save(newNote);
    }
}
