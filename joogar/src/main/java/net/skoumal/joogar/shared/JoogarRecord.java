package net.skoumal.joogar.shared;

import android.text.TextUtils;

import net.skoumal.joogar.shared.cursor.JoogarCursor;
import net.skoumal.joogar.shared.cursor.JoogarCursorImpl;
import net.skoumal.joogar.shared.cursor.JoogarCursorList;
import net.skoumal.joogar.shared.dsl.Table;
import net.skoumal.joogar.shared.util.NamingHelper;
import net.skoumal.joogar.shared.util.QueryBuilder;
import net.skoumal.joogar.shared.util.ReflectionUtils;

import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;
import java.util.Locale;

public class JoogarRecord {

    protected Long id = null;

    public static <T> int deleteAll(Class<T> type) {
        return Joogar.getInstance().getDB(type).delete(NamingHelper.toSQLName(type), null, null);
    }

    public static <T> int deleteAll(Class<T> type, String whereClause, String... whereArgs) {
        return Joogar.getInstance().getDB(type).delete(NamingHelper.toSQLName(type), whereClause, whereArgs);
    }

    @SuppressWarnings("deprecation")
    public static <T> void saveInTx(T... objects) {
        saveInTx(Arrays.asList(objects));
    }

    @SuppressWarnings("deprecation")
    public static <T> void saveInTx(Collection<T> objects) {
        //TODO [1] impl
        throw new RuntimeException("Not implemented");
//        SQLiteDatabase sqLiteDatabase = getSugarContext().getSugarDb().getDB();
//        try {
//            sqLiteDatabase.beginTransaction();
//            sqLiteDatabase.setLockingEnabled(false);
//            for (T object: objects) {
//                JOgarRecord.save(object);
//            }
//            sqLiteDatabase.setTransactionSuccessful();
//        } catch (Exception e) {
//            Log.i("Sugar", "Error in saving in transaction " + e.getMessage());
//        } finally {
//            sqLiteDatabase.endTransaction();
//            sqLiteDatabase.setLockingEnabled(true);
//        }
    }

    @SuppressWarnings("deprecation")
    public static <T> void deleteInTx(T... objects) {
        //TODO [1] impl
        throw new RuntimeException("Not implemented");
//        deleteInTx(Arrays.asList(objects));
    }

    @SuppressWarnings("deprecation")
    public static <T> void deleteInTx(Collection<T> objects) {
        //TODO [1] impl
        throw new RuntimeException("Not implemented");
//        SQLiteDatabase sqLiteDatabase = getSugarContext().getSugarDb().getDB();
//        try {
//            sqLiteDatabase.beginTransaction();
//            sqLiteDatabase.setLockingEnabled(false);
//            for (T object : objects) {
//                SugarRecord.delete(object);
//            }
//            sqLiteDatabase.setTransactionSuccessful();
//        } catch (Exception e) {
//            Log.i("Sugar", "Error in deleting in transaction " + e.getMessage());
//        } finally {
//            sqLiteDatabase.endTransaction();
//            sqLiteDatabase.setLockingEnabled(true);
//        }
    }

    public static <T> T findById(Class<T> type, Long id) {
        JoogarCursor<T> cursor = find(type, "id=?", new String[]{String.valueOf(id)}, null, null, "1");
        T result = cursor.next();
        cursor.close();
        return result; // return first (and only one) item
    }

    public static <T> T findById(Class<T> type, Integer id) {
        return findById(type, Long.valueOf(id));
    }

    //TODO [1] why is here list of strings and not longs?
    public static <T> JoogarCursor<T> findById(Class<T> type, String[] ids) {
        String whereClause = "id IN (" + QueryBuilder.generatePlaceholders(ids.length) + ")";
        return find(type, whereClause, ids);
    }

    public static <T> JoogarCursor<T> findAll(Class<T> type) {
        return find(type, null, null, null, null, null, null);
    }

    public static <T> JoogarCursor<T> find(Class<T> type, String whereClause, String... whereArgs) {
        return find(type, whereClause, whereArgs, null, null, null, null);
    }

    public static <T> JoogarCursor<T> findWithQuery(Class<T> type, String query, String... arguments) {
        JoogarDatabase database = Joogar.getInstance().getDB(type);
        JoogarDatabaseResult result = database.rawQuery(query, arguments);

        JoogarCursor<T> cursor = new JoogarCursorImpl<T>(type, result);
        if(result.allowsRandomAccess()) {
            return cursor;
        } else {
            List<T> list = cursor.toList();
            cursor.close();
            return new JoogarCursorList<T>(type, list);
        }
    }

    public static void executeQuery(String query, String... arguments) {
        Joogar.getInstance().getDB().execSQL(query, arguments);
    }

    public static void executeQuery(String dbName, String query, String... arguments) {
        Joogar.getInstance().getDB(dbName).execSQL(query, arguments);
    }

    public static <T> JoogarCursor<T> find(Class<T> type, String whereClause, String[] whereArgs, String groupBy, String orderBy, String limit) {
        return find(type, whereClause, whereArgs, groupBy, orderBy, limit, null);
    }

    public static <T> JoogarCursor<T> find(Class<T> type, String whereClause, String[] whereArgs,
                                   String groupBy, String orderBy, String limit, Prefetch ... prefetches) {
        JoogarDatabase database = Joogar.getInstance().getDB(type);

        //List<T> toRet = new ArrayList<T>();
        String table = NamingHelper.toSQLName(type);
        List<String> columns = new ArrayList<>();

        // join for prefetches
        String join;
        if(prefetches != null) {
            StringBuilder joinBuilder = new StringBuilder();
            buildJoinForPrefetches(type, prefetches, table, joinBuilder, columns);
            join = joinBuilder.toString();
        } else {
            join = null;
        }

        JoogarDatabaseResult result = database.query(table, join, columns.toArray(new String[columns.size()]),
                whereClause, whereArgs, groupBy, null, orderBy, limit);

        JoogarCursor<T> cursor;
        if(prefetches != null){
            cursor = new JoogarCursorImpl<T>(type, result, prefetches);
        }else{
            cursor = new JoogarCursorImpl<T>(type, result);
        }

        if(result.allowsRandomAccess()) {
            return cursor;
        } else {
            List<T> list = cursor.toList();
            cursor.close();
            return new JoogarCursorList<T>(type, list);
        }
    }

    private static <T> void buildJoinForPrefetches(Class<T> type, Prefetch[] prefetches, String table, StringBuilder joinBuilder, List<String> columns) {

        List<Field> fields = Joogar.getInstance().getReflectionUtils().getTableFields(type);
        for (Field f : fields) {
            columns.add(table + "." + NamingHelper.toSQLName(f));
        }

        for(Prefetch p : prefetches) {
            if(p instanceof OneToOnePrefetch) {
                OneToOnePrefetch otop = (OneToOnePrefetch)p;
                Field field = Joogar.getInstance().getReflectionUtils().getDeepField(otop.getField(), type);
                if(field == null) {
                    throw new RuntimeException("Prefetch field '" + otop.getField() + "' not found for entity " + type.getName());
                }
                String tableFrom = table;
                String tableTo = NamingHelper.toSQLName(field);
                joinBuilder.append(" JOIN ");
                joinBuilder.append(tableTo);
                joinBuilder.append(" ON ");
                joinBuilder.append(tableFrom).append(".").append(NamingHelper.toSQLNameDefault(otop.getFieldFrom()));
                joinBuilder.append(" = ");
                joinBuilder.append(tableTo).append(".").append(NamingHelper.toSQLNameDefault(otop.getFieldTo()));
                buildJoinForPrefetches(field.getType(), otop.getChildPrefetch(), tableTo, joinBuilder, columns);
            }
        }
    }

    public static <T> long count(Class<?> type) {
        return count(type, null, null);
    }

    public static <T> long count(Class<?> type, String whereClause, String[] whereArgs) {

        JoogarDatabase database = Joogar.getInstance().getDB(type);

        String filter = (!TextUtils.isEmpty(whereClause)) ? " where "  + whereClause : "";
        JoogarDatabaseResult result = database.rawQuery("SELECT count(*) FROM " + NamingHelper.toSQLName(type) + filter, whereArgs);

        result.next();
        int count = result.getInt(0);

        result.close();

        return count;
    }

    public static long save(Object object) {
        return save(Joogar.getInstance().getDB(object.getClass()), object);
    }

    static long save(JoogarDatabase db, Object object) {
        List<Field> columns = Joogar.getInstance().getReflectionUtils().getTableFields(object.getClass());

        Object [] values = new Object[columns.size()];
        Field idField = null;
        for (int i = 0; i < columns.size(); i++) {
            Field column = columns.get(i);
            values[i] = Joogar.getInstance().getReflectionUtils().getFieldValue(column, object);
            if (column.getName().toLowerCase(Locale.UK).equals("id")) {
                idField = column;
                if(values[i] != null && ((Number)values[i]).longValue() < 1) {
                    values[i] = null;
                }
            }
        }

        JoogarDatabase database = Joogar.getInstance().getDB(object.getClass());
        long id = database.insertOrUpdate(NamingHelper.toSQLName(object.getClass()), columns, values);

        if(id > 0) {
            if (object.getClass().isAnnotationPresent(Table.class)) {
                if (idField != null) {
                    idField.setAccessible(true);
                    try {
                        idField.set(object, new Long(id));
                    } catch (IllegalAccessException e) {
                        throw new RuntimeException(e);
                    }
                } else {
                    throw new SQLException("There is no primary key for " + object.getClass().getName());
                }
            } else if (JoogarRecord.class.isAssignableFrom(object.getClass())) {
                ((JoogarRecord) object).setId(id);
            }
        }

        if(Joogar.isDebug()) {
            Joogar.getInstance().getLogger().i(object.getClass().getSimpleName() + " saved : " + id);
        }

        return id;
    }

    public boolean delete() {
        Long id = getId();
        Class<?> type = getClass();
        if (id != null && id > 0L) {
            return deleteById(type, id);
        } else {
            Joogar.getInstance().getLogger().w("Cannot delete object: " + type.getSimpleName() + " - object has not been saved");
            return false;
        }
    }

    public static boolean deleteById(Class<?> type, Long id) {
        JoogarDatabase db = Joogar.getInstance().getDB(type);
        int deletedCount = db.delete(NamingHelper.toSQLName(type), "id=?", new String[]{id.toString()});
        if(Joogar.isDebug()) {
            Joogar.getInstance().getLogger().i(type.getSimpleName() + " deleted : " + id.toString());
        }
        return deletedCount == 1;
    }

    public static boolean delete(Object object) {
        Class<?> type = object.getClass();
        if (type.isAnnotationPresent(Table.class)) {
            try {
                Field field = type.getDeclaredField("id");
                field.setAccessible(true);
                Long id = (Long) field.get(object);
                if (id != null && id > 0L) {
                    return deleteById(type, id);
                } else {
                    Joogar.getInstance().getLogger().w("Cannot delete object: " + object.getClass().getSimpleName() + " - object has not been saved");
                    return false;
                }
            } catch (NoSuchFieldException e) {
                Joogar.getInstance().getLogger().w("Cannot delete object: " + object.getClass().getSimpleName() + " - annotated object has no id");
                return false;
            } catch (IllegalAccessException e) {
                Joogar.getInstance().getLogger().w("Cannot delete object: " + object.getClass().getSimpleName() + " - can't access id");
                return false;
            }
        } else if (JoogarRecord.class.isAssignableFrom(type)) {
            return ((JoogarRecord) object).delete();
        } else {
            Joogar.getInstance().getLogger().w("Cannot delete object: " + object.getClass().getSimpleName() + " - not persisted");
            return false;
        }
    }

    public static void openTransaction() {
        JoogarDatabase db = Joogar.getInstance().getDB();
        db.openTransaction();
    }

    public static void openTransaction(Class<?> gType) {
        JoogarDatabase db = Joogar.getInstance().getDB(gType);
        db.openTransaction();
    }

    public static void commitTransaction() {
        JoogarDatabase db = Joogar.getInstance().getDB();
        db.commitTransaction();
    }

    public static void commitTransaction(Class<?> gType) {
        JoogarDatabase db = Joogar.getInstance().getDB(gType);
        db.commitTransaction();
    }

    public static void rollbackTransaction() {
        JoogarDatabase db = Joogar.getInstance().getDB();
        db.rollbackTransaction();
    }

    public static void rollbackTransaction(Class<?> gType) {
        JoogarDatabase db = Joogar.getInstance().getDB(gType);
        db.rollbackTransaction();
    }

    public long save() {
        return save(Joogar.getInstance().getDB(getClass()), this);
    }

    /**
     * Save array of objects without transaction, or in transaction you previously opened.
     * @param objects array of object to be saved
     * @param <T>
     */
    public static <T> void save(T... objects) {
        save(Arrays.asList(objects));
    }

    /**
     * Save collection of objects without transaction, or in transaction you previously opened.
     * @param objects collection of object to be saved
     * @param <T>
     */
    public static <T> void save(Collection<T> objects) {
        for (T object: objects) {
            JoogarRecord.save(object);
        }
    }

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public static class Prefetch {

    }

    public static class OneToOnePrefetch extends Prefetch {

        private String field;
        private String fieldFrom;
        private String fieldTo;
        private boolean optional;
        private Prefetch[] childPrefetch;

        public OneToOnePrefetch(String gField, String gFieldFrom, String gFieldTo, Prefetch ... gChildPrefetches) {
            this(gField, gFieldFrom, gFieldTo, false, gChildPrefetches);
        }

        public OneToOnePrefetch(String gField, String gConditionFrom, String gConditionTo, boolean gOptional, Prefetch ... gChildPrefetches) {
            field = gField;
            fieldFrom = gConditionFrom;
            fieldTo = gConditionTo;
            optional = gOptional;
            childPrefetch = gChildPrefetches;
        }

        public String getField() {
            return field;
        }

        public String getFieldFrom() {
            return fieldFrom;
        }

        public String getFieldTo() {
            return fieldTo;
        }

        public boolean isOptional() {
            return optional;
        }

        public Prefetch[] getChildPrefetch() {
            return childPrefetch;
        }
    }

}
