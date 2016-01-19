package net.skoumal.joogar.example;

import android.app.Application;

import com.facebook.stetho.Stetho;

import net.skoumal.joogar.example.models.BooleanFieldAnnotatedModel;
import net.skoumal.joogar.example.models.BooleanFieldExtendedModel;
import net.skoumal.joogar.example.models.DoubleFieldAnnotatedModel;
import net.skoumal.joogar.example.models.DoubleFieldExtendedModel;
import net.skoumal.joogar.example.models.FloatFieldAnnotatedModel;
import net.skoumal.joogar.example.models.FloatFieldExtendedModel;
import net.skoumal.joogar.example.models.IncompleteAnnotatedModel;
import net.skoumal.joogar.example.models.IntegerFieldAnnotatedModel;
import net.skoumal.joogar.example.models.IntegerFieldExtendedModel;
import net.skoumal.joogar.example.models.LongFieldAnnotatedModel;
import net.skoumal.joogar.example.models.LongFieldExtendedModel;
import net.skoumal.joogar.example.models.NestedAnnotatedModel;
import net.skoumal.joogar.example.models.NestedExtendedModel;
import net.skoumal.joogar.example.models.NestedMixedAAModel;
import net.skoumal.joogar.example.models.NestedMixedABModel;
import net.skoumal.joogar.example.models.NestedMixedBAModel;
import net.skoumal.joogar.example.models.NestedMixedBBModel;
import net.skoumal.joogar.example.models.NewNote;
import net.skoumal.joogar.example.models.Note;
import net.skoumal.joogar.example.models.NoteRelation;
import net.skoumal.joogar.example.models.RelationshipAnnotatedModel;
import net.skoumal.joogar.example.models.RelationshipExtendedModel;
import net.skoumal.joogar.example.models.RelationshipMixedAModel;
import net.skoumal.joogar.example.models.RelationshipMixedBModel;
import net.skoumal.joogar.example.models.ShortFieldAnnotatedModel;
import net.skoumal.joogar.example.models.ShortFieldExtendedModel;
import net.skoumal.joogar.example.models.SimpleAnnotatedModel;
import net.skoumal.joogar.example.models.SimpleExtendedModel;
import net.skoumal.joogar.example.models.StringFieldAnnotatedModel;
import net.skoumal.joogar.example.models.StringFieldExtendedModel;
import net.skoumal.joogar.example.models.Tag;
import net.skoumal.joogar.example.models.TextNote;
import net.skoumal.joogar.shared.Joogar;
import net.skoumal.joogar.shared.JoogarDatabase;
import net.skoumal.joogar.shared.JoogarDatabaseBuilder;

public class ClientApp extends Application {
    @Override
    public void onCreate() {
        super.onCreate();
        JoogarDatabaseBuilder builder = new JoogarDatabaseBuilder()
            .setName("example")
            .setVersion(1)
            .setDomainClasses(BooleanFieldAnnotatedModel.class,
                    BooleanFieldExtendedModel.class,
                    DoubleFieldAnnotatedModel.class,
                    DoubleFieldExtendedModel.class,
                    FloatFieldAnnotatedModel.class,
                    FloatFieldExtendedModel.class,
                    IncompleteAnnotatedModel.class,
                    IntegerFieldAnnotatedModel.class,
                    IntegerFieldExtendedModel.class,
                    LongFieldAnnotatedModel.class,
                    LongFieldExtendedModel.class,
                    NestedAnnotatedModel.class,
                    NestedExtendedModel.class,
                    NestedMixedAAModel.class,
                    NestedMixedABModel.class,
                    NestedMixedBAModel.class,
                    NestedMixedBBModel.class,
                    NewNote.class,
                    Note.class,
                    NoteRelation.class,
                    RelationshipAnnotatedModel.class,
                    RelationshipExtendedModel.class,
                    RelationshipMixedAModel.class,
                    RelationshipMixedBModel.class,
                    ShortFieldAnnotatedModel.class,
                    ShortFieldExtendedModel.class,
                    SimpleAnnotatedModel.class,
                    SimpleExtendedModel.class,
                    StringFieldAnnotatedModel.class,
                    StringFieldExtendedModel.class,
                    Tag.class,
                    TextNote.class
                    );

        Joogar.initForAndroid(this)
            .addDB(builder);

        Stetho.initialize(
                Stetho.newInitializerBuilder(this)
                        .enableDumpapp(
                                Stetho.defaultDumperPluginsProvider(this))
                        .enableWebKitInspector(
                                Stetho.defaultInspectorModulesProvider(this))
                        .build());
    }
}
