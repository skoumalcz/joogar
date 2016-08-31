package net.skoumal.joogar.shared.cursor;

import net.skoumal.joogar.shared.Joogar;
import net.skoumal.joogar.shared.JoogarDatabaseResult;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.shared.util.ReflectionUtils;

import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 *
 */
public class JoogarCursorImpl<T> implements JoogarCursor<T>, Iterator<T> {

    private Class<T> type;
    private JoogarDatabaseResult result;

    private boolean isClosed = false;

    private JoogarRecord.Prefetch[] prefetches = null;

    ReflectionUtils reflectionUtils;

    public JoogarCursorImpl(Class<T> gType, JoogarDatabaseResult gResult) {
        this(gType, gResult, null);
    }

    public JoogarCursorImpl(Class<T> gType, JoogarDatabaseResult gResult, JoogarRecord.Prefetch[] gPrefetches) {
        type = gType;
        result = gResult;
        prefetches = gPrefetches;

        reflectionUtils = Joogar.getInstance().getReflectionUtils();
    }

    /**
     * Returns the numbers of rows in joogar cursor.
     *
     * @return the number of rows in the cursor
     */
    public int getCount() {
        return size();
    }

    public int size() {
        return result.count();
    }

    /**
     * Returns the current position of the cursor in the row set.
     * The value is zero-based. Initially the cursor is at position -1,
     * which is before the first row. After the
     * last row is returned another call to next() will leave the cursor past
     * the last entry, at a position of count().
     *
     * @return the current cursor position.
     */
    public int getPosition() {
        return result.getPosition();
    }

    /**
     * Moves the cursor to given position. Allowed values are from 0 to count.
     *
     * @param position the zero-based position to move to
     */
    public void setPosition(int position) {
        result.setPosition(position);
    }

    @Override
    public boolean hasNext() {
        return result.getPosition() < (result.count() - 1);
    }

    /**
     * Move the cursor to the next item.
     * <p/>
     * Returns true if step forward is possible.
     *
     * @return true for successful move, false otherwise
     */
    public T next() {
        if (result.next()) {
            return getItem();
        } else {
            return null;
        }
    }

    @Override
    public void remove() {
        throw new UnsupportedOperationException("Remove is not supported for joogar cursor iterator.");
    }

    /**
     * Closes the Cursor, releasing all of its underlining resources.
     */
    public void close() {
        isClosed = true;
        result.close();
    }

    /**
     * Return true when cursor is close.
     *
     * @return true if {@link #close()} method was called
     */
    public boolean isClosed() {
        return isClosed;
    }

    /**
     * Returns row as item object.
     *
     * @return data object
     */
    public T getItem() {
        return current();
    }

    public T current() {
        try {
            T entity = type.getDeclaredConstructor().newInstance();
            if (prefetches == null) {
                reflectionUtils.inflate(result, entity, -1);
            } else {
                int index = reflectionUtils.inflate(result, entity, 0);
                inflatePrefetches(type, entity, result, prefetches, index);
            }
            return entity;
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    @Override
    public List<T> toList() {
        List<T> list = new ArrayList<>();
        setPosition(-1);
        T item;
        while ((item = next()) != null) {
            list.add(item);
        }
        return list;
    }

    @Override
    public List<T> toListAndClose() {
        List<T> list = toList();
        close();
        return list;
    }

    private <T> void inflatePrefetches(Class<?> type, Object entity, JoogarDatabaseResult result, JoogarRecord.Prefetch[] prefetches, int index) throws InstantiationException, IllegalAccessException, java.lang.reflect.InvocationTargetException, NoSuchMethodException {
        for (JoogarRecord.Prefetch p : prefetches) {
            if (p instanceof JoogarRecord.OneToOnePrefetch) {
                JoogarRecord.OneToOnePrefetch otop = (JoogarRecord.OneToOnePrefetch) p;
                Field field = reflectionUtils.getDeepField(otop.getField(), type);
                Class<?> fieldType = field.getType();

                Object prefetchedEntity = fieldType.getDeclaredConstructor().newInstance();
                index = reflectionUtils.inflate(result, prefetchedEntity, index);
                reflectionUtils.setFieldValueNative(entity, field, prefetchedEntity);

                inflatePrefetches(fieldType, prefetchedEntity, result, otop.getChildPrefetch(), index);
            }
        }
    }

    @Override
    public Iterator<T> iterator() {
        setPosition(-1); // reset position pointer
        return this;
    }
}
