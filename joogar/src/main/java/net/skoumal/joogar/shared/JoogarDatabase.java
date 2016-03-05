package net.skoumal.joogar.shared;

//import android.content.pm.PackageInfo;
import android.text.TextUtils;

import net.skoumal.joogar.shared.util.NamingHelper;
import net.skoumal.joogar.shared.util.QueryBuilder;
import net.skoumal.joogar.shared.util.SchemaGenerator;

import java.io.File;
import java.lang.reflect.Field;
import java.security.InvalidParameterException;
import java.util.Arrays;
import java.util.List;

/**
 * Created by gingo on 3.4.2015.
 */
public abstract class JoogarDatabase {

    private File path;

    /**
     * Create new database object.
     * @param gPath path to database file
     */
    public JoogarDatabase(File gPath) {
        path = gPath;
    }

    /**
     * @deprecated please switch to constructor with path param
     */
    public JoogarDatabase() {

    }

    public int delete(String table, String whereClause, String[] whereArgs) throws SQLException {
        return execSQL("DELETE FROM " + table +
                (!TextUtils.isEmpty(whereClause) ? " WHERE " + whereClause : ""), whereArgs);
    }

    public abstract JoogarDatabaseResult rawQuery(String query, String[] arguments) throws SQLException;

    public abstract int execSQL(String query, String[] arguments) throws SQLException;

    public JoogarDatabaseResult query(String table, String join, String[] columns, String whereClause,
                                      String[] whereArgs, String groupBy, String having,
                                      String orderBy, String limit) throws SQLException {
        String sql = QueryBuilder.buildQueryString(
                false, table, join, columns, whereClause, groupBy, having, orderBy, limit);
        return rawQuery(sql, whereArgs);
    }

    public long insertOrUpdate(String table, List<Field> columns, Object[] values) throws SQLException {
        StringBuilder sql = new StringBuilder();

        sql.append("INSERT OR REPLACE INTO " + table + "(");

        int i = 0;
        for (Field col : columns) {
            String colName = NamingHelper.toSQLName(col);
            sql.append((i > 0) ? "," : "");
            sql.append(colName);
            i++;
        }
        sql.append(')');
        sql.append(" VALUES (").append(QueryBuilder.generatePlaceholders(columns.size())).append(')');

        String sqlStr = sql.toString();
        if(Joogar.isDebug())
        {
            Joogar.getInstance().getLogger().i(sqlStr);
        }

        return insertOrUpdateInternal(sqlStr, values);
    }

    protected abstract long insertOrUpdateInternal(String gSqlStr, Object[] gValue);

    /**
     * Return current database version. Could be determined by SQL query: "PRAGMA user_version;"
     *
     * @return current database version
     */
    public int getVersion() {
        JoogarDatabaseResult result = rawQuery("PRAGMA user_version;", null);
        result.next();
        int version = result.getInt(0);
        result.close();
        return version;
    }

    /**
     * Database version. Used for upgrading database schema.
     *
     * @param gVersion desired version
     */
    public void setVersion(int gVersion) {
        execSQL("PRAGMA user_version = " + gVersion, null);
    }

    public void openTransaction() {
        execSQL("BEGIN TRANSACTION", null);
    }

    public void commitTransaction() {
        execSQL("COMMIT TRANSACTION", null);
    }

    public void rollbackTransaction() {
        execSQL("ROLLBACK TRANSACTION", null);
    }

    public File getPath() {
        return path;
    }

    public abstract void close();
}
