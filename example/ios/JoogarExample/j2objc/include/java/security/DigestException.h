//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/DigestException.java
//

#ifndef _JavaSecurityDigestException_H_
#define _JavaSecurityDigestException_H_

#include "J2ObjC_header.h"
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief <code>DigestException</code> is a general message digest exception.
 */
@interface JavaSecurityDigestException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>DigestException</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance of <code>DigestException</code> with the
 given message.
 @param msg
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Constructs a new instance of <code>DigestException</code> with the
 given message and the cause.
 @param message
 the detail message for this exception.
 @param cause
 the exception which is the cause for this exception.
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a new instance of <code>DigestException</code> with the
 cause.
 @param cause
 the exception which is the cause for this exception.
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityDigestException)

FOUNDATION_EXPORT void JavaSecurityDigestException_initWithNSString_(JavaSecurityDigestException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityDigestException *new_JavaSecurityDigestException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityDigestException_init(JavaSecurityDigestException *self);

FOUNDATION_EXPORT JavaSecurityDigestException *new_JavaSecurityDigestException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityDigestException_initWithNSString_withJavaLangThrowable_(JavaSecurityDigestException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityDigestException *new_JavaSecurityDigestException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityDigestException_initWithJavaLangThrowable_(JavaSecurityDigestException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityDigestException *new_JavaSecurityDigestException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityDigestException)

#endif // _JavaSecurityDigestException_H_
