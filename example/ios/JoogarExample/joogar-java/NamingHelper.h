//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../../joogar/src/main/java/net/skoumal/joogar/shared/util/NamingHelper.java
//

#ifndef _NamingHelper_H_
#define _NamingHelper_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class JavaLangReflectField;

@interface JavaNamingHelper : NSObject

#pragma mark Public

- (instancetype)init;

+ (NSString *)toSQLNameWithIOSClass:(IOSClass *)table;

+ (NSString *)toSQLNameWithJavaLangReflectField:(JavaLangReflectField *)field;

+ (NSString *)toSQLNameDefaultWithNSString:(NSString *)camelCased;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNamingHelper)

FOUNDATION_EXPORT NSString *JavaNamingHelper_toSQLNameDefaultWithNSString_(NSString *camelCased);

FOUNDATION_EXPORT NSString *JavaNamingHelper_toSQLNameWithJavaLangReflectField_(JavaLangReflectField *field);

FOUNDATION_EXPORT NSString *JavaNamingHelper_toSQLNameWithIOSClass_(IOSClass *table);

FOUNDATION_EXPORT void JavaNamingHelper_init(JavaNamingHelper *self);

FOUNDATION_EXPORT JavaNamingHelper *new_JavaNamingHelper_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNamingHelper)

@compatibility_alias NetSkoumalJoogarSharedUtilNamingHelper JavaNamingHelper;

#endif // _NamingHelper_H_