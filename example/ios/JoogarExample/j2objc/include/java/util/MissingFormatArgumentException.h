//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/MissingFormatArgumentException.java
//

#ifndef _JavaUtilMissingFormatArgumentException_H_
#define _JavaUtilMissingFormatArgumentException_H_

#include "J2ObjC_header.h"
#include "java/util/IllegalFormatException.h"

/*!
 @brief A <code>MissingFormatArgumentException</code> will be thrown if there is no
 corresponding argument with the specified conversion or an argument index
 that refers to a missing argument.
 */
@interface JavaUtilMissingFormatArgumentException : JavaUtilIllegalFormatException

#pragma mark Public

/*!
 @brief Constructs a new <code>MissingFormatArgumentException</code> with the
 specified conversion that lacks the argument.
 @param s
 the specified conversion that lacks the argument.
 */
- (instancetype)initWithNSString:(NSString *)s;

/*!
 @brief Returns the conversion associated with the exception.
 @return the conversion associated with the exception.
 */
- (NSString *)getFormatSpecifier;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilMissingFormatArgumentException)

FOUNDATION_EXPORT void JavaUtilMissingFormatArgumentException_initWithNSString_(JavaUtilMissingFormatArgumentException *self, NSString *s);

FOUNDATION_EXPORT JavaUtilMissingFormatArgumentException *new_JavaUtilMissingFormatArgumentException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilMissingFormatArgumentException)

#endif // _JavaUtilMissingFormatArgumentException_H_
