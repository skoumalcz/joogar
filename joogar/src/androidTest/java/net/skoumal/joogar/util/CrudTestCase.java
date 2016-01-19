package net.skoumal.joogar.util;

import android.nfc.Tag;
import android.provider.ContactsContract;
import android.test.AndroidTestCase;
import android.widget.CompoundButton;

import net.skoumal.joogar.util.model.BigDecimalFieldAnnotatedModel;
import net.skoumal.joogar.util.model.BigDecimalFieldExtendedModel;
import net.skoumal.joogar.util.model.BooleanFieldAnnotatedModel;
import net.skoumal.joogar.util.model.BooleanFieldExtendedModel;
import net.skoumal.joogar.util.model.ByteArrayAnnotatedModel;
import net.skoumal.joogar.util.model.ByteArrayExtendedModel;
import net.skoumal.joogar.util.model.ComposedExtendedModel;
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
import net.skoumal.joogar.shared.Joogar;
import net.skoumal.joogar.shared.JoogarDatabase;
import net.skoumal.joogar.shared.JoogarDatabaseBuilder;

import java.util.List;

/**
 * Created by gingo on 12.5.2015.
 */
public class CrudTestCase extends AndroidTestCase {

    @Override
    protected void setUp() throws Exception {
        super.setUp();

        JoogarDatabaseBuilder builder = new JoogarDatabaseBuilder()
                .setName("example")
                .setVersion(1)
                .setDomainClasses(BooleanFieldAnnotatedModel.class,
                        BigDecimalFieldAnnotatedModel.class,
                        BigDecimalFieldExtendedModel.class,
                        BooleanFieldExtendedModel.class,
                        ByteArrayAnnotatedModel.class,
                        ByteArrayExtendedModel.class,
                        DoubleFieldAnnotatedModel.class,
                        DoubleFieldExtendedModel.class,
                        EnumFieldAnnotatedModel.class,
                        EnumFieldExtendedModel.class,
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
                        ContactsContract.CommonDataKinds.Note.class,
                        RelationshipAnnotatedModel.class,
                        RelationshipExtendedModel.class,
                        RelationshipMixedAModel.class,
                        RelationshipMixedBModel.class,
                        ShortFieldAnnotatedModel.class,
                        ShortFieldExtendedModel.class,
                        SimpleAnnotatedModel.class,
                        SimpleExtendedModel.class,
                        StringFieldAnnotatedModel.class,
                        StringFieldAnnotatedNoIdModel.class,
                        StringFieldExtendedModel.class,
                        ComposedExtendedModel.class,
                        Tag.class
                );

        Joogar.initForAndroid(getContext())
                .addDB(builder);
    }

    @Override
    protected void tearDown() throws Exception {
        super.tearDown();

        List<JoogarDatabase> list = Joogar.getInstance().getDBList();

        for(JoogarDatabase jd : list) {
            jd.close();
            boolean deleted = jd.getPath().delete();
            if(!deleted) {
                fail("Cannot delete database.");
            }
        }

        Joogar.getInstance().close();
    }
}
