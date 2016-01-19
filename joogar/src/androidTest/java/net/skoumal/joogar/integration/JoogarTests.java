package net.skoumal.joogar.integration;

import android.nfc.Tag;
import android.provider.ContactsContract;
import android.test.AndroidTestCase;

import net.skoumal.joogar.shared.Joogar;
import net.skoumal.joogar.shared.JoogarDatabase;
import net.skoumal.joogar.shared.JoogarDatabaseBuilder;
import net.skoumal.joogar.util.model.BigDecimalFieldAnnotatedModel;
import net.skoumal.joogar.util.model.BigDecimalFieldExtendedModel;
import net.skoumal.joogar.util.model.BooleanFieldAnnotatedModel;
import net.skoumal.joogar.util.model.BooleanFieldExtendedModel;
import net.skoumal.joogar.util.model.ByteArrayAnnotatedModel;
import net.skoumal.joogar.util.model.ByteArrayExtendedModel;
import net.skoumal.joogar.util.model.DoubleFieldAnnotatedModel;
import net.skoumal.joogar.util.model.DoubleFieldExtendedModel;
import net.skoumal.joogar.util.model.EnumFieldAnnotatedModel;
import net.skoumal.joogar.util.model.EnumFieldExtendedModel;
import net.skoumal.joogar.util.model.FloatFieldAnnotatedModel;
import net.skoumal.joogar.util.model.FloatFieldExtendedModel;
import net.skoumal.joogar.util.model.IncompleteAnnotatedModel;
import net.skoumal.joogar.util.model.IntegerFieldAnnotatedModel;
import net.skoumal.joogar.util.model.IntegerFieldExtendedModel;
import net.skoumal.joogar.util.model.LongFieldAnnotatedModel;
import net.skoumal.joogar.util.model.LongFieldExtendedModel;
import net.skoumal.joogar.util.model.NestedAnnotatedModel;
import net.skoumal.joogar.util.model.NestedExtendedModel;
import net.skoumal.joogar.util.model.NestedMixedAAModel;
import net.skoumal.joogar.util.model.NestedMixedABModel;
import net.skoumal.joogar.util.model.NestedMixedBAModel;
import net.skoumal.joogar.util.model.NestedMixedBBModel;
import net.skoumal.joogar.util.model.RelationshipAnnotatedModel;
import net.skoumal.joogar.util.model.RelationshipExtendedModel;
import net.skoumal.joogar.util.model.RelationshipMixedAModel;
import net.skoumal.joogar.util.model.RelationshipMixedBModel;
import net.skoumal.joogar.util.model.ShortFieldAnnotatedModel;
import net.skoumal.joogar.util.model.ShortFieldExtendedModel;
import net.skoumal.joogar.util.model.SimpleAnnotatedModel;
import net.skoumal.joogar.util.model.SimpleExtendedModel;
import net.skoumal.joogar.util.model.StringFieldAnnotatedModel;
import net.skoumal.joogar.util.model.StringFieldAnnotatedNoIdModel;
import net.skoumal.joogar.util.model.StringFieldExtendedModel;

import java.io.File;
import java.util.ArrayList;
import java.util.List;

/**
 * Created by gingo on 31.5.2015.
 */
public class JoogarTests extends AndroidTestCase {

    public void testOneDBNoName() {
        JoogarDatabaseBuilder builder = new JoogarDatabaseBuilder()
                .setVersion(1)
                .setDomainClasses(BooleanFieldAnnotatedModel.class
                );

        Joogar.initForAndroid(getContext())
                .addDB(builder);

        Joogar joogar = Joogar.getInstance();

        assertNotNull(joogar);

        JoogarDatabase firstDatabase = joogar.getDB();
        assertNotNull(firstDatabase);

        JoogarDatabase joogarDatabase = joogar.getDB("joogar");
        assertNotNull(joogarDatabase);

        JoogarDatabase modelDatabase = joogar.getDB(BooleanFieldAnnotatedModel.class);
        assertNotNull(modelDatabase);

        List<JoogarDatabase> dbList = joogar.getDBList();
        assertNotNull(dbList);
        assertEquals(1, dbList.size());
        JoogarDatabase listFirstDatabase = dbList.get(0);

        assertEquals(firstDatabase, joogarDatabase);
        assertEquals(joogarDatabase, modelDatabase);
        assertEquals(modelDatabase, listFirstDatabase);
    }

    public void testOneDBWithName() {
        JoogarDatabaseBuilder builder = new JoogarDatabaseBuilder()
                .setName("testing")
                .setVersion(1)
                .setDomainClasses(BooleanFieldAnnotatedModel.class
                );

        Joogar.initForAndroid(getContext())
                .addDB(builder);

        Joogar joogar = Joogar.getInstance();

        assertNotNull(joogar);

        JoogarDatabase firstDatabase = joogar.getDB();
        assertNotNull(firstDatabase);


        assertNotNull(joogar.getDB("testing"));

        assertNull(joogar.getDB("joogar"));

        JoogarDatabase modelDatabase = joogar.getDB(BooleanFieldAnnotatedModel.class);
        assertNotNull(modelDatabase);

        List<JoogarDatabase> dbList = joogar.getDBList();
        assertNotNull(dbList);
        assertEquals(1, dbList.size());
        JoogarDatabase listFirstDatabase = dbList.get(0);

        JoogarDatabase testingDatabase = joogar.getDB("testing");
        assertEquals(firstDatabase, testingDatabase);
        assertEquals(testingDatabase, modelDatabase);
        assertEquals(modelDatabase, listFirstDatabase);
    }

    public void testAddExistingDB() {
        Joogar.initForAndroid(getContext());

        JoogarDatabaseBuilder builder = new JoogarDatabaseBuilder()
                .setName("testing")
                .setDomainClasses(BooleanFieldAnnotatedModel.class
                );

        Joogar.getInstance().addDB(builder);

        builder = new JoogarDatabaseBuilder()
                .setName("testing")
                .setDomainClasses(FloatFieldAnnotatedModel.class
                );

        try {
            Joogar.getInstance().addDB(builder);
            fail("Cannot add two databases with the same name, should throw exception.");
        } catch (IllegalArgumentException e) {
            // desired behaviour
        }
    }

    public void testAddDatabaseWithAlreadyAddedEntity() {
        Joogar.initForAndroid(getContext());

        JoogarDatabaseBuilder builder = new JoogarDatabaseBuilder()
                .setName("peach")
                .setDomainClasses(BooleanFieldAnnotatedModel.class
                );

        Joogar.getInstance().addDB(builder);

        builder = new JoogarDatabaseBuilder()
                .setName("plumb")
                .setDomainClasses(BooleanFieldAnnotatedModel.class
                );

        try {
            Joogar.getInstance().addDB(builder);
            fail("Cannot add two databases with the same entity, should throw exception.");
        } catch (IllegalArgumentException e) {
            // desired behaviour
        }
    }

    public void testCloseOneDBAndDeleteFile() {
        Joogar.initForAndroid(getContext());

        JoogarDatabaseBuilder builder = new JoogarDatabaseBuilder()
                .setName("testing")
                .setDomainClasses(BooleanFieldAnnotatedModel.class
                );

        Joogar.getInstance().addDB(builder);

        File dbFile = Joogar.getInstance().getDB().getPath();

        Joogar.getInstance().close();

        assertTrue(dbFile.delete());
    }

    public void testCloseMoreDBsAndDeleteFiles() {
        Joogar.initForAndroid(getContext());

        JoogarDatabaseBuilder builder = new JoogarDatabaseBuilder()
                .setName("testing1")
                .setDomainClasses(BooleanFieldAnnotatedModel.class
                );

        Joogar.getInstance().addDB(builder);

        builder = new JoogarDatabaseBuilder()
                .setName("testing2")
                .setDomainClasses(FloatFieldAnnotatedModel.class
                );

        Joogar.getInstance().addDB(builder);

        List<File> files = new ArrayList<>();
        for(JoogarDatabase db : Joogar.getInstance().getDBList()) {
            files.add(db.getPath());
        }

        Joogar.getInstance().close();

        for(File f : files) {
            assertTrue(f.delete());
        }
    }

    public void testUnitialized() {
        assertNull(Joogar.getInstance());
    }

    public void testGettingNonexistingDB() {
        Joogar.initForAndroid(getContext());

        assertNull(Joogar.getInstance().getDB("this-does-not-exists"));
    }

    public void testGettingDBForUnmappedEntity() {
        Joogar.initForAndroid(getContext());

        assertNull(Joogar.getInstance().getDB(BigDecimalFieldAnnotatedModel.class));
    }

    public void testReinit() {
        Joogar.initForAndroid(getContext());
        try {
            Joogar.initForAndroid(getContext());
            fail("Should throw IllegalStateException");
        } catch(IllegalStateException e) {
            // desired behaviour
        }
    }

    @Override
    protected void tearDown() throws Exception {
        super.tearDown();

        if(Joogar.getInstance() != null) {
            List<JoogarDatabase> list = Joogar.getInstance().getDBList();

            for (JoogarDatabase jd : list) {
                assertTrue(jd.getPath().delete());
            }

            Joogar.getInstance().close();
        }
    }
}
