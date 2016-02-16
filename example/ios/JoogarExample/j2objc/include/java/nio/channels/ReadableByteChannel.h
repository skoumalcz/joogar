//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/ReadableByteChannel.java
//

#ifndef _JavaNioChannelsReadableByteChannel_H_
#define _JavaNioChannelsReadableByteChannel_H_

#include "J2ObjC_header.h"
#include "java/nio/channels/Channel.h"

@class JavaNioByteBuffer;

/*!
 @brief A <code>ReadableByteChannel</code> is a type of <code>Channel</code> that can read
 bytes.
 <p>
 Read operations are synchronous on a <code>ReadableByteChannel</code>, that is,
 if a read is already in progress on the channel then subsequent reads will
 block until the first read completes. It is undefined whether non-read
 operations will block.
 */
@protocol JavaNioChannelsReadableByteChannel < JavaNioChannelsChannel, NSObject, JavaObject >

/*!
 @brief Reads bytes from the channel into the given buffer.
 <p>
 The maximum number of bytes that will be read is the
 <code>remaining</code> number of bytes in the
 buffer when the method is invoked. The bytes will be read into the buffer
 starting at the buffer's current
 <code>position</code>.
 <p>
 The call may block if other threads are also attempting to read from the
 same channel.
 <p>
 Upon completion, the buffer's <code>position</code> is updated to the end of
 the bytes that were read. The buffer's
 <code>limit</code> is not changed.
 @param buffer
 the byte buffer to receive the bytes.
 @return the number of bytes actually read.
 @throws AsynchronousCloseException
 if another thread closes the channel during the read.
 @throws ClosedByInterruptException
 if another thread interrupts the calling thread while the
 operation is in progress. The interrupt state of the calling
 thread is set and the channel is closed.
 @throws ClosedChannelException
 if the channel is closed.
 @throws IOException
 another I/O error occurs, details are in the message.
 @throws NonReadableChannelException
 if the channel was not opened for reading.
 */
- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsReadableByteChannel)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsReadableByteChannel)

#endif // _JavaNioChannelsReadableByteChannel_H_
