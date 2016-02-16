//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/CheckedOutputStream.java
//

#ifndef _JavaUtilZipCheckedOutputStream_H_
#define _JavaUtilZipCheckedOutputStream_H_

#include "J2ObjC_header.h"
#include "java/io/FilterOutputStream.h"

@class IOSByteArray;
@class JavaIoOutputStream;
@protocol JavaUtilZipChecksum;

/*!
 @brief The <code>CheckedOutputStream</code> class is used to maintain a running checksum
 of all data written to a stream.
 The purpose of this checksum is to establish
 data integrity, by publishing the checksum to other parties wanting to read
 the non corrupted data.
 */
@interface JavaUtilZipCheckedOutputStream : JavaIoFilterOutputStream

#pragma mark Public

/*!
 @brief Constructs a new <code>CheckedOutputStream</code> on <code>OutputStream</code>
 <code>os</code>.
 The checksum is calculated using the algorithm implemented
 by <code>csum</code>.
 @param os
 the output stream to calculate checksum for.
 @param cs
 an entity implementing the checksum algorithm.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                   withJavaUtilZipChecksum:(id<JavaUtilZipChecksum>)cs;

/*!
 @brief Returns the checksum calculated on the stream read so far.
 @return the updated checksum.
 */
- (id<JavaUtilZipChecksum>)getChecksum;

/*!
 @brief Writes n bytes of data from <code>buf</code> starting at offset <code>off</code> to
 the underlying stream.
 The checksum is updated with the bytes written.
 @param buf
 data written to the output stream.
 @param off
 the offset to start reading the data from <code>buf</code> written
 to the output stream.
 @param nbytes
 number of bytes to write to the output stream.
 @throws IOException
 if an IO error has occurred.
 */
- (void)writeWithByteArray:(IOSByteArray *)buf
                   withInt:(jint)off
                   withInt:(jint)nbytes;

/*!
 @brief Writes the specified byte to the underlying stream.
 The checksum is
 updated with <code>val</code>.
 @param val
 the data value to written to the output stream.
 @throws IOException
 if an IO error has occurred.
 */
- (void)writeWithInt:(jint)val;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipCheckedOutputStream)

FOUNDATION_EXPORT void JavaUtilZipCheckedOutputStream_initWithJavaIoOutputStream_withJavaUtilZipChecksum_(JavaUtilZipCheckedOutputStream *self, JavaIoOutputStream *os, id<JavaUtilZipChecksum> cs);

FOUNDATION_EXPORT JavaUtilZipCheckedOutputStream *new_JavaUtilZipCheckedOutputStream_initWithJavaIoOutputStream_withJavaUtilZipChecksum_(JavaIoOutputStream *os, id<JavaUtilZipChecksum> cs) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipCheckedOutputStream)

#endif // _JavaUtilZipCheckedOutputStream_H_
