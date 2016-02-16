//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/pkcs7/SignedData.java
//

#ifndef _OrgApacheHarmonySecurityPkcs7SignedData_H_
#define _OrgApacheHarmonySecurityPkcs7SignedData_H_

#include "J2ObjC_header.h"

@class OrgApacheHarmonySecurityAsn1ASN1Sequence;
@protocol JavaUtilList;

/*!
 @author Boris Kuznetsov
 @version $Revision$
 */

/*!
 @brief As defined in PKCS #7: Cryptographic Message Syntax Standard
 (http://www.ietf.org/rfc/rfc2315.txt)
 SignedData ::= SEQUENCE {
 version Version,
 digestAlgorithms DigestAlgorithmIdentifiers,
 contentInfo ContentInfo,
 certificates
 [0] IMPLICIT ExtendedCertificatesAndCertificates OPTIONAL,
 crls
 [1] IMPLICIT CertificateRevocationLists OPTIONAL,
 signerInfos SignerInfos }
 */
@interface OrgApacheHarmonySecurityPkcs7SignedData : NSObject

#pragma mark Public

- (id<JavaUtilList>)getCertificates;

- (id<JavaUtilList>)getCRLs;

- (id<JavaUtilList>)getSignerInfos;

- (jint)getVersion;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityPkcs7SignedData)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Sequence *OrgApacheHarmonySecurityPkcs7SignedData_ASN1_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityPkcs7SignedData, ASN1_, OrgApacheHarmonySecurityAsn1ASN1Sequence *)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityPkcs7SignedData)

#endif // _OrgApacheHarmonySecurityPkcs7SignedData_H_
