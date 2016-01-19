package net.skoumal.joogar.shared;

/**
 * Created by gingo on 3.4.2015.
 */
public interface JoogarLogger {

    /**
     * Prints error message
     * @param gMsg message
     */
    public void e(String gMsg);

    /**
     * Prints warning message
     * @param gMsg message
     */
    public void w(String gMsg);

    /**
     * Prints info message
     * @param gMsg message
     */
    public void i(String gMsg);

    /**
     * Prints debug message
     * @param gMsg message
     */
    public void d(String gMsg);
}
