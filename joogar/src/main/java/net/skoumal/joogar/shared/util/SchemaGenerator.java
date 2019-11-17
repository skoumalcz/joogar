package net.skoumal.joogar.shared.util;

import android.text.TextUtils;

import net.skoumal.joogar.shared.Joogar;
import net.skoumal.joogar.shared.JoogarDatabase;
import net.skoumal.joogar.shared.JoogarDatabaseResult;
import net.skoumal.joogar.shared.JoogarMigration;
import net.skoumal.joogar.shared.SQLException;
import net.skoumal.joogar.shared.cursor.JoogarCursor;
import net.skoumal.joogar.shared.cursor.JoogarCursorImpl;
import net.skoumal.joogar.shared.dsl.Column;
import net.skoumal.joogar.shared.dsl.NotNull;
import net.skoumal.joogar.shared.dsl.TableIndex;
import net.skoumal.joogar.shared.dsl.Unique;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Locale;

public class SchemaGenerator {

    private JoogarDatabase database;

    private String databaseName;

    public SchemaGenerator(JoogarDatabase gDatabase, String gDbName) {
        database = gDatabase;
        databaseName = gDbName;
    }

    /**
     * Dedicated for creating database.
     * @param gDomainClasses database clases
     * @param gVersion version
     * @deprecated no longer used
     */
    @Deprecated
    public void createDatabase(List<Class> gDomainClasses, int gVersion) {
        for (Class domain : gDomainClasses) {
            createTable(domain);

            upgradeTableIndexes(domain);
        }

        executeJoogarUpgrade(0, gVersion, true, new ArrayList<JoogarMigration>());
    }

    public void doUpgrade(int gOldVersion, int gNewVersion, List<Class> gDomainClasses, List<JoogarMigration> migrations) {
        String sql = "select count(*) from sqlite_master where type='table' and name LIKE '%s';";
        for (Class domain : gDomainClasses) {
            JoogarDatabaseResult result = database.rawQuery(String.format(sql, NamingHelper.toSQLName(domain)), null);
            if(result.next() && result.getInt(0) == 0) {
                createTable(domain);
            } else {
                upgradeTable(domain);
            }

            upgradeTableIndexes(domain);

            result.close();
        }
        executeJoogarUpgrade(gOldVersion, gNewVersion, false, migrations);
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

        // fields
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
        result.close();
    }

    private void upgradeTableIndexes(Class table) {
        String tableName = NamingHelper.toSQLName(table);
        List<TableIndex> classIndexes = Joogar.getInstance().getReflectionUtils().getTableIndexes(table);
        List<DatabaseIndex> tableIndexes = new JoogarCursorImpl<DatabaseIndex>(DatabaseIndex.class,
                database.rawQuery("PRAGMA index_list (\"" + tableName + "\")", null)).toListAndClose();

        for (TableIndex ti : classIndexes) {
            String indexName = NamingHelper.toSQLName(ti, table);

            boolean found = false;
            for(int i = 0; i < tableIndexes.size(); i++) {
                if(TextUtils.equals(indexName, tableIndexes.get(i).name)) {
                    tableIndexes.remove(i);
                    found = true;
                    break;
                }
            }

            if(!found) {
                createTableIndex(ti, table);
            }
        }

        for(DatabaseIndex dbIndex : tableIndexes) {
            if(dbIndex.name.startsWith("joogar_idx_")) {
                deleteTableIndex(dbIndex, tableName);
            }
        }
    }

    private void deleteTableIndex(DatabaseIndex gIndex, String gTableName) {
        StringBuilder sb = new StringBuilder("DROP ");
        sb.append("INDEX \"");
        sb.append(gIndex.name);
        sb.append("\"");

        database.execSQL(sb.toString(), null);
    }

    private void createTableIndex(TableIndex gIndex, Class gTable) {
        String indexName = NamingHelper.toSQLName(gIndex, gTable);

        StringBuilder sb = new StringBuilder("CREATE ");
        if(gIndex.unique()) {
            sb.append("UNIQUE ");
        }
        sb.append("INDEX \"");
        sb.append(indexName).append("\" ");
        sb.append("ON \"");
        sb.append(NamingHelper.toSQLName(gTable)).append("\" (");

        boolean first = true;
        for(String column : gIndex.columns()) {
            if(first) {
                first = false;
            } else {
                sb.append(",");
            }

            sb.append(column);
        }

        sb.append(")");

        database.execSQL(sb.toString(), null);
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

    private boolean executeJoogarUpgrade(int gOldVersion, int gNewVersion, boolean isFirstInit, List<JoogarMigration> migrations) {
        if(Joogar.isDebug()) {
            Joogar.getInstance().getLogger().i("Executing joogar upgrade from " + gOldVersion + " to " + gNewVersion);
        }

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

        if(Joogar.isDebug()) {
            Joogar.getInstance().getLogger().i("Found " + migrations.size() + " migrations.");
        }

        Collections.sort(migrations, new Comparator<JoogarMigration>() {
            @Override
            public int compare(JoogarMigration o1, JoogarMigration o2) {
                if (o1.startVersion < o2.startVersion) {
                    return -1;
                } else if (o1.startVersion > o2.startVersion) {
                    return 1;
                }
                return o1.endVersion - o2.endVersion;
            }
        });

        for (JoogarMigration migration : migrations) {
            if (migration.startVersion >= gOldVersion && migration.endVersion <= gNewVersion) {
                migration.migrate(database);
                if(Joogar.isDebug()) {
                    Joogar.getInstance().getLogger().i("Executing migration from " + migration.startVersion + " to " + migration.endVersion);
                }
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

    public static class DatabaseIndex {

        @Column(name = "name")
        public String name;

        @Column(name = "unique")
        public boolean unique;
    }

}
