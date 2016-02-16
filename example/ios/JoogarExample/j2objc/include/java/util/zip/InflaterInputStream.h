//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/InflaterInputStream.java
//

#ifndef _JavaUtilZipInflaterInputStream_H_
#define _JavaUtilZipInflaterInputStream_H_

#include "J2ObjC_header.h"
#include "java/io/FilterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaUtilZipInflater;

#define JavaUtilZipInflaterInputStream_BUF_SIZE 512

/*!
 @brief This class provides an implementation of <code>FilterInputStream</code> that
 decompresses data that was compressed using the <i>DEFLATE</i> algorithm
 (see <a href="http://www.gzip.org/algorithm.txt">specification</a>).
 Basically it wraps the <code>Inflater</code> class and takes care of the
 buffering.
 */
@interface JavaUtilZipInflaterInputStream : JavaIoFilterInputStream {
 @public
  /*!
   @brief The inflater used for this stream.
   */
  JavaUtilZipInflater *inf_;
  /*!
   @brief The input buffer used for decompression.
   */
  IOSByteArray *buf_;
  /*!
   @brief The length of the buffer.
   */
  jint len_;
  jboolean closed_;
  /*!
   @brief True if this stream's last byte has been returned to the user.
   This
 could be because the underlying stream has been exhausted, or if errors
 were encountered while inflating that stream.
   */
  jboolean eof_;
  jint nativeEndBufSize_;
}

#pragma mark Public

/*!
 @brief This is the most basic constructor.
 You only need to pass the <code>InputStream</code>
  from which the compressed data is to be read from. Default
 settings for the <code>Inflater</code> and internal buffer are be used. In
 particular the Inflater expects a ZLIB header from the input stream.
 @param is
 the <code>InputStream</code> to read data from.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is;

/*!
 @brief This constructor lets you pass a specifically initialized Inflater,
 for example one that expects no ZLIB header.
 @param is
 the <code>InputStream</code> to read data from.
 @param inflater
 the specific <code>Inflater</code> for decompressing data.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is
                  withJavaUtilZipInflater:(JavaUtilZipInflater *)inflater;

/*!
 @brief This constructor lets you specify both the <code>Inflater</code> as well as
 the internal buffer size to be used.
 @param is
 the <code>InputStream</code> to read data from.
 @param inflater
 the specific <code>Inflater</code> for decompressing data.
 @param bufferSize
 the size to be used for the internal buffer.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is
                  withJavaUtilZipInflater:(JavaUtilZipInflater *)inflater
                                  withInt:(jint)bufferSize;

/*!
 @brief Returns 0 when when this stream has exhausted its input; and 1 otherwise.
 A result of 1 does not guarantee that further bytes can be returned,
 with or without blocking.
 <p>Although consistent with the RI, this behavior is inconsistent with
 <code>InputStream.available()</code>, and violates the <a
 href="http://en.wikipedia.org/wiki/Liskov_substitution_principle">Liskov
 Substitution Principle</a>. This method should not be used.
 @return 0 if no further bytes are available. Otherwise returns 1,
 which suggests (but does not guarantee) that additional bytes are
 available.
 @throws IOException if this stream is closed or an error occurs
 */
- (jint)available;

/*!
 @brief Closes the input stream.
 @throws IOException
 If an error occurs closing the input stream.
 */
- (void)close;

/*!
 @brief Marks the current position in the stream.
 This implementation overrides
 the super type implementation to do nothing at all.
 @param readlimit
 of no use.
 */
- (void)markWithInt:(jint)readlimit;

/*!
 @brief Returns whether the receiver implements <code>mark</code> semantics.
 This type
 does not support <code>mark()</code>, so always responds <code>false</code>.
 @return false, always
 */
- (jboolean)markSupported;

/*!
 @brief Reads a single byte of decompressed data.
 @return the byte read.
 @throws IOException
 if an error occurs reading the byte.
 */
- (jint)read;

/*!
 @brief Reads up to <code>byteCount</code> bytes of decompressed data and stores it in
 <code>buffer</code> starting at <code>byteOffset</code>.
 Returns the number of uncompressed bytes read,
 or -1.
 */
- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

/*!
 @brief This operation is not supported and throws <code>IOException</code>.
 */
- (void)reset;

/*!
 @brief Skips up to <code>byteCount</code> bytes of uncompressed data.
 @param byteCount the number of bytes to skip.
 @return the number of uncompressed bytes skipped.
 @throws IllegalArgumentException if <code>byteCount < 0</code>.
 @throws IOException if an error occurs skipping.
 */
- (jlong)skipWithLong:(jlong)byteCount;

#pragma mark Protected

/*!
 @brief Fills the input buffer with data to be decompressed.
 @throws IOException
 if an <code>IOException</code> occurs.
 */
- (void)fill;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipInflaterInputStream)

J2OBJC_FIELD_SETTER(JavaUtilZipInflaterInputStream, inf_, JavaUtilZipInflater *)
J2OBJC_FIELD_SETTER(JavaUtilZipInflaterInputStream, buf_, IOSByteArray *)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipInflaterInputStream, BUF_SIZE, jint)

FOUNDATION_EXPORT void JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_(JavaUtilZipInflaterInputStream *self, JavaIoInputStream *is);

FOUNDATION_EXPORT JavaUtilZipInflaterInputStream *new_JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_(JavaIoInputStream *is) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_(JavaUtilZipInflaterInputStream *self, JavaIoInputStream *is, JavaUtilZipInflater *inflater);

FOUNDATION_EXPORT JavaUtilZipInflaterInputStream *new_JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_(JavaIoInputStream *is, JavaUtilZipInflater *inflater) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_withInt_(JavaUtilZipInflaterInputStream *self, JavaIoInputStream *is, JavaUtilZipInflater *inflater, jint bufferSize);

FOUNDATION_EXPORT JavaUtilZipInflaterInputStream *new_JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_withInt_(JavaIoInputStream *is, JavaUtilZipInflater *inflater, jint bufferSize) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipInflaterInputStream)

#endif // _JavaUtilZipInflaterInputStream_H_
