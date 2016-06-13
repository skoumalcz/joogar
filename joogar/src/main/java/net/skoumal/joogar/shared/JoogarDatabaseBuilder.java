package net.skoumal.joogar.shared;

import net.skoumal.joogar.shared.util.SchemaGenerator;

import java.io.File;
import java.security.InvalidParameterException;
import java.util.Arrays;
import java.util.List;

/**
 * Created by gingo on 14.4.2015.
 */
public class JoogarDatabaseBuilder {
    private int version = 1;
    private File dbPath;
    private String dbName = "joogar";
    private List<Class> domainClasses;

    /**
     * Enables write-ahead-log mode. Enabled by default because of better performance in most of
     * use-cases.
     */
    private boolean walMode = true;

    /**
     * Sets database version. It fires migration of database structure if this version is higher
     * than version of database (usually previous version filled here). Default version is 1.
     * @param version required version, allowed is 1 or higher
     * @return builder
     */
    public JoogarDatabaseBuilder setVersion(int version) {

        if(version < 1) {
            throw new IllegalArgumentException("Lowest allowed version is 1.");
        }

        this.version = version;
        return this;
    }

    /**
     * Defines particular db file to open. Use {@link #setName(String)} method to define
     * only database name and store it to default place.
     *
     * @param path path to your database
     */
    public JoogarDatabaseBuilder setFile(File path) {
        this.dbPath = path;
        return this;
    }

    /**
     * Database string identifier. When there is no filename set via {@link #setFile(java.io.File)}
     * method it is also used to determine filename in default location. Default name is "joogar".
     *
     * @param name desired database name
     */
    public JoogarDatabaseBuilder setName(String name) {
        this.dbName = name;
        return this;
    }

    public String getName() {
        return dbName;
    }

    public JoogarDatabaseBuilder setDomainClasses(Class... domainClasses) {
        this.domainClasses = Arrays.asList(domainClasses);
        return this;
    }

    public JoogarDatabaseBuilder setDomainClasses(List<Class> domainClasses) {
        this.domainClasses = domainClasses;
        return this;
    }

    public List<Class> getDomainClasses() {
        return domainClasses;
    }

    /**
     * Enables write-ahead-log (WAL) mode. Cannot be enabled for API levels below 16, for those will be
     * silently ignored. For Android API level 16 and higher and for iOS is WAL enabled by default
     * because of better performance in most of use-cases and ability to read while performing
     * transaction in the other thread.
     *
     * @param gWalMode true to enable write-ahead-log mode
     */
    public void setWalMode(boolean gWalMode) {
        walMode = gWalMode;
    }

    public boolean isWalMode() {
        return walMode;
    }

    public JoogarDatabase build(JoogarObjectAbstractFactory gObjectFactory) {
        JoogarDatabase db = createDatabase(gObjectFactory);

        int currentVersion = db.getVersion();
        int requiredVersion = version;

        SchemaGenerator schemaGenerator = new SchemaGenerator(db, dbName);

        if (currentVersion > requiredVersion) {
            throw new RuntimeException("Version downgrade is currently not supported.");
        } else if(currentVersion < requiredVersion) {
            schemaGenerator.doUpgrade(currentVersion, requiredVersion, domainClasses);
        }

        db.setVersion(requiredVersion);

        return db;
    }

    private JoogarDatabase createDatabase(JoogarObjectAbstractFactory gObjectFactory) {
        JoogarDatabase db;
        if (dbPath != null) {
            db = gObjectFactory.getDatabase(dbPath, walMode);
        } else if (dbName != null) {
            db = gObjectFactory.getDatabase(dbName, walMode);
        } else {
            throw new InvalidParameterException("Please define database path or name.");
        }
        return db;
    }
}
