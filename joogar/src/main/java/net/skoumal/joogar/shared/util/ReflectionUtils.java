package net.skoumal.joogar.shared.util;

import net.skoumal.joogar.shared.Joogar;
import net.skoumal.joogar.shared.JoogarDatabaseResult;
import net.skoumal.joogar.shared.dsl.Ignore;

import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.math.BigDecimal;
import java.sql.Timestamp;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.Collections;
import java.util.Date;
import java.util.List;
import java.util.Objects;

public abstract class ReflectionUtils {

    public List<Field> getTableFields(Class table) {
        List<Field> fieldList = JoogarConfig.getFields(table);
        if (fieldList != null) {
            return fieldList;
        }

        List<Field> typeFields = new ArrayList<Field>();

        getAllFields(typeFields, table);

        List<Field> toStore = new ArrayList<Field>();
        for (Field field : typeFields) {
            if (!field.isAnnotationPresent(Ignore.class) && !Modifier.isStatic(field.getModifiers()) && !Modifier.isTransient(field.getModifiers())) {
                toStore.add(field);
            }
        }

        JoogarConfig.setFields(table, toStore);
        return toStore;
    }

    private List<Field> getAllFields(List<Field> fields, Class<?> type) {
        Collections.addAll(fields, type.getDeclaredFields());

        if (type.getSuperclass() != null) {
            fields = getAllFields(fields, type.getSuperclass());
        }

        return fields;
    }

    public Object getFieldValue(Field column, Object object) {
        column.setAccessible(true);
        try {
            Object columnValue = getFieldValueNative(object, column);

            if(columnValue == null) {
                return null;
            } else {
//                Class<?> columnType = columnValue.getClass();
                Class<?> columnType = column.getType();

                if (Timestamp.class.equals(columnType)) {
                    return ((Timestamp) columnValue).getTime();
                } else if (Date.class.equals(columnType)) {
                    return ((Date) columnValue).getTime();
                } else if (Calendar.class.equals(columnType)) {
                    return ((Calendar) columnValue).getTimeInMillis();
                } else if (columnType.equals(Byte.class) || columnType.equals(byte.class) ||
						columnType.equals(Character.class) || columnType.equals(char.class) ||
						columnType.equals(Integer.class) || columnType.equals(int.class) ||
                        columnType.equals(Short.class) || columnType.equals(short.class) ||
                        columnType.equals(Long.class) || columnType.equals(long.class) ||
                        columnType.equals(Float.class) || columnType.equals(float.class) ||
                        columnType.equals(Double.class) || columnType.equals(double.class)) {
                    return columnValue;
                } else if (columnType.equals(Boolean.class) || columnType.equals(boolean.class)) {
                    return ((Boolean) columnValue) ? 1 : 0;
                } else if (columnType.getName().equals("[B")) {
                    return columnValue;
                } else if (columnType.isEnum()) {
                    return ((Enum) columnValue).name();
                } else {
                    return String.valueOf(columnValue);
                }
            }

        } catch (IllegalAccessException e) {
            throw new RuntimeException(e);
        }
    }

    public int inflate(JoogarDatabaseResult cursor, Object object, int startIndex) {
        List<Field> columns = getTableFields(object.getClass());

        for (Field field : columns) {

            setFieldValueFromResult(cursor, field, object, startIndex);

            if(startIndex >= 0) {
                startIndex ++;
            }
        }

        return startIndex;
    }

    public void setFieldValueFromResult (JoogarDatabaseResult result, Field field, Object object, int columnIndex) {
        field.setAccessible(true);
        try {
            Class fieldType = field.getType();
            String colName = NamingHelper.toSQLName(field);

            if(columnIndex < 0) {
                columnIndex = result.getColumnIndex(colName);
            }

            if(columnIndex < 0) {
                Joogar.getInstance().getLogger().w("Column " + colName + " not found in query result.");
                return;
            }

            if (result.isNull(columnIndex)) {
                return;
            }
            if (fieldType.equals(long.class) || fieldType.equals(Long.class)) {
                setFieldValueNative(object, field, result.getLong(columnIndex));
            } else if (fieldType.equals(String.class)) {
                String val = result.getString(columnIndex);
                setFieldValueNative(object, field, val != null && val.equals("null") ? null : val);
            } else if (fieldType.equals(double.class) || fieldType.equals(Double.class)) {
                setFieldValueNative(object, field, result.getDouble(columnIndex));
            } else if (fieldType.equals(boolean.class) || fieldType.equals(Boolean.class)) {
                setFieldValueNative(object, field, result.getString(columnIndex).equals("1"));
            } else if (fieldType.getName().equals("[B")) {
                setFieldValueNative(object, field, result.getBlob(columnIndex));
            } else if (fieldType.equals(int.class) || fieldType.equals(Integer.class)) {
                setFieldValueNative(object, field, result.getInt(columnIndex));
            } else if (fieldType.equals(float.class) || fieldType.equals(Float.class)) {
                setFieldValueNative(object, field, result.getFloat(columnIndex));
            } else if (fieldType.equals(short.class) || fieldType.equals(Short.class)) {
                setFieldValueNative(object, field, (short) result.getInt(columnIndex));
			} else if (fieldType.equals(char.class) || fieldType.equals(Character.class)) {
				setFieldValueNative(object, field, (char) result.getInt(columnIndex));
            } else if (fieldType.equals(byte.class) || fieldType.equals(Byte.class)) {
				setFieldValueNative(object, field, (byte) result.getInt(columnIndex));
            } else if (fieldType.equals(BigDecimal.class)) {
                String val = result.getString(columnIndex);
                setFieldValueNative(object, field, val != null && val.equals("null") ? null : new BigDecimal(val));
            } else if (fieldType.equals(Timestamp.class)) {
                long l = result.getLong(columnIndex);
                setFieldValueNative(object, field, new Timestamp(l));
            } else if (fieldType.equals(Date.class)) {
                long l = result.getLong(columnIndex);
                setFieldValueNative(object, field, new Date(l));
            } else if (fieldType.equals(Calendar.class)) {
                long l = result.getLong(columnIndex);
                Calendar c = Calendar.getInstance();
                c.setTimeInMillis(l);
                setFieldValueNative(object, field, c);
            } else if (Enum.class.isAssignableFrom(fieldType)) {
                try {
                    Method valueOf = fieldType.getMethod("valueOf", String.class);
                    String strVal = result.getString(columnIndex);
                    Object enumVal = valueOf.invoke(fieldType, strVal);
                    setFieldValueNative(object, field, enumVal);
                } catch (Exception e) {
                    Joogar.getInstance().getLogger().e("Enum cannot be read from Sqlite3 database. Please check the type of field " + field.getName());
                }
            } else {
                Joogar.getInstance().getLogger().e("Class " + object.getClass().getName() + "cannot be read from Sqlite3 database. Please check the type of field " + field.getName() + "(" + field.getType().getName() + ")");
            }
        } catch (IllegalArgumentException e) {
            Joogar.getInstance().getLogger().e("IllegalArgumentException: " + e.getMessage());
        } catch (IllegalAccessException e) {
            Joogar.getInstance().getLogger().e("IllegalAccessException:" + e.getMessage());
        }
    }
    
    public Field getDeepField(String fieldName, Class<?> type) {
        try {
            Field field = type.getDeclaredField(fieldName);
            return field;
        } catch (NoSuchFieldException e) {
            Class superclass = type.getSuperclass();
            if (superclass != null) {
                Field field = getDeepField(fieldName, superclass);
                return field;
            } else {
                return null;
            }
        }
    }

    public abstract void setFieldValueNative(Object gObject, Field gField, Object gValue) throws IllegalAccessException;

    public abstract Object getFieldValueNative(Object gObject, Field gField) throws IllegalAccessException;;
}
