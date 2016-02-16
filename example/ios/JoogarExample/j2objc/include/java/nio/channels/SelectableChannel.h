//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/SelectableChannel.java
//

#ifndef _JavaNioChannelsSelectableChannel_H_
#define _JavaNioChannelsSelectableChannel_H_

#include "J2ObjC_header.h"
#include "java/nio/channels/Channel.h"
#include "java/nio/channels/spi/AbstractInterruptibleChannel.h"

@class JavaNioChannelsSelectionKey;
@class JavaNioChannelsSelector;
@class JavaNioChannelsSpiSelectorProvider;

/*!
 @brief A channel that can be used with a <code>Selector</code>.
 The channel must be
 registered with a selector by calling one of the <code>register</code> methods,
 which return a <code>SelectionKey</code> object. In order to deregister a channel
 from a selector, its selection key must be canceled. This can be done
 explicitly by calling the <code>SelectionKey.cancel()</code> method but it is also
 done implicitly when the channel or the selector is closed.
 <p>
 A channel may be registered with several selectors at the same time but only
 once for any given selector.
 */
@interface JavaNioChannelsSelectableChannel : JavaNioChannelsSpiAbstractInterruptibleChannel < JavaNioChannelsChannel >

#pragma mark Public

/*!
 @brief Gets the blocking lock which synchronizes the <code>configureBlocking</code>
 and <code>register</code> methods.
 @return the blocking object as lock.
 */
- (id)blockingLock;

/*!
 @brief Sets the blocking mode of this channel.
 A call to this method blocks if
 other calls to this method or to a <code>register</code> method are executing.
 The new blocking mode is valid for calls to other methods that are
 invoked after the call to this method. If other methods are already
 executing when this method is called, they still have the old mode and
 the call to this method might block depending on the implementation.
 @param block
 <code>true</code> for setting this channel's mode to blocking,
 <code>false</code> to set it to non-blocking.
 @return this channel.
 @throws ClosedChannelException
 if this channel is closed.
 @throws IllegalBlockingModeException
 if <code>block</code> is <code>true</code> and this channel has been
 registered with at least one selector.
 @throws IOException
 if an I/O error occurs.
 */
- (JavaNioChannelsSelectableChannel *)configureBlockingWithBoolean:(jboolean)block;

/*!
 @brief Indicates whether this channel is in blocking mode.
 @return <code>true</code> if this channel is blocking, undefined if this
 channel is closed.
 */
- (jboolean)isBlocking;

/*!
 @brief Indicates whether this channel is registered with at least one selector.
 @return <code>true</code> if this channel is registered, <code>false</code>
 otherwise.
 */
- (jboolean)isRegistered;

/*!
 @brief Gets this channel's selection key for the specified selector.
 @param sel
 the selector with which this channel has been registered.
 @return the selection key for the channel or <code>null</code> if this channel
 has not been registered with <code>sel</code>.
 */
- (JavaNioChannelsSelectionKey *)keyForWithJavaNioChannelsSelector:(JavaNioChannelsSelector *)sel;

/*!
 @brief Gets the provider of this channel.
 @return the provider of this channel.
 */
- (JavaNioChannelsSpiSelectorProvider *)provider;

/*!
 @brief Registers this channel with the specified selector for the specified
 interest set.
 If the channel is already registered with the selector, the
 corresponding selection key is returned but the
 <code>interest set</code> is updated to <code>operations</code>. The
 returned key is canceled if the channel is closed while registering is in
 progress.
 <p>
 Calling this method is valid at any time. If another thread executes this
 method or the <code>configureBlocking(boolean</code> method then this call is
 blocked until the other call finishes. After that, it will synchronize on
 the key set of the selector and thus may again block if other threads
 also hold locks on the key set of the same selector.
 <p>
 Calling this method is equivalent to calling
 <code>register(selector, operations, null)</code>.
 @param selector
 the selector with which to register this channel.
 @param operations
 this channel's <code>interest set</code>.
 @return the selection key for this registration.
 @throws ClosedChannelException
 if the channel is closed.
 @throws IllegalBlockingModeException
 if the channel is in blocking mode.
 @throws IllegalSelectorException
 if this channel does not have the same provider as the given
 selector.
 @throws CancelledKeyException
 if this channel is registered but its key has been canceled.
 @throws IllegalArgumentException
 if the operation given is not supported by this channel.
 */
- (JavaNioChannelsSelectionKey *)register__WithJavaNioChannelsSelector:(JavaNioChannelsSelector *)selector
                                                               withInt:(jint)operations;

/*!
 @brief Registers this channel with the specified selector for the specified
 interest set and an object to attach.
 If the channel is already
 registered with the selector, the corresponding selection key is returned
 but its <code>interest set</code> is updated to <code>ops</code> and
 the attached object is updated to <code>att</code>. The returned key is
 canceled if the channel is closed while registering is in progress.
 <p>
 Calling this method is valid at any time. If another thread executes this
 method or the <code>configureBlocking(boolean)</code> method then this call is
 blocked until the other call finishes. After that, it will synchronize on
 the key set of the selector and thus may again block if other threads
 also hold locks on the key set of the same selector.
 @param sel
 the selector with which to register this channel.
 @param ops
 this channel's <code>interest set</code>.
 @param att
 the object to attach, can be <code>null</code>.
 @return the selection key for this registration.
 @throws ClosedChannelException
 if this channel is closed.
 @throws IllegalArgumentException
 if <code>ops</code> is not supported by this channel.
 @throws IllegalBlockingModeException
 if this channel is in blocking mode.
 @throws IllegalSelectorException
 if this channel does not have the same provider as the given
 selector.
 @throws CancelledKeyException
 if this channel is registered but its key has been canceled.
 */
- (JavaNioChannelsSelectionKey *)register__WithJavaNioChannelsSelector:(JavaNioChannelsSelector *)sel
                                                               withInt:(jint)ops
                                                                withId:(id)att;

/*!
 @brief Gets the set of valid <code>operations</code> of this channel.
 Instances of a concrete channel class always return the same value.
 @return the set of operations that this channel supports.
 */
- (jint)validOps;

#pragma mark Protected

/*!
 @brief Constructs a new <code>SelectableChannel</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSelectableChannel)

FOUNDATION_EXPORT void JavaNioChannelsSelectableChannel_init(JavaNioChannelsSelectableChannel *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSelectableChannel)

#endif // _JavaNioChannelsSelectableChannel_H_
