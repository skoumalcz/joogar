package net.skoumal.joogar.shared.dsl;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

@Retention(RetentionPolicy.RUNTIME)
public @interface Column {
    String name();
    boolean unique() default false;
    boolean notNull() default false;
}
