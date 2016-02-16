//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLPermission.java
//

#ifndef _JavaSqlSQLPermission_H_
#define _JavaSqlSQLPermission_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/security/BasicPermission.h"
#include "java/security/Guard.h"

@class JavaSecurityPermission;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSqlSQLPermission : JavaSecurityBasicPermission < JavaSecurityGuard, JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)name;

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)actions;

- (NSString *)getActions;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLPermission)

FOUNDATION_EXPORT void JavaSqlSQLPermission_initWithNSString_(JavaSqlSQLPermission *self, NSString *name);

FOUNDATION_EXPORT JavaSqlSQLPermission *new_JavaSqlSQLPermission_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLPermission_initWithNSString_withNSString_(JavaSqlSQLPermission *self, NSString *name, NSString *actions);

FOUNDATION_EXPORT JavaSqlSQLPermission *new_JavaSqlSQLPermission_initWithNSString_withNSString_(NSString *name, NSString *actions) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLPermission)

#endif // _JavaSqlSQLPermission_H_
