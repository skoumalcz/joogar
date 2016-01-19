package net.skoumal.joogar.unit.query;

import net.skoumal.joogar.shared.cursor.JoogarCursor;
import net.skoumal.joogar.shared.JoogarRecord;
import net.skoumal.joogar.shared.util.NamingHelper;

import java.util.ArrayList;
import java.util.List;

public class Select<T> {

    private Class<T> record;
    private String[] arguments;
    private String whereClause = "";
    private String orderBy;
    private String groupBy;
    private String limit;
    private String offset;
    private List<Object> args = new ArrayList<Object>();

    public Select(Class<T> record) {
        this.record = record;
    }

    public static <T> Select<T> from(Class<T> record) {
        return new Select<T>(record);
    }

    public Select<T> orderBy(String prop) {
        this.orderBy = prop;
        return this;
    }

    public Select<T> groupBy(String prop) {
        this.groupBy = prop;
        return this;
    }

    public Select<T> limit(String limit) {
        this.limit = limit;
        return this;
    }

    public Select<T> where(String whereClause) {
        this.whereClause = whereClause;
        return this;
    }

    public Select<T> where(Condition... condition) {

        mergeConditions(condition, Condition.Type.AND);

        return this;
    }

    private void mergeConditions(Condition[] conditions, Condition.Type type) {
        StringBuilder toAppend = new StringBuilder("");
        for (Condition condition : conditions) {
            if (toAppend.length() != 0) {
                toAppend.append(" ").append(type.name()).append(" ");
            }

            if (Condition.Check.LIKE.equals(condition.getCheck()) ||
                    Condition.Check.NOT_LIKE.equals(condition.getCheck())) {
                toAppend
                    .append(condition.getProperty())
                    .append(condition.getCheckSymbol())
                    .append("'")
                    .append(condition.getValue().toString())
                    .append("'");
            } else if (Condition.Check.IS_NULL.equals(condition.getCheck()) ||
                    Condition.Check.IS_NOT_NULL.equals(condition.getCheck())) {
                toAppend
                    .append(condition.getProperty())
                    .append(condition.getCheckSymbol());
            } else {
                toAppend
                    .append(condition.getProperty())
                    .append(condition.getCheckSymbol())
                    .append("? ");
                args.add(condition.getValue());
            }
        }
        
        if (!"".equals(whereClause)) {
            whereClause += " " + type.name() + " ";
        }

        whereClause += "(" + toAppend + ")";
    }

    public Select<T> whereOr(Condition... args) {
        mergeConditions(args, Condition.Type.OR);
        return this;
    }

    public Select<T> and(Condition... args) {
        mergeConditions(args, Condition.Type.AND);
        return this;
    }

    public Select<T> or(Condition... args) {
        mergeConditions(args, Condition.Type.OR);
        return this;
    }

    public Select<T> where(String whereClause, String[] args) {
        this.whereClause = whereClause;
        this.arguments = args;
        return this;
    }

    public JoogarCursor<T> find() {
        if (arguments == null) {
            arguments = convertArgs(args);
        }

        return JoogarRecord.find(record, whereClause, arguments, groupBy, orderBy, limit);
    }
    
    public long count() {
        if (arguments == null) {
            arguments = convertArgs(args);
        }

        //TODO [2] respect groupBy, orderBy, limit
        return JoogarRecord.count(record, whereClause, arguments);
    }

    public T first() {
        if (arguments == null) {
            arguments = convertArgs(args);
        }

        JoogarCursor<T> cursor = JoogarRecord.find(record, whereClause, arguments, groupBy, orderBy, "1");
        return cursor.next();
    }
    
    String toSql() {
        StringBuilder sql = new StringBuilder();
        sql.append("SELECT * FROM ").append(NamingHelper.toSQLName(this.record)).append(" ");

        if (whereClause != null) {
            sql.append("WHERE ").append(whereClause).append(" ");
        }

        if (orderBy != null) {
            sql.append("ORDER BY ").append(orderBy).append(" ");
        }

        if (limit != null) {
            sql.append("LIMIT ").append(limit).append(" ");
        }

        if (offset != null) {
            sql.append("OFFSET ").append(offset).append(" ");
        }

        return sql.toString();
    }

    String getWhereCond() {
        return whereClause;
    }

    String[] getArgs() {
        return convertArgs(args);
    }

    private String[] convertArgs(List<Object> argsList) {
        String[] argsArray = new String[argsList.size()];

        for (int i = 0; i < argsList.size(); i++) {
             argsArray[i] = argsList.get(i).toString();
        }

        return argsArray;
    }

}
