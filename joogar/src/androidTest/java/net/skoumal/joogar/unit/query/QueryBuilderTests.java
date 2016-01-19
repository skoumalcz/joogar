package net.skoumal.joogar.unit.query;

import junit.framework.Assert;
import junit.framework.TestCase;

import net.skoumal.joogar.shared.util.QueryBuilder;

public class QueryBuilderTests extends TestCase {

    public void testNoArguments() {
        try {
            QueryBuilder.generatePlaceholders(0);
            Assert.fail("Should throw RuntimeException.");
        } catch (RuntimeException e) {
            // great!
        }
    }

    public void testOneArgument() {
        assertEquals("?", QueryBuilder.generatePlaceholders(1));
    }

    public void testTwoArguments() {
        assertEquals("?,?", QueryBuilder.generatePlaceholders(2));
    }

    public void manyArgumentsTest() {
        assertEquals("?,?,?,?,?,?,?,?,?,?", QueryBuilder.generatePlaceholders(10));
    }
}
