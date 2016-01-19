package net.skoumal.joogar.example.activities;

import android.app.ListActivity;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.ArrayAdapter;

import net.skoumal.joogar.example.models.NewNote;
import net.skoumal.joogar.example.models.Note;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.shared.cursor.JoogarCursor;
import net.skoumal.joogar.unit.query.Condition;
import net.skoumal.joogar.unit.query.Select;

import com.example.R;


public class NoteListActivity extends ListActivity {
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.notelist);

        JoogarCursor<Note> notes = Select.from(Note.class).orderBy("title").find();
        JoogarCursor<NewNote> list = JoogarRecord.findAll(NewNote.class);

        setListAdapter(new ArrayAdapter<Note>(this, android.R.layout.simple_list_item_1, notes.toList()));

        findViewById(R.id.Button01).setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(NoteListActivity.this, AddNoteActivity.class);
                startActivity(intent);
            }
        });

        Log.d("COUNT", "Count: " + Select.from(Note.class).where(new Condition[]{new Condition("title").eq("note")}).count() + "/" + notes.getCount());
    }
}
