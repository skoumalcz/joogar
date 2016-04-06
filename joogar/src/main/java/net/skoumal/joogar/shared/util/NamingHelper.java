package net.skoumal.joogar.shared.util;

import net.skoumal.joogar.shared.dsl.Column;
import net.skoumal.joogar.shared.dsl.Table;
import net.skoumal.joogar.shared.dsl.TableIndex;

import java.lang.reflect.Field;

public class NamingHelper {

    /**
     * Converts a given CamelCasedString to lower_case_under_score.
     *
     * @param camelCased  a non empty camelCased string
     * @return the equivalent string converted to lower_case_under_score unless camelCased equals
     *         "_id" (not case sensitive) in which case "_id" is returned
     */
    public static String toSQLNameDefault(String camelCased) {

        StringBuilder sb = new StringBuilder();
        char[] buf = camelCased.toCharArray();

        for (int i = 0; i < buf.length; i++) {
            char prevChar = (i > 0) ? buf[i - 1] : 0;
            char c = buf[i];
            char nextChar = (i < buf.length - 1) ? buf[i + 1] : 0;
            boolean isFirstChar = (i == 0);

            if(c == '_'){
                sb.append("_");
            } else if (isFirstChar || Character.isLowerCase(c) || Character.isDigit(c)) {
                sb.append(Character.toLowerCase(c));
            } else if (Character.isUpperCase(c)) {
                if (Character.isLetterOrDigit(prevChar)) {
                    if (Character.isLowerCase(prevChar)) {
                        sb.append('_').append(Character.toLowerCase(c));
                    } else if (nextChar > 0 && Character.isLowerCase(nextChar)) {
                        sb.append('_').append(Character.toLowerCase(c));
                    } else {
                        sb.append(Character.toLowerCase(c));
                    }
                } else {
                    sb.append(Character.toLowerCase(c));
                }
            }
        }

        return sb.toString();

    }

    /**
     * Maps a Java Field object to the database's column name.
     *
     * @param field  the {@link java.lang.reflect.Field} that will be mapped
     * @return the name of the given Field as represented in the database. If the Field is annotated
     *         with {@link net.skoumal.joogar.shared.dsl.Column} then the {@link net.skoumal.joogar.shared.dsl.Column} will be
     *         returned. Else, the Field's {@link java.lang.reflect.Field#getName()} will be
     *         converted from CamelCase to UNDER_SCORE notation
     */
    public static String toSQLName(Field field) {
        if (field.isAnnotationPresent(Column.class)) {
            Column annotation = field.getAnnotation(Column.class);
            return annotation.name();
        }

        return toSQLNameDefault(field.getName());
    }

    /**
     * Maps a Java Class to the name of the class.
     *
     * @param table  the generic {@link Class<?>} that defines a database table
     * @return if the given class is annotated with {@link net.skoumal.joogar.shared.dsl.Table} then the value for
     *         {@link net.skoumal.joogar.shared.dsl.Table#name()} will be returned. Else, the class' simple name will
     *         be converted from CamelCase to UNDER_SCORE notation
     */
    public static String toSQLName(Class<?> table) {
        if (table.isAnnotationPresent(Table.class)) {
            Table annotation = table.getAnnotation(Table.class);
            if ("".equals(annotation.name())) {
                return NamingHelper.toSQLNameDefault(table.getSimpleName());
            }
            return annotation.name();
        }

        return NamingHelper.toSQLNameDefault(table.getSimpleName());
    }

    public static String toSQLName(TableIndex gIndex, Class<?> gTable) {
        StringBuilder indexName = new StringBuilder();
        indexName.append("joogar_idx");
        if(gIndex.unique()) {
            indexName.append("_unq");
        }
        indexName.append(toSQLName(gTable));
        for (String c : gIndex.columns()){
            indexName.append("_");
            indexName.append(c);
        }

        return indexName.toString();
    }

}
