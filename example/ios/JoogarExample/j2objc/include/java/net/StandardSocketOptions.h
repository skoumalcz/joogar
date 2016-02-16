//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/StandardSocketOptions.java
//

#ifndef _JavaNetStandardSocketOptions_H_
#define _JavaNetStandardSocketOptions_H_

#include "J2ObjC_header.h"
#include "java/net/SocketOption.h"

@class IOSClass;
@class JavaIoFileDescriptor;
@protocol JavaNetSocketOption;
@protocol JavaUtilSet;

/*!
 @brief Defines the set standard of socket options that can be supported by network channels.
 <p>See <code>java.nio.channels.NetworkChannel</code> for more information, particularly
 <code>java.nio.channels.NetworkChannel.supportedOptions()</code> for the options that are supported
 for each type of socket.
 @since 1.7
  Until ready for a public API change
 */
@interface JavaNetStandardSocketOptions : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(JavaNetStandardSocketOptions)

FOUNDATION_EXPORT id<JavaNetSocketOption> JavaNetStandardSocketOptions_IP_MULTICAST_IF_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetStandardSocketOptions, IP_MULTICAST_IF_, id<JavaNetSocketOption>)

FOUNDATION_EXPORT id<JavaNetSocketOption> JavaNetStandardSocketOptions_IP_MULTICAST_LOOP__;
J2OBJC_STATIC_FIELD_GETTER(JavaNetStandardSocketOptions, IP_MULTICAST_LOOP__, id<JavaNetSocketOption>)

FOUNDATION_EXPORT id<JavaNetSocketOption> JavaNetStandardSocketOptions_IP_MULTICAST_TTL_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetStandardSocketOptions, IP_MULTICAST_TTL_, id<JavaNetSocketOption>)

FOUNDATION_EXPORT id<JavaNetSocketOption> JavaNetStandardSocketOptions_IP_TOS_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetStandardSocketOptions, IP_TOS_, id<JavaNetSocketOption>)

FOUNDATION_EXPORT id<JavaNetSocketOption> JavaNetStandardSocketOptions_SO_BROADCAST__;
J2OBJC_STATIC_FIELD_GETTER(JavaNetStandardSocketOptions, SO_BROADCAST__, id<JavaNetSocketOption>)

FOUNDATION_EXPORT id<JavaNetSocketOption> JavaNetStandardSocketOptions_SO_KEEPALIVE__;
J2OBJC_STATIC_FIELD_GETTER(JavaNetStandardSocketOptions, SO_KEEPALIVE__, id<JavaNetSocketOption>)

FOUNDATION_EXPORT id<JavaNetSocketOption> JavaNetStandardSocketOptions_SO_LINGER__;
J2OBJC_STATIC_FIELD_GETTER(JavaNetStandardSocketOptions, SO_LINGER__, id<JavaNetSocketOption>)

FOUNDATION_EXPORT id<JavaNetSocketOption> JavaNetStandardSocketOptions_SO_RCVBUF__;
J2OBJC_STATIC_FIELD_GETTER(JavaNetStandardSocketOptions, SO_RCVBUF__, id<JavaNetSocketOption>)

FOUNDATION_EXPORT id<JavaNetSocketOption> JavaNetStandardSocketOptions_SO_REUSEADDR__;
J2OBJC_STATIC_FIELD_GETTER(JavaNetStandardSocketOptions, SO_REUSEADDR__, id<JavaNetSocketOption>)

FOUNDATION_EXPORT id<JavaNetSocketOption> JavaNetStandardSocketOptions_SO_SNDBUF__;
J2OBJC_STATIC_FIELD_GETTER(JavaNetStandardSocketOptions, SO_SNDBUF__, id<JavaNetSocketOption>)

FOUNDATION_EXPORT id<JavaNetSocketOption> JavaNetStandardSocketOptions_TCP_NODELAY__;
J2OBJC_STATIC_FIELD_GETTER(JavaNetStandardSocketOptions, TCP_NODELAY__, id<JavaNetSocketOption>)

FOUNDATION_EXPORT id<JavaUtilSet> JavaNetStandardSocketOptions_DATAGRAM_SOCKET_OPTIONS_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetStandardSocketOptions, DATAGRAM_SOCKET_OPTIONS_, id<JavaUtilSet>)

FOUNDATION_EXPORT id<JavaUtilSet> JavaNetStandardSocketOptions_SOCKET_OPTIONS_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetStandardSocketOptions, SOCKET_OPTIONS_, id<JavaUtilSet>)

FOUNDATION_EXPORT id<JavaUtilSet> JavaNetStandardSocketOptions_SERVER_SOCKET_OPTIONS_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetStandardSocketOptions, SERVER_SOCKET_OPTIONS_, id<JavaUtilSet>)

FOUNDATION_EXPORT void JavaNetStandardSocketOptions_init(JavaNetStandardSocketOptions *self);

FOUNDATION_EXPORT JavaNetStandardSocketOptions *new_JavaNetStandardSocketOptions_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetStandardSocketOptions)

/*!
 @brief A base class for SocketOption objects that passes the values to/from <code>IoBridge</code> as they
 are.
 For use with simple types like Integer and Boolean, and can be extended for more
 validation / type conversion.
  internal use only
 */
@interface JavaNetStandardSocketOptions_SocketOptionImpl : NSObject < JavaNetSocketOption > {
 @public
  NSString *name_;
  jint socketOption_;
}

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)name
                    withIOSClass:(IOSClass *)type
                         withInt:(jint)socketOption;

/*!
 @brief Gets the value of the socket option.
  internal method
 */
- (id)getValueWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

- (NSString *)name;

/*!
 @brief Sets the socket option of the file descriptor to value using IoBridge.
  internal method
 */
- (void)setValueWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                  withId:(id)value;

- (IOSClass *)type;

#pragma mark Protected

/*!
 @brief Throws AssertionError if the value is outside of the acceptable range.
 Implementations may also convert the value to a different type or
 value. The default implementation does nothing.
 */
- (id)validateAndConvertValueAfterGetWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                                       withId:(id)value;

/*!
 @brief Throws IllegalArgumentException if the value is outside of the acceptable range.
 Subclasses can override to apply option-specific validate, and may also convert the value
 to a different type or value. The default implementation prevents null values and returns
 the value unchanged.
 */
- (id)validateAndConvertValueBeforeSetWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                                        withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetStandardSocketOptions_SocketOptionImpl)

J2OBJC_FIELD_SETTER(JavaNetStandardSocketOptions_SocketOptionImpl, name_, NSString *)

FOUNDATION_EXPORT void JavaNetStandardSocketOptions_SocketOptionImpl_initWithNSString_withIOSClass_withInt_(JavaNetStandardSocketOptions_SocketOptionImpl *self, NSString *name, IOSClass *type, jint socketOption);

FOUNDATION_EXPORT JavaNetStandardSocketOptions_SocketOptionImpl *new_JavaNetStandardSocketOptions_SocketOptionImpl_initWithNSString_withIOSClass_withInt_(NSString *name, IOSClass *type, jint socketOption) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetStandardSocketOptions_SocketOptionImpl)

#endif // _JavaNetStandardSocketOptions_H_
