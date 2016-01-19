package net.skoumal.joogar.shared;

import java.io.File;
import java.io.InputStream;
import java.util.List;

/**
 * Created by gingo on 9.4.2015.
 */
public interface SystemUtils {

    /**
     * Returns list of upgrade script names (01.sql, 02.sql, ...).
     * @param gDbName database name
     * @return list of scripts
     */
    public List<String> getUpgradeScripts(String gDbName);

    public InputStream openUpgradeScript(String gScriptName);
}
