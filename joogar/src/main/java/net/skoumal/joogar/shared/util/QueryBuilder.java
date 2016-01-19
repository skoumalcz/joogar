package net.skoumal.joogar.shared.util;


import android.text.TextUtils;

import net.skoumal.joogar.shared.JoogarRecord;

import java.util.regex.Pattern;

public class QueryBuilder {

    private static final Pattern sLimitPattern =
            Pattern.compile("\\s*\\d+\\s*(,\\s*\\d+\\s*)?");

    public static String getColumnType(Class<?> type) {
        if ((type.equals(Boolean.class)) ||
                (type.equals(Boolean.TYPE)) ||
                (type.equals(Integer.class)) ||
                (type.equals(Integer.TYPE)) ||
                (type.equals(Long.class)) ||
                (type.equals(Long.TYPE)) || (
                (!type.isPrimitive()) &&
                        (JoogarRecord.class.isAssignableFrom(type))))  {
            return "INTEGER";
        }

        if ((type.equals(java.util.Date.class)) ||
                (type.equals(java.sql.Date.class)) ||
                (type.equals(java.util.Calendar.class))) {
            return "INTEGER";
        }

        if (type.getName().equals("[B")) {
            return "BLOB";
        }

        if ((type.equals(Double.class)) || (type.equals(Double.TYPE)) || (type.equals(Float.class)) ||
                (type.equals(Float.TYPE))) {
            return "FLOAT";
        }

        if ((type.equals(String.class)) || (type.equals(Character.TYPE))) {
            return "TEXT";
        }

        return "";
    }

    public static String generatePlaceholders(int numberOfArgs) {
        if (numberOfArgs < 1) {
            throw new RuntimeException("The number of arguments must be greater than or equal to 1.");
        }

        StringBuilder stringBuilder = new StringBuilder(numberOfArgs * 2 - 1);
        stringBuilder.append("?");
        for (int i = 1; i < numberOfArgs; i++) {
            stringBuilder.append(",?");
        }
        return stringBuilder.toString();
    }

    /**
     * Build an SQL query string from the given clauses.
     *
     * @param distinct true if you want each row to be unique, false otherwise.
     * @param tables The table names to compile the query against.
     * @param columns A list of which columns to return. Passing null will
     *            return all columns, which is discouraged to prevent reading
     *            data from storage that isn't going to be used.
     * @param where A filter declaring which rows to return, formatted as an SQL
     *            WHERE clause (excluding the WHERE itself). Passing null will
     *            return all rows for the given URL.
     * @param groupBy A filter declaring how to group rows, formatted as an SQL
     *            GROUP BY clause (excluding the GROUP BY itself). Passing null
     *            will cause the rows to not be grouped.
     * @param having A filter declare which row groups to include in the cursor,
     *            if row grouping is being used, formatted as an SQL HAVING
     *            clause (excluding the HAVING itself). Passing null will cause
     *            all row groups to be included, and is required when row
     *            grouping is not being used.
     * @param orderBy How to order the rows, formatted as an SQL ORDER BY clause
     *            (excluding the ORDER BY itself). Passing null will use the
     *            default sort order, which may be unordered.
     * @param limit Limits the number of rows returned by the query,
     *            formatted as LIMIT clause. Passing null denotes no LIMIT clause.
     * @return the SQL query string
     */
    public static String buildQueryString(
            boolean distinct, String tables, String join, String[] columns, String where,
            String groupBy, String having, String orderBy, String limit) {
        if (TextUtils.isEmpty(groupBy) && !TextUtils.isEmpty(having)) {
            throw new IllegalArgumentException(
                    "HAVING clauses are only permitted when using a groupBy clause");
        }
        if (!TextUtils.isEmpty(limit) && !sLimitPattern.matcher(limit).matches()) {
            throw new IllegalArgumentException("invalid LIMIT clauses:" + limit);
        }

        StringBuilder query = new StringBuilder(120);

        query.append("SELECT ");
        if (distinct) {
            query.append("DISTINCT ");
        }
        if (columns != null && columns.length != 0) {
            appendColumns(query, columns);
        } else {
            query.append("* ");
        }
        query.append("FROM ");
        query.append(tables);
        if(join != null) {
            query.append(join);
        }
        appendClause(query, " WHERE ", where);
        appendClause(query, " GROUP BY ", groupBy);
        appendClause(query, " HAVING ", having);
        appendClause(query, " ORDER BY ", orderBy);
        appendClause(query, " LIMIT ", limit);

        return query.toString();
    }

    private static void appendClause(StringBuilder s, String name, String clause) {
        if (!TextUtils.isEmpty(clause)) {
            s.append(name);
            s.append(clause);
        }
    }

    /**
     * Add the names that are non-null in columns to s, separating
     * them with commas.
     */
    public static void appendColumns(StringBuilder s, String[] columns) {
        int n = columns.length;

        for (int i = 0; i < n; i++) {
            String column = columns[i];

            if (column != null) {
                if (i > 0) {
                    s.append(", ");
                }
                s.append(column);
            }
        }
        s.append(' ');
    }
}
