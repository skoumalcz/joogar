//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/InetSocketAddress.java
//

#ifndef _JavaNetInetSocketAddress_H_
#define _JavaNetInetSocketAddress_H_

#include "J2ObjC_header.h"
#include "java/net/SocketAddress.h"

@class JavaNetInetAddress;

/*!
 @brief This class represents a socket endpoint described by a IP address and a port
 number.
 It is a concrete implementation of <code>SocketAddress</code> for IP.
 */
@interface JavaNetInetSocketAddress : JavaNetSocketAddress

#pragma mark Public

/*!
  internal use only
 */
- (instancetype)init;

/*!
 @brief Creates a socket endpoint with the given port number <code>port</code> and
 <code>address</code>.
 The range for valid port numbers is between 0 and 65535
 inclusive. If <code>address</code> is <code>null</code> this socket is bound to the
 IPv4 wildcard address.
 @param port
 the specified port number to which this socket is bound.
 @param address
 the specified address to which this socket is bound.
 */
- (instancetype)initWithJavaNetInetAddress:(JavaNetInetAddress *)address
                                   withInt:(jint)port;

/*!
 @brief Creates a socket endpoint with the given port number <code>port</code> and
 no specified address.
 The range for valid port numbers is between 0 and
 65535 inclusive.
 @param port
 the specified port number to which this socket is bound.
 */
- (instancetype)initWithInt:(jint)port;

/*!
 @brief Creates a socket endpoint with the given port number <code>port</code> and the
 hostname <code>host</code>.
 The hostname is tried to be resolved and cannot be
 <code>null</code>. The range for valid port numbers is between 0 and 65535
 inclusive.
 @param port
 the specified port number to which this socket is bound.
 @param host
 the specified hostname to which this socket is bound.
 */
- (instancetype)initWithNSString:(NSString *)host
                         withInt:(jint)port;

/*!
 @brief Creates an <code>InetSocketAddress</code> without trying to resolve the
 hostname into an <code>InetAddress</code>.
 The address field is marked as
 unresolved.
 @param host
 the specified hostname to which this socket is bound.
 @param port
 the specified port number to which this socket is bound.
 @return the created InetSocketAddress instance.
 @throws IllegalArgumentException
 if the hostname <code>host</code> is <code>null</code> or the port is
 not in the range between 0 and 65535.
 */
+ (JavaNetInetSocketAddress *)createUnresolvedWithNSString:(NSString *)host
                                                   withInt:(jint)port;

/*!
 @brief Compares two socket endpoints and returns true if they are equal.
 Two
 socket endpoints are equal if the IP address or the hostname of both are
 equal and they are bound to the same port.
 @param socketAddr
 the object to be tested for equality.
 @return <code>true</code> if this socket and the given socket object <code>socketAddr</code>
  are equal, <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)socketAddr;

/*!
 @brief Returns this socket address' address.
 */
- (JavaNetInetAddress *)getAddress;

/*!
 @brief Returns the hostname, doing a reverse DNS lookup on the <code>InetAddress</code> if no
 hostname string was provided at construction time.
 Use <code>getHostString</code> to
 avoid the reverse DNS lookup.
 */
- (NSString *)getHostName;

/*!
 @brief Returns the hostname if known, or the result of <code>InetAddress.getHostAddress</code>.
 Unlike <code>getHostName</code>, this method will never cause a DNS lookup.
 @since 1.7
 */
- (NSString *)getHostString;

/*!
 @brief Returns this socket address' port.
 */
- (jint)getPort;

- (NSUInteger)hash;

/*!
 @brief Returns whether this socket address is unresolved or not.
 @return <code>true</code> if this socket address is unresolved, <code>false</code>
 otherwise.
 */
- (jboolean)isUnresolved;

/*!
 @brief Returns a string containing the address (or the hostname for an
 unresolved <code>InetSocketAddress</code>) and port number.
 For example: <code>"www.google.com/74.125.224.115:80"</code> or <code>"/127.0.0.1:80"</code>.
 */
- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)hostname
                         withInt:(jint)port
                     withBoolean:(jboolean)needResolved;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetInetSocketAddress)

FOUNDATION_EXPORT void JavaNetInetSocketAddress_init(JavaNetInetSocketAddress *self);

FOUNDATION_EXPORT JavaNetInetSocketAddress *new_JavaNetInetSocketAddress_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetInetSocketAddress_initWithInt_(JavaNetInetSocketAddress *self, jint port);

FOUNDATION_EXPORT JavaNetInetSocketAddress *new_JavaNetInetSocketAddress_initWithInt_(jint port) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetInetSocketAddress_initWithJavaNetInetAddress_withInt_(JavaNetInetSocketAddress *self, JavaNetInetAddress *address, jint port);

FOUNDATION_EXPORT JavaNetInetSocketAddress *new_JavaNetInetSocketAddress_initWithJavaNetInetAddress_withInt_(JavaNetInetAddress *address, jint port) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetInetSocketAddress_initWithNSString_withInt_(JavaNetInetSocketAddress *self, NSString *host, jint port);

FOUNDATION_EXPORT JavaNetInetSocketAddress *new_JavaNetInetSocketAddress_initWithNSString_withInt_(NSString *host, jint port) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetInetSocketAddress_initWithNSString_withInt_withBoolean_(JavaNetInetSocketAddress *self, NSString *hostname, jint port, jboolean needResolved);

FOUNDATION_EXPORT JavaNetInetSocketAddress *new_JavaNetInetSocketAddress_initWithNSString_withInt_withBoolean_(NSString *hostname, jint port, jboolean needResolved) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInetSocketAddress *JavaNetInetSocketAddress_createUnresolvedWithNSString_withInt_(NSString *host, jint port);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetInetSocketAddress)

#endif // _JavaNetInetSocketAddress_H_
