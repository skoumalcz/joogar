package net.skoumal.joogar.shared.cursor;

import java.util.List;

/**
 * Created by gingo on 14.4.2015.
 */
public interface JoogarCursor<T> extends Iterable<T> {

    /**
     * Returns the numbers of rows in joogar cursor.
     *
     * @return the number of rows in the cursor
     * @deprecated use {@link #size()} instead
     */
    public int getCount();

    /**
     * Returns the number of rows in this cursor.
     * @return number of rows
     */
    public int size();

    /**
     * Returns the current position of the cursor in the row set.
     * The value is zero-based. Initially the cursor is at position -1,
     * which is before the first row. After the
     * last row is returned another call to next() will leave the cursor past
     * the last entry, at a position of count().
     *
     * @return the current cursor position.
     */
    public int getPosition();

    /**
     * Moves the cursor to given position. Allowed values are from 0 to count.
     *
     * @param position the zero-based position to move to
     */
    public void setPosition(int position);

    /**
     * Move the cursor to the next item.
     *
     * Returns true if step forward is possible.
     *
     * @return true for successful move, false otherwise
     */
    public T next();

    /**
     * Checks if there are more rows behind current pointer position.
     * @return true if there is at least one next row
     */
    public boolean hasNext();

    /**
     * Closes the Cursor, releasing all of its underlining resources.
     */
    public void close();

    /**
     * Return true when cursor is close.
     * @return true if {@link #close()} method was called
     */
    public boolean isClosed();

    /**
     * Returns row as item object.
     * @return data object
     * @deprecated use {@link #current()} instead
     */
    public T getItem();

    /**
     * Returns current row as object.
     * @return data object for current row
     */
    public T current();

    /**
     * Creates list from data in this cursor.
     * @return list of cursor data
     */
    public List<T> toList();

    /**
     * Creates list from data in this cursor and closes it.
     * @return list of cursor data
     */
    public List<T> toListAndClose();
}
