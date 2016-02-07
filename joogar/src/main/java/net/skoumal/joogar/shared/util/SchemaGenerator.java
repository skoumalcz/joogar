package net.skoumal.joogar.shared.util;

import net.skoumal.joogar.shared.Joogar;
import net.skoumal.joogar.shared.JoogarDatabase;
import net.skoumal.joogar.shared.JoogarDatabaseResult;
import net.skoumal.joogar.shared.SQLException;
import net.skoumal.joogar.shared.cursor.JoogarCursor;
import net.skoumal.joogar.shared.cursor.JoogarCursorImpl;
import net.skoumal.joogar.shared.dsl.Column;
import net.skoumal.joogar.shared.dsl.NotNull;
import net.skoumal.joogar.shared.dsl.Unique;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.lang.reflect.Field;
import java.util.Collections;
import java.util.List;
import java.util.Locale;

public class SchemaGenerator {

    private JoogarDatabase database;

    private String databaseName;

    public SchemaGenerator(JoogarDatabase gDatabase, String gDbName) {
        database = gDatabase;
        databaseName = gDbName;
    }

    public void createDatabase(List<Class> gDomainClasses, int gVersion) {
        for (Class domain : gDomainClasses) {
            createTable(domain);
        }

        executeJoogarUpgrade(0, gVersion, true);
    }

    public void doUpgrade(int gOldVersion, int gNewVersion, List<Class> gDomainClasses) {
        String sql = "select count(*) from sqlite_master where type='table' and name LIKE '%s';";
        for (Class domain : gDomainClasses) {
            JoogarDatabaseResult result = database.rawQuery(String.format(sql, NamingHelper.toSQLName(domain)), null);
            if(result.next() && result.getInt(0) == 0) {
                createTable(domain);
            } else {
                upgradeTable(domain);
            }
        }
        executeJoogarUpgrade(gOldVersion, gNewVersion, false);
    }

    /**
     * Upgrades table. Only adding columns is supported.
     * It does not remove nor upgrade fields to avoid accidental
     * data loss when field is commented out by mistake etc.
     * @param table domain class representing table
     */
    private void upgradeTable(Class table) {

        if(Joogar.isDebug()) {
            Joogar.getInstance().getLogger().i("Upgrade table");
        }

        List<Field> classFields = Joogar.getInstance().getReflectionUtils().getTableFields(table);
        String tableName = NamingHelper.toSQLName(table);
        JoogarCursor<TableColumn> result = new JoogarCursorImpl<TableColumn>(TableColumn.class,
                database.rawQuery("PRAGMA table_info (\"" + tableName + "\")", null));

        for (Field field : classFields) {
            String columnName = NamingHelper.toSQLName(field);

            TableColumn columnInTable = null;
            for (TableColumn column : result) {
                String columnName1 = column.name.toLowerCase(Locale.UK);
                String columnName2 = columnName.toLowerCase(Locale.UK);
                if (columnName1.equals(columnName2)) {
                    columnInTable = column;
                    break;
                }
            }

            if (columnInTable == null) {
                createTableColumn(table, field);
            } else {
                upgradeTableColumn(table, field);
            }
        }
    }

    private void createTableColumn(Class<?> gTable, Field gField) {
        String tableName = NamingHelper.toSQLName(gTable);
        String columnName = NamingHelper.toSQLName(gField);
        String columnType = QueryBuilder.getColumnType(gField.getType());

        StringBuilder sb = new StringBuilder("ALTER TABLE \"");
        sb.append(tableName).append("\" ");

        String columnDeclaration = createSqlColumnDeclaration(gField, columnName, columnType);
        sb.append("ADD COLUMN ").append(columnDeclaration);

        database.execSQL(sb.toString(), null);

        //TODO [2] indexes
    }

    private void upgradeTableColumn(Class gTable, Field gField) {
        // there is currently no support for table column upgrade in joogar
    }
//
//    public void deleteTables(SQLiteDatabase sqLiteDatabase) {
//        List<Class> tables = getDomainClasses(context);
//        for (Class table : tables) {
//            sqLiteDatabase.execSQL("DROP TABLE IF EXISTS " + NamingHelper.toSQLName(table));
//        }
//    }

    private boolean executeJoogarUpgrade(int gOldVersion, int gNewVersion, boolean isFirstInit) {
        boolean isSuccess = false;

        List<String> files = Joogar.getInstance().getSystemUtils().getUpgradeScripts(databaseName);
        Collections.sort(files, new JoogarUpgradeScriptComparator());
        for (String file : files) {

            if(Joogar.isDebug()) {
                Joogar.getInstance().getLogger().i("Upgrade script : " + file);
            }

            try {
                int version = Integer.valueOf(file.replace(".sql", ""));

                if ((version > gOldVersion) && (version <= gNewVersion)) {
                    executeScript(file, isFirstInit);
                    isSuccess = true;
                }
            } catch (NumberFormatException e) {
                Joogar.getInstance().getLogger().w("Not a joogar script. Ignored." + file);
            }

        }

        return isSuccess;
    }

    /**
     * Reads script file and executes SQL statements. There are some simple requirements for this
     * statements:
     * - every statement starts on new line
     * - every statement has semicolon and new line on its end
     *
     * Lines starting with # are ignored. To avoid executing some statements on database creation
     * and let them execute only for upgrade, put '#-- upgrade only --' line to your script. All
     * following statements will be ignored for database creation.
     * @param file file to be executed
     */
    private void executeScript(String file, boolean isFirstInit) {
        try {
            InputStream is = Joogar.getInstance().getSystemUtils().openUpgradeScript(file);
            BufferedReader reader = new BufferedReader(new InputStreamReader(is));
            String line;
            StringBuilder sqlStatement = new StringBuilder();
            while ((line = reader.readLine()) != null) {
                line.trim();

                if(Joogar.isDebug()) {
                    Joogar.getInstance().getLogger().i(line);
                }

                if(line.startsWith("#")) {
                    if(line.contains("-- upgrade only --") && isFirstInit) {
                        break;
                    } else {
                        continue;
                    }
                } else if(line.endsWith(";")) {
                    try {
                        database.execSQL(sqlStatement.toString() + line, null);
                    } catch (SQLException e) {
                        throw e;
                        //TODO [1] throw exception only in debug mode, to allow to silently fail
                        // in production and avoid not necesary crashes
                    }
                    sqlStatement = new StringBuilder();
                } else {
                    sqlStatement.append(line);
                }            }
        } catch (IOException e) {
            Joogar.getInstance().getLogger().e(e.getMessage());
        }

        if(Joogar.isDebug()) {
            Joogar.getInstance().getLogger().i("Script '" + file.toString() + "' executed.");
        }
    }

    private void createTable(Class<?> table) {
        List<Field> fields = Joogar.getInstance().getReflectionUtils().getTableFields(table);
        String tableName = NamingHelper.toSQLName(table);
        StringBuilder sb = new StringBuilder("CREATE TABLE \"");
        sb.append(tableName).append("\" ( id INTEGER PRIMARY KEY AUTOINCREMENT ");

        for (Field column : fields) {
            String columnName = NamingHelper.toSQLName(column);
            String columnType = QueryBuilder.getColumnType(column.getType());

            if (columnType != null) {
                if (columnName.toLowerCase(Locale.UK).equals("id")) {
                    continue;
                }

                String columnDeclaration = createSqlColumnDeclaration(column, columnName, columnType);

                sb.append(", ").append(columnDeclaration);

                //TODO [2] indexes?
            }
        }

        sb.append(" ) ");

        if(Joogar.isDebug()) {
            Joogar.getInstance().getLogger().i("Creating table " + tableName);
        }

        if (!"".equals(sb.toString())) {
            database.execSQL(sb.toString(), null);
        }
    }

    private String createSqlColumnDeclaration(Field column, String columnName, String columnType) {

        StringBuilder sb = new StringBuilder();

        if (column.isAnnotationPresent(Column.class)) {
            Column columnAnnotation = column.getAnnotation(Column.class);

            sb.append("\"").append(columnName).append("\" ").append(columnType);

            if (columnAnnotation.notNull()) {
                sb.append(" NOT NULL");
            }

            if (columnAnnotation.unique()) {
                sb.append(" UNIQUE");
            }

        } else {
            sb.append("\"").append(columnName).append("\" ").append(" ").append(columnType);

            if (column.isAnnotationPresent(NotNull.class)) {
                sb.append(" NOT NULL");
            }

            if (column.isAnnotationPresent(Unique.class)) {
                sb.append(" UNIQUE");
            }

        }

        return sb.toString();
    }

    public static class TableColumn {
        @Column(name = "name")
        public String name;

        @Column(name = "type")
        public String type;

        @Column(name = "notnull")
        public boolean notnull;

        @Column(name = "dflt_value")
        public String dflt_value;

        @Column(name = "pk")
        public boolean pk;
    }

}
