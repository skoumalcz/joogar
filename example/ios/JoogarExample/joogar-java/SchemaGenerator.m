//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../../joogar/src/main/java/net/skoumal/joogar/shared/util/SchemaGenerator.java
//

#include "Column.h"
#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "Joogar.h"
#include "JoogarCursor.h"
#include "JoogarCursorImpl.h"
#include "JoogarDatabase.h"
#include "JoogarDatabaseResult.h"
#include "JoogarLogger.h"
#include "JoogarUpgradeScriptComparator.h"
#include "NamingHelper.h"
#include "NotNull.h"
#include "QueryBuilder.h"
#include "ReflectionUtils.h"
#include "SQLException.h"
#include "SchemaGenerator.h"
#include "SystemUtils.h"
#include "Unique.h"
#include "java/io/BufferedReader.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/InputStreamReader.h"
#include "java/lang/Integer.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Collections.h"
#include "java/util/List.h"
#include "java/util/Locale.h"

@interface JavaSchemaGenerator () {
 @public
  JavaJoogarDatabase *database_;
  NSString *databaseName_;
}

- (void)upgradeTableWithIOSClass:(IOSClass *)table;

- (void)createTableColumnWithIOSClass:(IOSClass *)gTable
             withJavaLangReflectField:(JavaLangReflectField *)gField;

- (void)upgradeTableColumnWithIOSClass:(IOSClass *)gTable
              withJavaLangReflectField:(JavaLangReflectField *)gField;

- (jboolean)executeJoogarUpgradeWithInt:(jint)gOldVersion
                                withInt:(jint)gNewVersion
                            withBoolean:(jboolean)isFirstInit;

- (void)executeScriptWithNSString:(NSString *)file
                      withBoolean:(jboolean)isFirstInit;

- (void)createTableWithIOSClass:(IOSClass *)table;

- (NSString *)createSqlColumnDeclarationWithJavaLangReflectField:(JavaLangReflectField *)column
                                                    withNSString:(NSString *)columnName
                                                    withNSString:(NSString *)columnType;

@end

J2OBJC_FIELD_SETTER(JavaSchemaGenerator, database_, JavaJoogarDatabase *)
J2OBJC_FIELD_SETTER(JavaSchemaGenerator, databaseName_, NSString *)

__attribute__((unused)) static void JavaSchemaGenerator_upgradeTableWithIOSClass_(JavaSchemaGenerator *self, IOSClass *table);

__attribute__((unused)) static void JavaSchemaGenerator_createTableColumnWithIOSClass_withJavaLangReflectField_(JavaSchemaGenerator *self, IOSClass *gTable, JavaLangReflectField *gField);

__attribute__((unused)) static void JavaSchemaGenerator_upgradeTableColumnWithIOSClass_withJavaLangReflectField_(JavaSchemaGenerator *self, IOSClass *gTable, JavaLangReflectField *gField);

__attribute__((unused)) static jboolean JavaSchemaGenerator_executeJoogarUpgradeWithInt_withInt_withBoolean_(JavaSchemaGenerator *self, jint gOldVersion, jint gNewVersion, jboolean isFirstInit);

__attribute__((unused)) static void JavaSchemaGenerator_executeScriptWithNSString_withBoolean_(JavaSchemaGenerator *self, NSString *file, jboolean isFirstInit);

__attribute__((unused)) static void JavaSchemaGenerator_createTableWithIOSClass_(JavaSchemaGenerator *self, IOSClass *table);

__attribute__((unused)) static NSString *JavaSchemaGenerator_createSqlColumnDeclarationWithJavaLangReflectField_withNSString_withNSString_(JavaSchemaGenerator *self, JavaLangReflectField *column, NSString *columnName, NSString *columnType);

@implementation JavaSchemaGenerator

- (instancetype)initWithJavaJoogarDatabase:(JavaJoogarDatabase *)gDatabase
                              withNSString:(NSString *)gDbName {
  JavaSchemaGenerator_initWithJavaJoogarDatabase_withNSString_(self, gDatabase, gDbName);
  return self;
}

- (void)createDatabaseWithJavaUtilList:(id<JavaUtilList>)gDomainClasses
                               withInt:(jint)gVersion {
  for (IOSClass * __strong domain in nil_chk(gDomainClasses)) {
    JavaSchemaGenerator_createTableWithIOSClass_(self, domain);
  }
  JavaSchemaGenerator_executeJoogarUpgradeWithInt_withInt_withBoolean_(self, 0, gVersion, true);
}

- (void)doUpgradeWithInt:(jint)gOldVersion
                 withInt:(jint)gNewVersion
        withJavaUtilList:(id<JavaUtilList>)gDomainClasses {
  NSString *sql = @"select count(*) from sqlite_master where type='table' and name LIKE '%s';";
  for (IOSClass * __strong domain in nil_chk(gDomainClasses)) {
    id<JavaJoogarDatabaseResult> result = [((JavaJoogarDatabase *) nil_chk(database_)) rawQueryWithNSString:NSString_formatWithNSString_withNSObjectArray_(sql, [IOSObjectArray newArrayWithObjects:(id[]){ JavaNamingHelper_toSQLNameWithIOSClass_(domain) } count:1 type:NSObject_class_()]) withNSStringArray:nil];
    if ([((id<JavaJoogarDatabaseResult>) nil_chk(result)) next] && [result getIntWithInt:0] == 0) {
      JavaSchemaGenerator_createTableWithIOSClass_(self, domain);
    }
    else {
      JavaSchemaGenerator_upgradeTableWithIOSClass_(self, domain);
    }
  }
  JavaSchemaGenerator_executeJoogarUpgradeWithInt_withInt_withBoolean_(self, gOldVersion, gNewVersion, false);
}

- (void)upgradeTableWithIOSClass:(IOSClass *)table {
  JavaSchemaGenerator_upgradeTableWithIOSClass_(self, table);
}

- (void)createTableColumnWithIOSClass:(IOSClass *)gTable
             withJavaLangReflectField:(JavaLangReflectField *)gField {
  JavaSchemaGenerator_createTableColumnWithIOSClass_withJavaLangReflectField_(self, gTable, gField);
}

- (void)upgradeTableColumnWithIOSClass:(IOSClass *)gTable
              withJavaLangReflectField:(JavaLangReflectField *)gField {
  JavaSchemaGenerator_upgradeTableColumnWithIOSClass_withJavaLangReflectField_(self, gTable, gField);
}

- (jboolean)executeJoogarUpgradeWithInt:(jint)gOldVersion
                                withInt:(jint)gNewVersion
                            withBoolean:(jboolean)isFirstInit {
  return JavaSchemaGenerator_executeJoogarUpgradeWithInt_withInt_withBoolean_(self, gOldVersion, gNewVersion, isFirstInit);
}

- (void)executeScriptWithNSString:(NSString *)file
                      withBoolean:(jboolean)isFirstInit {
  JavaSchemaGenerator_executeScriptWithNSString_withBoolean_(self, file, isFirstInit);
}

- (void)createTableWithIOSClass:(IOSClass *)table {
  JavaSchemaGenerator_createTableWithIOSClass_(self, table);
}

- (NSString *)createSqlColumnDeclarationWithJavaLangReflectField:(JavaLangReflectField *)column
                                                    withNSString:(NSString *)columnName
                                                    withNSString:(NSString *)columnType {
  return JavaSchemaGenerator_createSqlColumnDeclarationWithJavaLangReflectField_withNSString_withNSString_(self, column, columnName, columnType);
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithJavaJoogarDatabase:withNSString:", "SchemaGenerator", NULL, 0x1, NULL, NULL },
    { "createDatabaseWithJavaUtilList:withInt:", "createDatabase", "V", 0x1, NULL, NULL },
    { "doUpgradeWithInt:withInt:withJavaUtilList:", "doUpgrade", "V", 0x1, NULL, NULL },
    { "upgradeTableWithIOSClass:", "upgradeTable", "V", 0x2, NULL, NULL },
    { "createTableColumnWithIOSClass:withJavaLangReflectField:", "createTableColumn", "V", 0x2, NULL, NULL },
    { "upgradeTableColumnWithIOSClass:withJavaLangReflectField:", "upgradeTableColumn", "V", 0x2, NULL, NULL },
    { "executeJoogarUpgradeWithInt:withInt:withBoolean:", "executeJoogarUpgrade", "Z", 0x2, NULL, NULL },
    { "executeScriptWithNSString:withBoolean:", "executeScript", "V", 0x2, NULL, NULL },
    { "createTableWithIOSClass:", "createTable", "V", 0x2, NULL, NULL },
    { "createSqlColumnDeclarationWithJavaLangReflectField:withNSString:withNSString:", "createSqlColumnDeclaration", "Ljava.lang.String;", 0x2, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "database_", NULL, 0x2, "Lnet.skoumal.joogar.shared.JoogarDatabase;", NULL, NULL, .constantValue.asLong = 0 },
    { "databaseName_", NULL, 0x2, "Ljava.lang.String;", NULL, NULL, .constantValue.asLong = 0 },
  };
  static const char *inner_classes[] = {"Lnet.skoumal.joogar.shared.util.SchemaGenerator$TableColumn;"};
  static const J2ObjcClassInfo _JavaSchemaGenerator = { 2, "SchemaGenerator", "net.skoumal.joogar.shared.util", NULL, 0x1, 10, methods, 2, fields, 0, NULL, 1, inner_classes, NULL, NULL };
  return &_JavaSchemaGenerator;
}

@end

void JavaSchemaGenerator_initWithJavaJoogarDatabase_withNSString_(JavaSchemaGenerator *self, JavaJoogarDatabase *gDatabase, NSString *gDbName) {
  (void) NSObject_init(self);
  self->database_ = gDatabase;
  self->databaseName_ = gDbName;
}

JavaSchemaGenerator *new_JavaSchemaGenerator_initWithJavaJoogarDatabase_withNSString_(JavaJoogarDatabase *gDatabase, NSString *gDbName) {
  JavaSchemaGenerator *self = [JavaSchemaGenerator alloc];
  JavaSchemaGenerator_initWithJavaJoogarDatabase_withNSString_(self, gDatabase, gDbName);
  return self;
}

void JavaSchemaGenerator_upgradeTableWithIOSClass_(JavaSchemaGenerator *self, IOSClass *table) {
  if (JavaJoogar_isDebug()) {
    [((id<JavaJoogarLogger>) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getLogger])) iWithNSString:@"Upgrade table"];
  }
  id<JavaUtilList> classFields = [((JavaReflectionUtils *) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getReflectionUtils])) getTableFieldsWithIOSClass:table];
  NSString *tableName = JavaNamingHelper_toSQLNameWithIOSClass_(table);
  id<JavaJoogarCursor> result = new_JavaJoogarCursorImpl_initWithIOSClass_withJavaJoogarDatabaseResult_(JavaSchemaGenerator_TableColumn_class_(), [((JavaJoogarDatabase *) nil_chk(self->database_)) rawQueryWithNSString:JreStrcat("$$$", @"PRAGMA table_info (\"", tableName, @"\")") withNSStringArray:nil]);
  for (JavaLangReflectField * __strong field in nil_chk(classFields)) {
    NSString *columnName = JavaNamingHelper_toSQLNameWithJavaLangReflectField_(field);
    JavaSchemaGenerator_TableColumn *columnInTable = nil;
    for (JavaSchemaGenerator_TableColumn * __strong column in result) {
      NSString *columnName1 = [((NSString *) nil_chk(((JavaSchemaGenerator_TableColumn *) nil_chk(column))->name_)) lowercaseStringWithJRELocale:JreLoadStatic(JavaUtilLocale, UK_)];
      NSString *columnName2 = [((NSString *) nil_chk(columnName)) lowercaseStringWithJRELocale:JreLoadStatic(JavaUtilLocale, UK_)];
      if ([((NSString *) nil_chk(columnName1)) isEqual:columnName2]) {
        columnInTable = column;
        break;
      }
    }
    if (columnInTable == nil) {
      JavaSchemaGenerator_createTableColumnWithIOSClass_withJavaLangReflectField_(self, table, field);
    }
    else {
      JavaSchemaGenerator_upgradeTableColumnWithIOSClass_withJavaLangReflectField_(self, table, field);
    }
  }
}

void JavaSchemaGenerator_createTableColumnWithIOSClass_withJavaLangReflectField_(JavaSchemaGenerator *self, IOSClass *gTable, JavaLangReflectField *gField) {
  NSString *tableName = JavaNamingHelper_toSQLNameWithIOSClass_(gTable);
  NSString *columnName = JavaNamingHelper_toSQLNameWithJavaLangReflectField_(gField);
  NSString *columnType = JavaQueryBuilder_getColumnTypeWithIOSClass_([((JavaLangReflectField *) nil_chk(gField)) getType]);
  JavaLangStringBuilder *sb = new_JavaLangStringBuilder_initWithNSString_(@"ALTER TABLE \"");
  (void) [((JavaLangStringBuilder *) nil_chk([sb appendWithNSString:tableName])) appendWithNSString:@"\" "];
  NSString *columnDeclaration = JavaSchemaGenerator_createSqlColumnDeclarationWithJavaLangReflectField_withNSString_withNSString_(self, gField, columnName, columnType);
  (void) [((JavaLangStringBuilder *) nil_chk([sb appendWithNSString:@"ADD COLUMN "])) appendWithNSString:columnDeclaration];
  [((JavaJoogarDatabase *) nil_chk(self->database_)) execSQLWithNSString:[sb description] withNSStringArray:nil];
}

void JavaSchemaGenerator_upgradeTableColumnWithIOSClass_withJavaLangReflectField_(JavaSchemaGenerator *self, IOSClass *gTable, JavaLangReflectField *gField) {
}

jboolean JavaSchemaGenerator_executeJoogarUpgradeWithInt_withInt_withBoolean_(JavaSchemaGenerator *self, jint gOldVersion, jint gNewVersion, jboolean isFirstInit) {
  jboolean isSuccess = false;
  id<JavaUtilList> files = [((id<JavaSystemUtils>) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getSystemUtils])) getUpgradeScriptsWithNSString:self->databaseName_];
  JavaUtilCollections_sortWithJavaUtilList_withJavaUtilComparator_(files, new_JavaJoogarUpgradeScriptComparator_init());
  for (NSString * __strong file in nil_chk(files)) {
    if (JavaJoogar_isDebug()) {
      [((id<JavaJoogarLogger>) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getLogger])) iWithNSString:JreStrcat("$$", @"Upgrade script : ", file)];
    }
    @try {
      jint version_ = [JavaLangInteger_valueOfWithNSString_([((NSString *) nil_chk(file)) replace:@".sql" withSequence:@""]) intValue];
      if ((version_ > gOldVersion) && (version_ <= gNewVersion)) {
        JavaSchemaGenerator_executeScriptWithNSString_withBoolean_(self, file, isFirstInit);
        isSuccess = true;
      }
    }
    @catch (JavaLangNumberFormatException *e) {
      [((id<JavaJoogarLogger>) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getLogger])) wWithNSString:JreStrcat("$$", @"Not a joogar script. Ignored.", file)];
    }
  }
  return isSuccess;
}

void JavaSchemaGenerator_executeScriptWithNSString_withBoolean_(JavaSchemaGenerator *self, NSString *file, jboolean isFirstInit) {
  @try {
    JavaIoInputStream *is = [((id<JavaSystemUtils>) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getSystemUtils])) openUpgradeScriptWithNSString:file];
    JavaIoBufferedReader *reader = new_JavaIoBufferedReader_initWithJavaIoReader_(new_JavaIoInputStreamReader_initWithJavaIoInputStream_(is));
    NSString *line;
    JavaLangStringBuilder *sqlStatement = new_JavaLangStringBuilder_init();
    while ((line = [reader readLine]) != nil) {
      (void) [((NSString *) nil_chk(line)) trim];
      if (JavaJoogar_isDebug()) {
        [((id<JavaJoogarLogger>) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getLogger])) iWithNSString:line];
      }
      if ([line hasPrefix:@"#"]) {
        if ([line contains:@"-- upgrade only --"] && isFirstInit) {
          break;
        }
        else {
          continue;
        }
      }
      else if ([line hasSuffix:@";"]) {
        @try {
          [((JavaJoogarDatabase *) nil_chk(self->database_)) execSQLWithNSString:JreStrcat("$$", [sqlStatement description], line) withNSStringArray:nil];
        }
        @catch (JavaSQLException *e) {
          @throw e;
        }
        sqlStatement = new_JavaLangStringBuilder_init();
      }
      else {
        (void) [sqlStatement appendWithNSString:line];
      }
    }
  }
  @catch (JavaIoIOException *e) {
    [((id<JavaJoogarLogger>) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getLogger])) eWithNSString:[((JavaIoIOException *) nil_chk(e)) getMessage]];
  }
  if (JavaJoogar_isDebug()) {
    [((id<JavaJoogarLogger>) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getLogger])) iWithNSString:JreStrcat("$$$", @"Script '", [((NSString *) nil_chk(file)) description], @"' executed.")];
  }
}

void JavaSchemaGenerator_createTableWithIOSClass_(JavaSchemaGenerator *self, IOSClass *table) {
  id<JavaUtilList> fields = [((JavaReflectionUtils *) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getReflectionUtils])) getTableFieldsWithIOSClass:table];
  NSString *tableName = JavaNamingHelper_toSQLNameWithIOSClass_(table);
  JavaLangStringBuilder *sb = new_JavaLangStringBuilder_initWithNSString_(@"CREATE TABLE \"");
  (void) [((JavaLangStringBuilder *) nil_chk([sb appendWithNSString:tableName])) appendWithNSString:@"\" ( id INTEGER PRIMARY KEY AUTOINCREMENT "];
  for (JavaLangReflectField * __strong column in nil_chk(fields)) {
    NSString *columnName = JavaNamingHelper_toSQLNameWithJavaLangReflectField_(column);
    NSString *columnType = JavaQueryBuilder_getColumnTypeWithIOSClass_([((JavaLangReflectField *) nil_chk(column)) getType]);
    if (columnType != nil) {
      if ([((NSString *) nil_chk([((NSString *) nil_chk(columnName)) lowercaseStringWithJRELocale:JreLoadStatic(JavaUtilLocale, UK_)])) isEqual:@"id"]) {
        continue;
      }
      NSString *columnDeclaration = JavaSchemaGenerator_createSqlColumnDeclarationWithJavaLangReflectField_withNSString_withNSString_(self, column, columnName, columnType);
      (void) [((JavaLangStringBuilder *) nil_chk([sb appendWithNSString:@", "])) appendWithNSString:columnDeclaration];
    }
  }
  (void) [sb appendWithNSString:@" ) "];
  if (JavaJoogar_isDebug()) {
    [((id<JavaJoogarLogger>) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getLogger])) iWithNSString:JreStrcat("$$", @"Creating table ", tableName)];
  }
  if (![@"" isEqual:[sb description]]) {
    [((JavaJoogarDatabase *) nil_chk(self->database_)) execSQLWithNSString:[sb description] withNSStringArray:nil];
  }
}

NSString *JavaSchemaGenerator_createSqlColumnDeclarationWithJavaLangReflectField_withNSString_withNSString_(JavaSchemaGenerator *self, JavaLangReflectField *column, NSString *columnName, NSString *columnType) {
  JavaLangStringBuilder *sb = new_JavaLangStringBuilder_init();
  if ([((JavaLangReflectField *) nil_chk(column)) isAnnotationPresentWithIOSClass:JavaColumn_class_()]) {
    id<JavaColumn> columnAnnotation = [column getAnnotationWithIOSClass:JavaColumn_class_()];
    (void) [((JavaLangStringBuilder *) nil_chk([((JavaLangStringBuilder *) nil_chk([((JavaLangStringBuilder *) nil_chk([sb appendWithNSString:@"\""])) appendWithNSString:columnName])) appendWithNSString:@"\" "])) appendWithNSString:columnType];
    if ([((id<JavaColumn>) nil_chk(columnAnnotation)) notNull]) {
      (void) [sb appendWithNSString:@" NOT NULL"];
    }
    if ([columnAnnotation unique]) {
      (void) [sb appendWithNSString:@" UNIQUE"];
    }
  }
  else {
    (void) [((JavaLangStringBuilder *) nil_chk([((JavaLangStringBuilder *) nil_chk([((JavaLangStringBuilder *) nil_chk([((JavaLangStringBuilder *) nil_chk([sb appendWithNSString:@"\""])) appendWithNSString:columnName])) appendWithNSString:@"\" "])) appendWithNSString:@" "])) appendWithNSString:columnType];
    if ([column isAnnotationPresentWithIOSClass:JavaNotNull_class_()]) {
      (void) [sb appendWithNSString:@" NOT NULL"];
    }
    if ([column isAnnotationPresentWithIOSClass:JavaUnique_class_()]) {
      (void) [sb appendWithNSString:@" UNIQUE"];
    }
  }
  return [sb description];
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(JavaSchemaGenerator)

@implementation JavaSchemaGenerator_TableColumn

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  JavaSchemaGenerator_TableColumn_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (IOSObjectArray *)__annotations_name_ {
  return [IOSObjectArray arrayWithObjects:(id[]) { [[JavaColumn alloc] initWithName:@"name" withNotNull:false withUnique:false] } count:1 type:JavaLangAnnotationAnnotation_class_()];
}

+ (IOSObjectArray *)__annotations_type_ {
  return [IOSObjectArray arrayWithObjects:(id[]) { [[JavaColumn alloc] initWithName:@"type" withNotNull:false withUnique:false] } count:1 type:JavaLangAnnotationAnnotation_class_()];
}

+ (IOSObjectArray *)__annotations_notnull_ {
  return [IOSObjectArray arrayWithObjects:(id[]) { [[JavaColumn alloc] initWithName:@"notnull" withNotNull:false withUnique:false] } count:1 type:JavaLangAnnotationAnnotation_class_()];
}

+ (IOSObjectArray *)__annotations_dflt_value_ {
  return [IOSObjectArray arrayWithObjects:(id[]) { [[JavaColumn alloc] initWithName:@"dflt_value" withNotNull:false withUnique:false] } count:1 type:JavaLangAnnotationAnnotation_class_()];
}

+ (IOSObjectArray *)__annotations_pk_ {
  return [IOSObjectArray arrayWithObjects:(id[]) { [[JavaColumn alloc] initWithName:@"pk" withNotNull:false withUnique:false] } count:1 type:JavaLangAnnotationAnnotation_class_()];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", NULL, NULL, 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "name_", NULL, 0x1, "Ljava.lang.String;", NULL, NULL, .constantValue.asLong = 0 },
    { "type_", NULL, 0x1, "Ljava.lang.String;", NULL, NULL, .constantValue.asLong = 0 },
    { "notnull_", NULL, 0x1, "Z", NULL, NULL, .constantValue.asLong = 0 },
    { "dflt_value_", NULL, 0x1, "Ljava.lang.String;", NULL, NULL, .constantValue.asLong = 0 },
    { "pk_", NULL, 0x1, "Z", NULL, NULL, .constantValue.asLong = 0 },
  };
  static const J2ObjcClassInfo _JavaSchemaGenerator_TableColumn = { 2, "TableColumn", "net.skoumal.joogar.shared.util", "SchemaGenerator", 0x9, 1, methods, 5, fields, 0, NULL, 0, NULL, NULL, NULL };
  return &_JavaSchemaGenerator_TableColumn;
}

@end

void JavaSchemaGenerator_TableColumn_init(JavaSchemaGenerator_TableColumn *self) {
  (void) NSObject_init(self);
}

JavaSchemaGenerator_TableColumn *new_JavaSchemaGenerator_TableColumn_init() {
  JavaSchemaGenerator_TableColumn *self = [JavaSchemaGenerator_TableColumn alloc];
  JavaSchemaGenerator_TableColumn_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(JavaSchemaGenerator_TableColumn)