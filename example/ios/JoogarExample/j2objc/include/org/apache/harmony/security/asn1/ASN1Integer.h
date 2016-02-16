//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1Integer.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1Integer_H_
#define _OrgApacheHarmonySecurityAsn1ASN1Integer_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/asn1/ASN1Primitive.h"

@class JavaMathBigInteger;
@class OrgApacheHarmonySecurityAsn1BerInputStream;
@class OrgApacheHarmonySecurityAsn1BerOutputStream;

/*!
 @author Vladimir N. Molotkov, Stepan M. Mishura
 @version $Revision$
 */

/*!
 @brief This class represents ASN.1 Integer type.
 */
@interface OrgApacheHarmonySecurityAsn1ASN1Integer : OrgApacheHarmonySecurityAsn1ASN1Primitive

#pragma mark Public

/*!
 @brief Constructs ASN.1 Integer type
 The constructor is provided for inheritance purposes
 when there is a need to create a custom ASN.1 Integer type.
 To get a default implementation it is recommended to use
 getInstance() method.
 */
- (instancetype)init;

- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

/*!
 @brief Converts primitive int value to a form most suitable for encoding.
 @param value primitive value to be encoded
 @return object suitable for encoding
 */
+ (id)fromIntValueWithInt:(jint)value;

/*!
 @brief Extracts array of bytes from BER input stream.
 @return array of bytes
 */
- (id)getDecodedObjectWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

/*!
 @brief Returns ASN.1 Integer type default implementation
 The default implementation works with encoding
 that is represented as byte array in two's-complement notation.
 @return ASN.1 Integer type default implementation
 */
+ (OrgApacheHarmonySecurityAsn1ASN1Integer *)getInstance;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

/*!
 @brief Converts decoded ASN.1 Integer to a BigInteger.
 @param decoded a decoded object corresponding to this type
 @return decoded BigInteger value.
 */
+ (JavaMathBigInteger *)toBigIntegerValueWithId:(id)decoded;

/*!
 @brief Converts decoded ASN.1 Integer to int value.
 If the object represents an integer value
 larger than 32 bits, the high bits will be lost.
 @param decoded a decoded object corresponding to this type
 @return decoded int value.
 */
+ (jint)toIntValueWithId:(id)decoded;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1Integer)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1ASN1Integer_init(OrgApacheHarmonySecurityAsn1ASN1Integer *self);

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Integer *new_OrgApacheHarmonySecurityAsn1ASN1Integer_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Integer *OrgApacheHarmonySecurityAsn1ASN1Integer_getInstance();

FOUNDATION_EXPORT jint OrgApacheHarmonySecurityAsn1ASN1Integer_toIntValueWithId_(id decoded);

FOUNDATION_EXPORT JavaMathBigInteger *OrgApacheHarmonySecurityAsn1ASN1Integer_toBigIntegerValueWithId_(id decoded);

FOUNDATION_EXPORT id OrgApacheHarmonySecurityAsn1ASN1Integer_fromIntValueWithInt_(jint value);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1Integer)

#endif // _OrgApacheHarmonySecurityAsn1ASN1Integer_H_
