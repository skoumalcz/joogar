package net.skoumal.joogar.shared;

import net.skoumal.joogar.shared.util.ReflectionUtils;

import java.io.File;

/**
 * Created by gingo on 3.4.2015.
 */
public interface JoogarObjectAbstractFactory {

    public JoogarLogger getLogger();

    public JoogarDatabase getDatabase(String gName);

    public JoogarDatabase getDatabase(File gPath);

    public SystemUtils getSystemUtils();

    public ReflectionUtils getReflectionUtils();
}
