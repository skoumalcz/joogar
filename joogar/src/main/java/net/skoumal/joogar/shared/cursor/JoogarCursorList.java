package net.skoumal.joogar.shared.cursor;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 *
 */
public class JoogarCursorList<T> implements JoogarCursor<T> {

    private Class<T> type;
    private List<T> list = new ArrayList<>();
    private int position = -1;
    private boolean isClosed;

    public JoogarCursorList(Class<T> gType, List<T> gList) {
        type = gType;
        list = gList;
    }

    /**
     * Returns the numbers of rows in joogar cursor.
     *
     * @return the number of rows in the cursor
     */
    public int getCount() {
        return size();
    }

    @Override
    public int size() {
        return list.size();
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
        return position;
    }

    /**
     * Moves the cursor to given position. Allowed values are from 0 to count.
     *
     * @param gPosition the zero-based position to move to
     */
    public void setPosition(int gPosition) {
        position = gPosition;
    }

    /**
     * Move the cursor to the next item.
     *
     * Returns true if step forward is possible.
     *
     * @return true for successful move, false otherwise
     */
    public T next() {
        position ++;

        if(0 <= position && position < list.size()) {
            return list.get(position);
        } else {
            return null;
        }
    }

    @Override
    public boolean hasNext() {
        return position < (list.size() - 1);
    }

    /**
     * Closes the Cursor, releasing all of its underlining resources.
     */
    public void close() {
        isClosed = true;
    }

    /**
     * Return true when cursor is close.
     * @return true if {@link #close()} method was called
     */
    public boolean isClosed() {
        return isClosed;
    }

    /**
     * Returns row as item object.
     * @return data object
     */
    public T getItem() {
        return current();
    }

    @Override
    public T current() {
        try {
            return list.get(position);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    @Override
    public List<T> toList() {
        return list;
    }

    @Override
    public List<T> toListAndClose() {
        List<T> list = toList();
        close();
        return list;
    }

    @Override
    public Iterator<T> iterator() {
        return list.iterator();
    }
}
