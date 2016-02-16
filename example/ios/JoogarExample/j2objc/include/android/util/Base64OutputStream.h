//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/Base64OutputStream.java
//

#ifndef _AndroidUtilBase64OutputStream_H_
#define _AndroidUtilBase64OutputStream_H_

#include "J2ObjC_header.h"
#include "java/io/FilterOutputStream.h"

@class IOSByteArray;
@class JavaIoOutputStream;

/*!
 @brief An OutputStream that does Base64 encoding on the data written to
 it, writing the resulting data to another OutputStream.
 */
@interface AndroidUtilBase64OutputStream : JavaIoFilterOutputStream

#pragma mark Public

/*!
 @brief Performs Base64 encoding on the data written to the stream,
 writing the encoded data to another OutputStream.
 @param outArg the OutputStream to write the encoded data to
 @param flags bit flags for controlling the encoder; see the
 constants in <code>Base64</code>
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                                   withInt:(jint)flags;

/*!
 @brief Performs Base64 encoding or decoding on the data written to the
 stream, writing the encoded/decoded data to another
 OutputStream.
 @param outArg the OutputStream to write the encoded data to
 @param flags bit flags for controlling the encoder; see the
 constants in <code>Base64</code>
 @param encode true to encode, false to decode
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                                   withInt:(jint)flags
                               withBoolean:(jboolean)encode;

- (void)close;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeWithInt:(jint)b;

@end

J2OBJC_STATIC_INIT(AndroidUtilBase64OutputStream)

FOUNDATION_EXPORT void AndroidUtilBase64OutputStream_initWithJavaIoOutputStream_withInt_(AndroidUtilBase64OutputStream *self, JavaIoOutputStream *outArg, jint flags);

FOUNDATION_EXPORT AndroidUtilBase64OutputStream *new_AndroidUtilBase64OutputStream_initWithJavaIoOutputStream_withInt_(JavaIoOutputStream *outArg, jint flags) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void AndroidUtilBase64OutputStream_initWithJavaIoOutputStream_withInt_withBoolean_(AndroidUtilBase64OutputStream *self, JavaIoOutputStream *outArg, jint flags, jboolean encode);

FOUNDATION_EXPORT AndroidUtilBase64OutputStream *new_AndroidUtilBase64OutputStream_initWithJavaIoOutputStream_withInt_withBoolean_(JavaIoOutputStream *outArg, jint flags, jboolean encode) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilBase64OutputStream)

#endif // _AndroidUtilBase64OutputStream_H_