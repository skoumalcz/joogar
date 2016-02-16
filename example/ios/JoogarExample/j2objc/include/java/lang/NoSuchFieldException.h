//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/NoSuchFieldException.java
//

#ifndef _JavaLangNoSuchFieldException_H_
#define _JavaLangNoSuchFieldException_H_

#include "J2ObjC_header.h"
#include "java/lang/ReflectiveOperationException.h"

/*!
 @brief Thrown when the VM notices that a program tries to reference,
 on a class or object, a field that does not exist.
 */
@interface JavaLangNoSuchFieldException : JavaLangReflectiveOperationException

#pragma mark Public

/*!
 @brief Constructs a new <code>NoSuchFieldException</code> that includes the current
 stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>NoSuchFieldException</code> with the current stack
 trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNoSuchFieldException)

FOUNDATION_EXPORT void JavaLangNoSuchFieldException_init(JavaLangNoSuchFieldException *self);

FOUNDATION_EXPORT JavaLangNoSuchFieldException *new_JavaLangNoSuchFieldException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangNoSuchFieldException_initWithNSString_(JavaLangNoSuchFieldException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangNoSuchFieldException *new_JavaLangNoSuchFieldException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNoSuchFieldException)

#endif // _JavaLangNoSuchFieldException_H_
