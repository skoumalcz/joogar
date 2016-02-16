//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/GenericSignatureFormatError.java
//

#ifndef _JavaLangReflectGenericSignatureFormatError_H_
#define _JavaLangReflectGenericSignatureFormatError_H_

#include "J2ObjC_header.h"
#include "java/lang/ClassFormatError.h"

/*!
 @brief Indicates that a malformed signature has been encountered via a reflective
 method.
 @since 1.5
 */
@interface JavaLangReflectGenericSignatureFormatError : JavaLangClassFormatError

#pragma mark Public

/*!
 @brief Constructs a new <code>GenericSignatureFormatError</code> instance.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectGenericSignatureFormatError)

FOUNDATION_EXPORT void JavaLangReflectGenericSignatureFormatError_init(JavaLangReflectGenericSignatureFormatError *self);

FOUNDATION_EXPORT JavaLangReflectGenericSignatureFormatError *new_JavaLangReflectGenericSignatureFormatError_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectGenericSignatureFormatError)

#endif // _JavaLangReflectGenericSignatureFormatError_H_