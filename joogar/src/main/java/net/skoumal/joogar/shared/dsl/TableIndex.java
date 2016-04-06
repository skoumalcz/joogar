package net.skoumal.joogar.shared.dsl;

import java.lang.annotation.Annotation;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

@Retention(RetentionPolicy.RUNTIME)
public @interface TableIndex {
    String[] columns();
    boolean unique() default false;

    public static class TableIndexImpl implements TableIndex {

        private String [] columns;
        private boolean unique;

        public TableIndexImpl(String [] gColumns, boolean gUnique) {
            columns = gColumns;
            unique = gUnique;
        }

        @Override
        public String[] columns() {
            return columns;
        }

        @Override
        public boolean unique() {
            return unique;
        }

        @Override
        public Class<? extends Annotation> annotationType() {
            return TableIndex.class;
        }
    }
}
