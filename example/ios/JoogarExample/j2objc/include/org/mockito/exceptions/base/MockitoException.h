//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/base/MockitoException.java
//

#ifndef _OrgMockitoExceptionsBaseMockitoException_H_
#define _OrgMockitoExceptionsBaseMockitoException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

@class IOSObjectArray;
@class JavaLangThrowable;

@interface OrgMockitoExceptionsBaseMockitoException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)t;

- (IOSObjectArray *)getUnfilteredStackTrace;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsBaseMockitoException)

FOUNDATION_EXPORT void OrgMockitoExceptionsBaseMockitoException_initWithNSString_withJavaLangThrowable_(OrgMockitoExceptionsBaseMockitoException *self, NSString *message, JavaLangThrowable *t);

FOUNDATION_EXPORT OrgMockitoExceptionsBaseMockitoException *new_OrgMockitoExceptionsBaseMockitoException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *t) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoExceptionsBaseMockitoException_initWithNSString_(OrgMockitoExceptionsBaseMockitoException *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsBaseMockitoException *new_OrgMockitoExceptionsBaseMockitoException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsBaseMockitoException)

#endif // _OrgMockitoExceptionsBaseMockitoException_H_
