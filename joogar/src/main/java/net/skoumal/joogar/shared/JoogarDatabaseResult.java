package net.skoumal.joogar.shared;

/**
 * Created by gingo on 4.4.2015.
 */
public interface JoogarDatabaseResult {

    public boolean next();

    public void close();

    public int count();

    public int getPosition();

    public int getColumnIndex(String colName);

    public boolean isNull(int columnIndex);

    public long getLong(int columnIndex);

    public String getString(int columnIndex);

    public double getDouble(int columnIndex);

    public byte[] getBlob(int columnIndex);

    public int getInt(int columnIndex);

    public float getFloat(int columnIndex);

    public void setPosition(int position);

    public boolean allowsRandomAccess();
}
