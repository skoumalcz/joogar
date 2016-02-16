//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/X509TrustManager.java
//

#ifndef _JavaxNetSslX509TrustManager_H_
#define _JavaxNetSslX509TrustManager_H_

#include "J2ObjC_header.h"
#include "javax/net/ssl/TrustManager.h"

@class IOSObjectArray;

/*!
 @brief The trust manager for X509 certificates to be used to perform authentication
 for secure sockets.
 */
@protocol JavaxNetSslX509TrustManager < JavaxNetSslTrustManager, NSObject, JavaObject >

/*!
 @brief Checks whether the specified certificate chain (partial or complete) can
 be validated and is trusted for client authentication for the specified
 authentication type.
 @param chain
 the certificate chain to validate.
 @param authType
 the authentication type used.
 @throws CertificateException
 if the certificate chain can't be validated or isn't trusted.
 @throws IllegalArgumentException
 if the specified certificate chain is empty or <code>null</code>,
 or if the specified authentication type is <code>null</code> or an
 empty string.
 */
- (void)checkClientTrustedWithJavaSecurityCertX509CertificateArray:(IOSObjectArray *)chain
                                                      withNSString:(NSString *)authType;

/*!
 @brief Checks whether the specified certificate chain (partial or complete) can
 be validated and is trusted for server authentication for the specified
 key exchange algorithm.
 @param chain
 the certificate chain to validate.
 @param authType
 the key exchange algorithm name.
 @throws CertificateException
 if the certificate chain can't be validated or isn't trusted.
 @throws IllegalArgumentException
 if the specified certificate chain is empty or <code>null</code>,
 or if the specified authentication type is <code>null</code> or an
 empty string.
 */
- (void)checkServerTrustedWithJavaSecurityCertX509CertificateArray:(IOSObjectArray *)chain
                                                      withNSString:(NSString *)authType;

/*!
 @brief Returns the list of certificate issuer authorities which are trusted for
 authentication of peers.
 @return the list of certificate issuer authorities which are trusted for
 authentication of peers.
 */
- (IOSObjectArray *)getAcceptedIssuers;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslX509TrustManager)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslX509TrustManager)

#endif // _JavaxNetSslX509TrustManager_H_
