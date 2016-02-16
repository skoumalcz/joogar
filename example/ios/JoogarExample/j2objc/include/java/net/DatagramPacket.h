//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/DatagramPacket.java
//

#ifndef _JavaNetDatagramPacket_H_
#define _JavaNetDatagramPacket_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class JavaNetInetAddress;
@class JavaNetSocketAddress;

/*!
 @brief This class represents a datagram packet which contains data either to be sent
 or received through a <code>DatagramSocket</code>.
 It holds additional information
 such as its source or destination host.
 */
@interface JavaNetDatagramPacket : NSObject

#pragma mark Public

/*!
 @brief Constructs a new <code>DatagramPacket</code> object to receive data up to
 <code>length</code> bytes.
 @param data
 a byte array to store the read characters.
 @param length
 the length of the data buffer.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)data
                          withInt:(jint)length;

/*!
 @brief Constructs a new <code>DatagramPacket</code> object to send data to the port
 <code>aPort</code> of the address <code>host</code>.
 The <code>length</code> must be
 lesser than or equal to the size of <code>data</code>. The first <code>length</code>
  bytes are sent.
 @param data
 a byte array which stores the characters to be sent.
 @param length
 the length of data.
 @param host
 the address of the target host.
 @param port
 the port of the target host.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)data
                          withInt:(jint)length
           withJavaNetInetAddress:(JavaNetInetAddress *)host
                          withInt:(jint)port;

/*!
 @brief Constructs a new <code>DatagramPacket</code> object to receive data up to
 <code>length</code> bytes with a specified buffer offset.
 @param data
 a byte array to store the read characters.
 @param offset
 the offset of the byte array where the bytes is written.
 @param length
 the length of the data.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)data
                          withInt:(jint)offset
                          withInt:(jint)length;

/*!
 @brief Constructs a new <code>DatagramPacket</code> object to send data to the port
 <code>aPort</code> of the address <code>host</code>.
 The <code>length</code> must be
 lesser than or equal to the size of <code>data</code>. The first <code>length</code>
  bytes from the byte array position <code>offset</code> are sent.
 @param data
 a byte array which stores the characters to be sent.
 @param offset
 the offset of <code>data</code> where to read from.
 @param length
 the length of data.
 @param host
 the address of the target host.
 @param aPort
 the port of the target host.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)data
                          withInt:(jint)offset
                          withInt:(jint)length
           withJavaNetInetAddress:(JavaNetInetAddress *)host
                          withInt:(jint)aPort;

/*!
 @brief Constructs a new <code>DatagramPacket</code> object to send data to the
 address <code>sockAddr</code>.
 The <code>length</code> must be lesser than or equal
 to the size of <code>data</code>. The first <code>length</code> bytes of the data
 are sent.
 @param data
 the byte array to store the data.
 @param offset
 the offset of the data.
 @param length
 the length of the data.
 @param sockAddr
 the target host address and port.
 @throws SocketException
 if an error in the underlying protocol occurs.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)data
                          withInt:(jint)offset
                          withInt:(jint)length
         withJavaNetSocketAddress:(JavaNetSocketAddress *)sockAddr;

/*!
 @brief Constructs a new <code>DatagramPacket</code> object to send data to the
 address <code>sockAddr</code>.
 The <code>length</code> must be lesser than or equal
 to the size of <code>data</code>. The first <code>length</code> bytes of the data
 are sent.
 @param data
 the byte array to store the data.
 @param length
 the length of the data.
 @param sockAddr
 the target host address and port.
 @throws SocketException
 if an error in the underlying protocol occurs.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)data
                          withInt:(jint)length
         withJavaNetSocketAddress:(JavaNetSocketAddress *)sockAddr;

/*!
 @brief Gets the sender or destination IP address of this datagram packet.
 @return the address from where the datagram was received or to which it
 is sent.
 */
- (JavaNetInetAddress *)getAddress;

/*!
 @brief Gets the data of this datagram packet.
 @return the received data or the data to be sent.
 */
- (IOSByteArray *)getData;

/*!
 @brief Gets the length of the data stored in this datagram packet.
 @return the length of the received data or the data to be sent.
 */
- (jint)getLength;

/*!
 @brief Gets the offset of the data stored in this datagram packet.
 @return the position of the received data or the data to be sent.
 */
- (jint)getOffset;

/*!
 @brief Gets the port number of the target or sender host of this datagram
 packet.
 @return the port number of the origin or target host.
 */
- (jint)getPort;

/*!
 @brief Gets the host address and the port to which this datagram packet is sent
 as a <code>SocketAddress</code> object.
 @return the SocketAddress of the target host.
 */
- (JavaNetSocketAddress *)getSocketAddress;

/*!
 @brief Resets 'length' to the last user-supplied length, ready to receive another packet.
  for PlainDatagramSocketImpl
 */
- (void)resetLengthForReceive;

/*!
 @brief Sets the IP address of the target host.
 @param addr
 the target host address.
 */
- (void)setAddressWithJavaNetInetAddress:(JavaNetInetAddress *)addr;

/*!
 @brief Sets the data buffer for this datagram packet.
 The length of the datagram
 packet is set to the buffer length.
 @param buf
 the buffer to store the data.
 */
- (void)setDataWithByteArray:(IOSByteArray *)buf;

/*!
 @brief Sets the data buffer for this datagram packet.
 */
- (void)setDataWithByteArray:(IOSByteArray *)data
                     withInt:(jint)offset
                     withInt:(jint)byteCount;

/*!
 @brief Sets the length of the datagram packet.
 This length plus the offset must
 be lesser than or equal to the buffer size.
 @param length
 the length of this datagram packet.
 */
- (void)setLengthWithInt:(jint)length;

/*!
 @brief Sets the port number of the target host of this datagram packet.
 @param aPort
 the target host port number.
 */
- (void)setPortWithInt:(jint)aPort;

/*!
 @brief Sets 'length' without changing 'userSuppliedLength', after receiving a packet.
  for IoBridge
 */
- (void)setReceivedLengthWithInt:(jint)length;

/*!
 @brief Sets the <code>SocketAddress</code> for this datagram packet.
 @param sockAddr
 the SocketAddress of the target host.
 */
- (void)setSocketAddressWithJavaNetSocketAddress:(JavaNetSocketAddress *)sockAddr;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetDatagramPacket)

FOUNDATION_EXPORT void JavaNetDatagramPacket_initWithByteArray_withInt_(JavaNetDatagramPacket *self, IOSByteArray *data, jint length);

FOUNDATION_EXPORT JavaNetDatagramPacket *new_JavaNetDatagramPacket_initWithByteArray_withInt_(IOSByteArray *data, jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetDatagramPacket_initWithByteArray_withInt_withInt_(JavaNetDatagramPacket *self, IOSByteArray *data, jint offset, jint length);

FOUNDATION_EXPORT JavaNetDatagramPacket *new_JavaNetDatagramPacket_initWithByteArray_withInt_withInt_(IOSByteArray *data, jint offset, jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetDatagramPacket_initWithByteArray_withInt_withInt_withJavaNetInetAddress_withInt_(JavaNetDatagramPacket *self, IOSByteArray *data, jint offset, jint length, JavaNetInetAddress *host, jint aPort);

FOUNDATION_EXPORT JavaNetDatagramPacket *new_JavaNetDatagramPacket_initWithByteArray_withInt_withInt_withJavaNetInetAddress_withInt_(IOSByteArray *data, jint offset, jint length, JavaNetInetAddress *host, jint aPort) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetDatagramPacket_initWithByteArray_withInt_withJavaNetInetAddress_withInt_(JavaNetDatagramPacket *self, IOSByteArray *data, jint length, JavaNetInetAddress *host, jint port);

FOUNDATION_EXPORT JavaNetDatagramPacket *new_JavaNetDatagramPacket_initWithByteArray_withInt_withJavaNetInetAddress_withInt_(IOSByteArray *data, jint length, JavaNetInetAddress *host, jint port) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetDatagramPacket_initWithByteArray_withInt_withJavaNetSocketAddress_(JavaNetDatagramPacket *self, IOSByteArray *data, jint length, JavaNetSocketAddress *sockAddr);

FOUNDATION_EXPORT JavaNetDatagramPacket *new_JavaNetDatagramPacket_initWithByteArray_withInt_withJavaNetSocketAddress_(IOSByteArray *data, jint length, JavaNetSocketAddress *sockAddr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetDatagramPacket_initWithByteArray_withInt_withInt_withJavaNetSocketAddress_(JavaNetDatagramPacket *self, IOSByteArray *data, jint offset, jint length, JavaNetSocketAddress *sockAddr);

FOUNDATION_EXPORT JavaNetDatagramPacket *new_JavaNetDatagramPacket_initWithByteArray_withInt_withInt_withJavaNetSocketAddress_(IOSByteArray *data, jint offset, jint length, JavaNetSocketAddress *sockAddr) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetDatagramPacket)

#endif // _JavaNetDatagramPacket_H_
