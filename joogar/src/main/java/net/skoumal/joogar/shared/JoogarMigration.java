package net.skoumal.joogar.shared;

public abstract class JoogarMigration {
    public final int startVersion;
    public final int endVersion;

    public JoogarMigration(int startVersion, int endVersion) {
        this.startVersion = startVersion;
        this.endVersion = endVersion;
    }

    public abstract void migrate(JoogarDatabase database);
}
