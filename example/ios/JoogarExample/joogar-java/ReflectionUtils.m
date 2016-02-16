//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../../joogar/src/main/java/net/skoumal/joogar/shared/util/ReflectionUtils.java
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "IOSPrimitiveArray.h"
#include "Ignore.h"
#include "J2ObjC_source.h"
#include "Joogar.h"
#include "JoogarConfig.h"
#include "JoogarDatabaseResult.h"
#include "JoogarLogger.h"
#include "NamingHelper.h"
#include "ReflectionUtils.h"
#include "java/lang/Boolean.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "java/lang/Exception.h"
#include "java/lang/Float.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Integer.h"
#include "java/lang/Long.h"
#include "java/lang/NoSuchFieldException.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Short.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/reflect/Modifier.h"
#include "java/math/BigDecimal.h"
#include "java/sql/Timestamp.h"
#include "java/util/ArrayList.h"
#include "java/util/Calendar.h"
#include "java/util/Collections.h"
#include "java/util/Date.h"
#include "java/util/List.h"

@interface JavaReflectionUtils ()

- (id<JavaUtilList>)getAllFieldsWithJavaUtilList:(id<JavaUtilList>)fields
                                    withIOSClass:(IOSClass *)type;

@end

__attribute__((unused)) static id<JavaUtilList> JavaReflectionUtils_getAllFieldsWithJavaUtilList_withIOSClass_(JavaReflectionUtils *self, id<JavaUtilList> fields, IOSClass *type);

@implementation JavaReflectionUtils

- (id<JavaUtilList>)getTableFieldsWithIOSClass:(IOSClass *)table {
  id<JavaUtilList> fieldList = JavaJoogarConfig_getFieldsWithIOSClass_(table);
  if (fieldList != nil) {
    return fieldList;
  }
  id<JavaUtilList> typeFields = new_JavaUtilArrayList_init();
  (void) JavaReflectionUtils_getAllFieldsWithJavaUtilList_withIOSClass_(self, typeFields, table);
  id<JavaUtilList> toStore = new_JavaUtilArrayList_init();
  for (JavaLangReflectField * __strong field in typeFields) {
    if (![((JavaLangReflectField *) nil_chk(field)) isAnnotationPresentWithIOSClass:JavaIgnore_class_()] && !JavaLangReflectModifier_isStaticWithInt_([field getModifiers]) && !JavaLangReflectModifier_isTransientWithInt_([field getModifiers])) {
      [toStore addWithId:field];
    }
  }
  JavaJoogarConfig_setFieldsWithIOSClass_withJavaUtilList_(table, toStore);
  return toStore;
}

- (id<JavaUtilList>)getAllFieldsWithJavaUtilList:(id<JavaUtilList>)fields
                                    withIOSClass:(IOSClass *)type {
  return JavaReflectionUtils_getAllFieldsWithJavaUtilList_withIOSClass_(self, fields, type);
}

- (id)getFieldValueWithJavaLangReflectField:(JavaLangReflectField *)column
                                     withId:(id)object {
  [((JavaLangReflectField *) nil_chk(column)) setAccessibleWithBoolean:true];
  @try {
    id columnValue = [self getFieldValueNativeWithId:object withJavaLangReflectField:column];
    if (columnValue == nil) {
      return nil;
    }
    else {
      IOSClass *columnType = [column getType];
      if ([JavaSqlTimestamp_class_() isEqual:columnType]) {
        return JavaLangLong_valueOfWithLong_([((JavaSqlTimestamp *) check_class_cast(columnValue, [JavaSqlTimestamp class])) getTime]);
      }
      else if ([JavaUtilDate_class_() isEqual:columnType]) {
        return JavaLangLong_valueOfWithLong_([((JavaUtilDate *) check_class_cast(columnValue, [JavaUtilDate class])) getTime]);
      }
      else if ([JavaUtilCalendar_class_() isEqual:columnType]) {
        return JavaLangLong_valueOfWithLong_([((JavaUtilCalendar *) check_class_cast(columnValue, [JavaUtilCalendar class])) getTimeInMillis]);
      }
      else if ([((IOSClass *) nil_chk(columnType)) isEqual:JavaLangInteger_class_()] || [columnType isEqual:[IOSClass intClass]] || [columnType isEqual:JavaLangShort_class_()] || [columnType isEqual:[IOSClass shortClass]] || [columnType isEqual:JavaLangLong_class_()] || [columnType isEqual:[IOSClass longClass]] || [columnType isEqual:JavaLangFloat_class_()] || [columnType isEqual:[IOSClass floatClass]] || [columnType isEqual:JavaLangDouble_class_()] || [columnType isEqual:[IOSClass doubleClass]]) {
        return columnValue;
      }
      else if ([columnType isEqual:JavaLangBoolean_class_()] || [columnType isEqual:[IOSClass booleanClass]]) {
        return JavaLangInteger_valueOfWithInt_([((JavaLangBoolean *) check_class_cast(columnValue, [JavaLangBoolean class])) booleanValue] ? 1 : 0);
      }
      else if ([((NSString *) nil_chk([columnType getName])) isEqual:@"[B"]) {
        return columnValue;
      }
      else if ([columnType isEnum]) {
        return [((JavaLangEnum *) check_class_cast(columnValue, [JavaLangEnum class])) name];
      }
      else {
        return NSString_valueOf_(columnValue);
      }
    }
  }
  @catch (JavaLangIllegalAccessException *e) {
    @throw new_JavaLangRuntimeException_initWithJavaLangThrowable_(e);
  }
}

- (jint)inflateWithJavaJoogarDatabaseResult:(id<JavaJoogarDatabaseResult>)cursor
                                     withId:(id)object
                                    withInt:(jint)startIndex {
  id<JavaUtilList> columns = [self getTableFieldsWithIOSClass:[nil_chk(object) getClass]];
  for (JavaLangReflectField * __strong field in nil_chk(columns)) {
    [self setFieldValueFromResultWithJavaJoogarDatabaseResult:cursor withJavaLangReflectField:field withId:object withInt:startIndex];
    if (startIndex >= 0) {
      startIndex++;
    }
  }
  return startIndex;
}

- (void)setFieldValueFromResultWithJavaJoogarDatabaseResult:(id<JavaJoogarDatabaseResult>)result
                                   withJavaLangReflectField:(JavaLangReflectField *)field
                                                     withId:(id)object
                                                    withInt:(jint)columnIndex {
  [((JavaLangReflectField *) nil_chk(field)) setAccessibleWithBoolean:true];
  @try {
    IOSClass *fieldType = [field getType];
    NSString *colName = JavaNamingHelper_toSQLNameWithJavaLangReflectField_(field);
    if (columnIndex < 0) {
      columnIndex = [((id<JavaJoogarDatabaseResult>) nil_chk(result)) getColumnIndexWithNSString:colName];
    }
    if (columnIndex < 0) {
      [((id<JavaJoogarLogger>) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getLogger])) wWithNSString:JreStrcat("$$$", @"Column ", colName, @" not found in query result.")];
      return;
    }
    if ([((id<JavaJoogarDatabaseResult>) nil_chk(result)) isNullWithInt:columnIndex]) {
      return;
    }
    if ([((IOSClass *) nil_chk(fieldType)) isEqual:[IOSClass longClass]] || [fieldType isEqual:JavaLangLong_class_()]) {
      [self setFieldValueNativeWithId:object withJavaLangReflectField:field withId:JavaLangLong_valueOfWithLong_([result getLongWithInt:columnIndex])];
    }
    else if ([fieldType isEqual:NSString_class_()]) {
      NSString *val = [result getStringWithInt:columnIndex];
      [self setFieldValueNativeWithId:object withJavaLangReflectField:field withId:val != nil && [val isEqual:@"null"] ? nil : val];
    }
    else if ([fieldType isEqual:[IOSClass doubleClass]] || [fieldType isEqual:JavaLangDouble_class_()]) {
      [self setFieldValueNativeWithId:object withJavaLangReflectField:field withId:JavaLangDouble_valueOfWithDouble_([result getDoubleWithInt:columnIndex])];
    }
    else if ([fieldType isEqual:[IOSClass booleanClass]] || [fieldType isEqual:JavaLangBoolean_class_()]) {
      [self setFieldValueNativeWithId:object withJavaLangReflectField:field withId:JavaLangBoolean_valueOfWithBoolean_([((NSString *) nil_chk([result getStringWithInt:columnIndex])) isEqual:@"1"])];
    }
    else if ([((NSString *) nil_chk([fieldType getName])) isEqual:@"[B"]) {
      [self setFieldValueNativeWithId:object withJavaLangReflectField:field withId:[result getBlobWithInt:columnIndex]];
    }
    else if ([fieldType isEqual:[IOSClass intClass]] || [fieldType isEqual:JavaLangInteger_class_()]) {
      [self setFieldValueNativeWithId:object withJavaLangReflectField:field withId:JavaLangInteger_valueOfWithInt_([result getIntWithInt:columnIndex])];
    }
    else if ([fieldType isEqual:[IOSClass floatClass]] || [fieldType isEqual:JavaLangFloat_class_()]) {
      [self setFieldValueNativeWithId:object withJavaLangReflectField:field withId:JavaLangFloat_valueOfWithFloat_([result getFloatWithInt:columnIndex])];
    }
    else if ([fieldType isEqual:[IOSClass shortClass]] || [fieldType isEqual:JavaLangShort_class_()]) {
      [self setFieldValueNativeWithId:object withJavaLangReflectField:field withId:JavaLangShort_valueOfWithShort_((jshort) [result getIntWithInt:columnIndex])];
    }
    else if ([fieldType isEqual:JavaMathBigDecimal_class_()]) {
      NSString *val = [result getStringWithInt:columnIndex];
      [self setFieldValueNativeWithId:object withJavaLangReflectField:field withId:val != nil && [val isEqual:@"null"] ? nil : new_JavaMathBigDecimal_initWithNSString_(val)];
    }
    else if ([fieldType isEqual:JavaSqlTimestamp_class_()]) {
      jlong l = [result getLongWithInt:columnIndex];
      [self setFieldValueNativeWithId:object withJavaLangReflectField:field withId:new_JavaSqlTimestamp_initWithLong_(l)];
    }
    else if ([fieldType isEqual:JavaUtilDate_class_()]) {
      jlong l = [result getLongWithInt:columnIndex];
      [self setFieldValueNativeWithId:object withJavaLangReflectField:field withId:new_JavaUtilDate_initWithLong_(l)];
    }
    else if ([fieldType isEqual:JavaUtilCalendar_class_()]) {
      jlong l = [result getLongWithInt:columnIndex];
      JavaUtilCalendar *c = JavaUtilCalendar_getInstance();
      [((JavaUtilCalendar *) nil_chk(c)) setTimeInMillisWithLong:l];
      [self setFieldValueNativeWithId:object withJavaLangReflectField:field withId:c];
    }
    else if ([JavaLangEnum_class_() isAssignableFrom:fieldType]) {
      @try {
        JavaLangReflectMethod *valueOf = [fieldType getMethod:@"valueOf" parameterTypes:[IOSObjectArray newArrayWithObjects:(id[]){ NSString_class_() } count:1 type:IOSClass_class_()]];
        NSString *strVal = [result getStringWithInt:columnIndex];
        id enumVal = [((JavaLangReflectMethod *) nil_chk(valueOf)) invokeWithId:fieldType withNSObjectArray:[IOSObjectArray newArrayWithObjects:(id[]){ strVal } count:1 type:NSObject_class_()]];
        [self setFieldValueNativeWithId:object withJavaLangReflectField:field withId:enumVal];
      }
      @catch (JavaLangException *e) {
        [((id<JavaJoogarLogger>) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getLogger])) eWithNSString:JreStrcat("$$", @"Enum cannot be read from Sqlite3 database. Please check the type of field ", [field getName])];
      }
    }
    else {
      [((id<JavaJoogarLogger>) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getLogger])) eWithNSString:JreStrcat("$$$$C$C", @"Class ", [[nil_chk(object) getClass] getName], @"cannot be read from Sqlite3 database. Please check the type of field ", [field getName], '(', [((IOSClass *) nil_chk([field getType])) getName], ')')];
    }
  }
  @catch (JavaLangIllegalArgumentException *e) {
    [((id<JavaJoogarLogger>) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getLogger])) eWithNSString:JreStrcat("$$", @"IllegalArgumentException: ", [((JavaLangIllegalArgumentException *) nil_chk(e)) getMessage])];
  }
  @catch (JavaLangIllegalAccessException *e) {
    [((id<JavaJoogarLogger>) nil_chk([((JavaJoogar *) nil_chk(JavaJoogar_getInstance())) getLogger])) eWithNSString:JreStrcat("$$", @"IllegalAccessException:", [((JavaLangIllegalAccessException *) nil_chk(e)) getMessage])];
  }
}

- (JavaLangReflectField *)getDeepFieldWithNSString:(NSString *)fieldName
                                      withIOSClass:(IOSClass *)type {
  @try {
    JavaLangReflectField *field = [((IOSClass *) nil_chk(type)) getDeclaredField:fieldName];
    return field;
  }
  @catch (JavaLangNoSuchFieldException *e) {
    IOSClass *superclass_ = [((IOSClass *) nil_chk(type)) getSuperclass];
    if (superclass_ != nil) {
      JavaLangReflectField *field = [self getDeepFieldWithNSString:fieldName withIOSClass:superclass_];
      return field;
    }
    else {
      return nil;
    }
  }
}

- (void)setFieldValueNativeWithId:(id)gObject
         withJavaLangReflectField:(JavaLangReflectField *)gField
                           withId:(id)gValue {
  // can't call an abstract method
  [self doesNotRecognizeSelector:_cmd];
}

- (id)getFieldValueNativeWithId:(id)gObject
       withJavaLangReflectField:(JavaLangReflectField *)gField {
  // can't call an abstract method
  [self doesNotRecognizeSelector:_cmd];
  return 0;
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  JavaReflectionUtils_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "getTableFieldsWithIOSClass:", "getTableFields", "Ljava.util.List;", 0x1, NULL, NULL },
    { "getAllFieldsWithJavaUtilList:withIOSClass:", "getAllFields", "Ljava.util.List;", 0x2, NULL, NULL },
    { "getFieldValueWithJavaLangReflectField:withId:", "getFieldValue", "Ljava.lang.Object;", 0x1, NULL, NULL },
    { "inflateWithJavaJoogarDatabaseResult:withId:withInt:", "inflate", "I", 0x1, NULL, NULL },
    { "setFieldValueFromResultWithJavaJoogarDatabaseResult:withJavaLangReflectField:withId:withInt:", "setFieldValueFromResult", "V", 0x1, NULL, NULL },
    { "getDeepFieldWithNSString:withIOSClass:", "getDeepField", "Ljava.lang.reflect.Field;", 0x1, NULL, NULL },
    { "setFieldValueNativeWithId:withJavaLangReflectField:withId:", "setFieldValueNative", "V", 0x401, "Ljava.lang.IllegalAccessException;", NULL },
    { "getFieldValueNativeWithId:withJavaLangReflectField:", "getFieldValueNative", "Ljava.lang.Object;", 0x401, "Ljava.lang.IllegalAccessException;", NULL },
    { "init", NULL, NULL, 0x1, NULL, NULL },
  };
  static const J2ObjcClassInfo _JavaReflectionUtils = { 2, "ReflectionUtils", "net.skoumal.joogar.shared.util", NULL, 0x401, 9, methods, 0, NULL, 0, NULL, 0, NULL, NULL, NULL };
  return &_JavaReflectionUtils;
}

@end

id<JavaUtilList> JavaReflectionUtils_getAllFieldsWithJavaUtilList_withIOSClass_(JavaReflectionUtils *self, id<JavaUtilList> fields, IOSClass *type) {
  JavaUtilCollections_addAllWithJavaUtilCollection_withNSObjectArray_(fields, [((IOSClass *) nil_chk(type)) getDeclaredFields]);
  if ([type getSuperclass] != nil) {
    fields = JavaReflectionUtils_getAllFieldsWithJavaUtilList_withIOSClass_(self, fields, [type getSuperclass]);
  }
  return fields;
}

void JavaReflectionUtils_init(JavaReflectionUtils *self) {
  (void) NSObject_init(self);
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(JavaReflectionUtils)