//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/DatagramChannelImpl.java
//

#ifndef _JavaNioDatagramChannelImpl_H_
#define _JavaNioDatagramChannelImpl_H_

#include "J2ObjC_header.h"
#include "java/nio/FileDescriptorChannel.h"
#include "java/nio/channels/DatagramChannel.h"

@class IOSObjectArray;
@class JavaIoFileDescriptor;
@class JavaNetDatagramSocket;
@class JavaNetInetAddress;
@class JavaNetInetSocketAddress;
@class JavaNetSocketAddress;
@class JavaNioByteBuffer;
@class JavaNioChannelsSpiSelectorProvider;
@protocol JavaNetSocketOption;
@protocol JavaUtilSet;

@interface JavaNioDatagramChannelImpl : JavaNioChannelsDatagramChannel < JavaNioFileDescriptorChannel > {
 @public
  JavaNetInetSocketAddress *connectAddress_;
  JavaNetInetAddress *localAddress_;
  jboolean connected_;
  jboolean isBound_;
}

#pragma mark Public

/*!
  Until ready for a public API change 
 */
- (JavaNioChannelsDatagramChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)local;

- (JavaNioChannelsDatagramChannel *)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)address;

- (JavaNioChannelsDatagramChannel *)disconnect;

- (JavaIoFileDescriptor *)getFD;

/*!
  Until ready for a public API change 
 */
- (JavaNetSocketAddress *)getLocalAddress;

/*!
  Until ready for a public API change 
 */
- (id)getOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option;

- (jboolean)isConnected;

- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)target;

- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)targets
                                withInt:(jint)offset
                                withInt:(jint)length;

- (JavaNetSocketAddress *)receiveWithJavaNioByteBuffer:(JavaNioByteBuffer *)target;

- (jint)sendWithJavaNioByteBuffer:(JavaNioByteBuffer *)source
         withJavaNetSocketAddress:(JavaNetSocketAddress *)socketAddress;

/*!
  Until ready for a public API change 
 */
- (JavaNioChannelsDatagramChannel *)setOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option
                                                              withId:(id)value;

- (JavaNetDatagramSocket *)socket;

/*!
  Until ready for a public API change 
 */
- (id<JavaUtilSet>)supportedOptions;

- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)src;

/*!
 */
- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)sources
                                 withInt:(jint)offset
                                 withInt:(jint)length;

#pragma mark Protected

- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider;

- (void)implCloseSelectableChannel;

- (void)implConfigureBlockingWithBoolean:(jboolean)blocking;

#pragma mark Package-Private

/*!
 @brief Initialise the isBound, localAddress and localPort state from the file descriptor.
 Used when
 some or all of the bound state has been left to the OS to decide, or when the Socket handled
 bind() or connect().
 @param updateSocketState
 if the associated socket (if present) needs to be updated
  used to sync state, non-private to avoid synthetic method
 */
- (void)onBindWithBoolean:(jboolean)updateSocketState;

/*!
 @brief Initialize the state associated with being connected, optionally syncing the socket if there
 is one.
  used to sync state, non-private to avoid synthetic method
 */
- (void)onConnectWithJavaNetInetAddress:(JavaNetInetAddress *)remoteAddress
                                withInt:(jint)remotePort
                            withBoolean:(jboolean)updateSocketState;

/*!
 @brief Initialize the state associated with being disconnected, optionally syncing the socket if
 there is one.
  used to sync state, non-private to avoid synthetic method
 */
- (void)onDisconnectWithBoolean:(jboolean)updateSocketState;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioDatagramChannelImpl)

J2OBJC_FIELD_SETTER(JavaNioDatagramChannelImpl, connectAddress_, JavaNetInetSocketAddress *)
J2OBJC_FIELD_SETTER(JavaNioDatagramChannelImpl, localAddress_, JavaNetInetAddress *)

FOUNDATION_EXPORT void JavaNioDatagramChannelImpl_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioDatagramChannelImpl *self, JavaNioChannelsSpiSelectorProvider *selectorProvider);

FOUNDATION_EXPORT JavaNioDatagramChannelImpl *new_JavaNioDatagramChannelImpl_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsSpiSelectorProvider *selectorProvider) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioDatagramChannelImpl)

#endif // _JavaNioDatagramChannelImpl_H_