//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../../joogar/src/main/java/net/skoumal/joogar/shared/SQLException.java
//

#ifndef _SQLException_H_
#define _SQLException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

@interface JavaSQLException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)error;

- (instancetype)initWithNSString:(NSString *)error
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSQLException)

FOUNDATION_EXPORT void JavaSQLException_init(JavaSQLException *self);

FOUNDATION_EXPORT JavaSQLException *new_JavaSQLException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSQLException_initWithJavaLangThrowable_(JavaSQLException *self, JavaLangThrowable *e);

FOUNDATION_EXPORT JavaSQLException *new_JavaSQLException_initWithJavaLangThrowable_(JavaLangThrowable *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSQLException_initWithNSString_(JavaSQLException *self, NSString *error);

FOUNDATION_EXPORT JavaSQLException *new_JavaSQLException_initWithNSString_(NSString *error) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSQLException_initWithNSString_withJavaLangThrowable_(JavaSQLException *self, NSString *error, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSQLException *new_JavaSQLException_initWithNSString_withJavaLangThrowable_(NSString *error, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSQLException)

@compatibility_alias NetSkoumalJoogarSharedSQLException JavaSQLException;

#endif // _SQLException_H_
