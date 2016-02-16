//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/IllegalFormatPrecisionException.java
//

#ifndef _JavaUtilIllegalFormatPrecisionException_H_
#define _JavaUtilIllegalFormatPrecisionException_H_

#include "J2ObjC_header.h"
#include "java/util/IllegalFormatException.h"

/*!
 @brief An <code>IllegalFormatPrecisionException</code> will be thrown if the precision is
 a negative other than -1 or in other cases where precision is not supported.
 */
@interface JavaUtilIllegalFormatPrecisionException : JavaUtilIllegalFormatException

#pragma mark Public

/*!
 @brief Constructs a new <code>IllegalFormatPrecisionException</code> with specified
 precision.
 @param p
 the precision.
 */
- (instancetype)initWithInt:(jint)p;

- (NSString *)getMessage;

/*!
 @brief Returns the precision associated with the exception.
 @return the precision.
 */
- (jint)getPrecision;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIllegalFormatPrecisionException)

FOUNDATION_EXPORT void JavaUtilIllegalFormatPrecisionException_initWithInt_(JavaUtilIllegalFormatPrecisionException *self, jint p);

FOUNDATION_EXPORT JavaUtilIllegalFormatPrecisionException *new_JavaUtilIllegalFormatPrecisionException_initWithInt_(jint p) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIllegalFormatPrecisionException)

#endif // _JavaUtilIllegalFormatPrecisionException_H_
