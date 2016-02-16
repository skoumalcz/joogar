//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/LinkageError.java
//

#ifndef _JavaLangLinkageError_H_
#define _JavaLangLinkageError_H_

#include "J2ObjC_header.h"
#include "java/lang/Error.h"

@class JavaLangThrowable;

/*!
 @brief <code>LinkageError</code> is the superclass of all error classes that occur when
 loading and linking class files.
 */
@interface JavaLangLinkageError : JavaLangError

#pragma mark Public

/*!
 @brief Constructs a new <code>LinkageError</code> that includes the current stack
 trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>LinkageError</code> with the current stack trace and
 the specified detail message.
 @param detailMessage
 the detail message for this error.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new <code>LinkageError</code> with the given detail message and cause.
 @since 1.7
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangLinkageError)

FOUNDATION_EXPORT void JavaLangLinkageError_init(JavaLangLinkageError *self);

FOUNDATION_EXPORT JavaLangLinkageError *new_JavaLangLinkageError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangLinkageError_initWithNSString_(JavaLangLinkageError *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangLinkageError *new_JavaLangLinkageError_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangLinkageError_initWithNSString_withJavaLangThrowable_(JavaLangLinkageError *self, NSString *detailMessage, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangLinkageError *new_JavaLangLinkageError_initWithNSString_withJavaLangThrowable_(NSString *detailMessage, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangLinkageError)

#endif // _JavaLangLinkageError_H_
