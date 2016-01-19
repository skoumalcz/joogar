/*
 * Copyright 2015 SKOUMAL, s.r.o.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package net.skoumal.joogar.shared;

import net.skoumal.joogar.shared.util.ReflectionUtils;

import java.lang.reflect.Constructor;
import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;

// IOS import
/*-[#import "IOSJoogarObjectFactory.h"]-*/

/**
 *
 */
public class Joogar {

    private static Joogar instance;

    private boolean isIos;

    private boolean isAndroid;

    private JoogarObjectAbstractFactory objectFactory;

    private JoogarLogger logger;

    private static boolean isDebug;

    private SystemUtils systemUtils;

    private ReflectionUtils reflectionUtils;

    private JoogarDatabase firstDatabase = null;

    private Hashtable<String, JoogarDatabase> nameToDatabase = new Hashtable<>();

    private Hashtable<String, JoogarDatabase> entityToDatabase = new Hashtable<>();

    private Joogar() {

    }

    public static Joogar getInstance() {
        return instance;
    }

    public static Joogar initForAndroid(Object gContext) {
        if(instance != null) {
            throw new IllegalStateException("Joogar already initialized.");
        }
        instance = new Joogar();
        instance.isAndroid = true;
        instance.objectFactory = instance.createAndroidObjectFactory(gContext);
        instance.initCommon();

        return instance;
    }

    public static Joogar initForIos() {
        instance = new Joogar();
        instance.isIos = true;
        instance.objectFactory = instance.createIosObjectFactory();
        instance.initCommon();

        return instance;
    }

    private void initCommon() {
        logger = objectFactory.getLogger();
        systemUtils = objectFactory.getSystemUtils();
        reflectionUtils = objectFactory.getReflectionUtils();
    }

    public Joogar addDB(JoogarDatabaseBuilder gBuilder) {
        if(nameToDatabase.get(gBuilder.getName()) != null) {
            throw new IllegalArgumentException("Database with name " + gBuilder.getName() + " already exists.");
        }

        // create database
        //TODO [3] implement attach database functionality:
        // https://www.sqlite.org/lang_attach.html
        // attaching should be preferred way to add more databases
        JoogarDatabase database = gBuilder.build(objectFactory);

        // keep reference to database
        nameToDatabase.put(gBuilder.getName(), database);
        if(firstDatabase == null) {
            firstDatabase = database;
        }

        // assign entities to database
        List<Class> domainClasses = gBuilder.getDomainClasses();
        for(Class c : domainClasses) {
            JoogarDatabase oldValue = entityToDatabase.put(c.getName(), database);

            if(oldValue != null) {
                throw new IllegalArgumentException("You are trying to assign entity '" + c.getName() +
                        "' to more than one database. Use different sublasses if you need the " +
                        "same entity stored in more databases.");
            }
        }

        return this;
    }

    public JoogarDatabase getDB(Class<?> gType) {
        String entityName = gType.getName();
        JoogarDatabase database = entityToDatabase.get(entityName);

        if(database == null) {
            throw  new RuntimeException("Database for type " + gType.getName() + " not found. Did you mention it in JoogarDatabaseBuilder.setDomainClasses()?");
        }

        return database;
    }

    public JoogarDatabase getDB(String dbName) {
        return nameToDatabase.get(dbName);
    }

    /**
     * Returns first added database. Handy for one-database use-cases.
     * @return first database added
     */
    public JoogarDatabase getDB() {
        return firstDatabase;
    }

    public JoogarLogger getLogger() {
        return logger;
    }

    public SystemUtils getSystemUtils() {
        return systemUtils;
    }

    public ReflectionUtils getReflectionUtils() {
        return reflectionUtils;
    }

    private native JoogarObjectAbstractFactory createIosObjectFactory() /*-[
        return [[IOSJoogarObjectFactory alloc] init];
    ]-*/;

    private JoogarObjectAbstractFactory createAndroidObjectFactory(Object gContext) {
        try {
            Class<?> androidObjectFactoryClass = Class.forName("net.skoumal.joogar.android.AndroidObjectFactory");
            Class<?> androidContextClass = Class.forName("android.content.Context");
            Constructor constructor = androidObjectFactoryClass.getConstructor(androidContextClass);

            return (JoogarObjectAbstractFactory) constructor.newInstance(gContext);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    public static boolean isDebug() {
        return isDebug;
    }

    public static void setDebug(boolean gDebug) {
        isDebug = gDebug;
    }

    public List<JoogarDatabase> getDBList() {
        return new ArrayList<>(nameToDatabase.values());
    }

    public void close() {
        List<JoogarDatabase> databaseList = getDBList();

        for(JoogarDatabase jd : databaseList) {
            jd.close();
        }

        instance = null;
    }
}
