package net.skoumal.joogar.performance;

import android.util.Log;

import net.skoumal.joogar.shared.Joogar;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.shared.SystemUtils;
import net.skoumal.joogar.util.CrudTestCase;
import net.skoumal.joogar.util.model.BooleanFieldAnnotatedModel;
import net.skoumal.joogar.util.model.BooleanFieldExtendedModel;
import net.skoumal.joogar.util.model.ComposedExtendedModel;
import net.skoumal.joogar.util.model.DoubleFieldAnnotatedModel;
import net.skoumal.joogar.util.model.DoubleFieldExtendedModel;
import net.skoumal.joogar.util.model.IntegerFieldAnnotatedModel;
import net.skoumal.joogar.util.model.StringFieldAnnotatedModel;

import java.lang.reflect.Field;
import java.util.List;

public class ReadWriteTests extends CrudTestCase {

//    public void testRawBooleanAnnotated() {
//        int dataCount = (int)1e4;
//        // write test data
//        Log.d("ReadWriteTests", "Writing started ...");
//        long startTime = System.currentTimeMillis();
//        Joogar.getInstance().getDB(ComposedExtendedModel.class).openTransaction();
//        for(int i = 0; i < dataCount; i++) {
//            JoogarRecord.save(new ComposedExtendedModel((i % 2 == 1), "item"+i, i * 3L, i, (float)i));
//        }
//        Joogar.getInstance().getDB(ComposedExtendedModel.class).commitTransaction();
//        Log.d("ReadWriteTests", "Write time:" + (System.currentTimeMillis() - startTime));
//
//        // read test data
//        startTime = System.currentTimeMillis();
//        List<ComposedExtendedModel> list = JoogarRecord.findAll(ComposedExtendedModel.class).toListAndClose();
//        Log.d("ReadWriteTests", "Read time:" + (System.currentTimeMillis() - startTime));
//
//        assertEquals(dataCount, list.size());
//    }
    
}
