//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertPathValidatorSpi.java
//

#ifndef _JavaSecurityCertCertPathValidatorSpi_H_
#define _JavaSecurityCertCertPathValidatorSpi_H_

#include "J2ObjC_header.h"

@class JavaSecurityCertCertPath;
@protocol JavaSecurityCertCertPathParameters;
@protocol JavaSecurityCertCertPathValidatorResult;

/*!
 @brief The <i>Service Provider Interface</i> (<b>SPI</b>) for the <code>CertPathValidator</code>
  class to be implemented by security providers.
 */
@interface JavaSecurityCertCertPathValidatorSpi : NSObject

#pragma mark Public

/*!
 @brief Creates a new <code>CertPathValidatorSpi</code> instance.
 */
- (instancetype)init;

/*!
 @brief Validates the <code>CertPath</code> with the algorithm of this <code>CertPathValidator</code>
  using the specified algorithm parameters.
 @param certPath
 the certification path to be validated.
 @param params
 the certification path validator algorithm parameters.
 @return the validation result.
 @throws CertPathValidatorException
 if the validation fails, or the algorithm of the specified
 certification path cannot be validated using the algorithm of
 this instance.
 @throws InvalidAlgorithmParameterException
 if the specified algorithm parameters cannot be used with
 this algorithm.
 */
- (id<JavaSecurityCertCertPathValidatorResult>)engineValidateWithJavaSecurityCertCertPath:(JavaSecurityCertCertPath *)certPath
                                                   withJavaSecurityCertCertPathParameters:(id<JavaSecurityCertCertPathParameters>)params;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertPathValidatorSpi)

FOUNDATION_EXPORT void JavaSecurityCertCertPathValidatorSpi_init(JavaSecurityCertCertPathValidatorSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertPathValidatorSpi)

#endif // _JavaSecurityCertCertPathValidatorSpi_H_
