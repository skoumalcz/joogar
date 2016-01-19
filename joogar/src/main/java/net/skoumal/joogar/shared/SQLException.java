package net.skoumal.joogar.shared;

/**
 * Created by gingo on 11.4.2015.
 */
public class SQLException extends RuntimeException {
    public SQLException() {
    }

    public SQLException(Throwable e) {
        super(e);
    }

    public SQLException(String error) {
        super(error);
    }

    public SQLException(String error, Throwable cause) {
        super(error, cause);
    }
}
