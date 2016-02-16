//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/security/IosRSAKey.java
//

#ifndef _ComGoogleJ2objcSecurityIosRSAKey_H_
#define _ComGoogleJ2objcSecurityIosRSAKey_H_

#include "J2ObjC_header.h"
#include "java/security/Key.h"
#include "java/security/interfaces/RSAKey.h"
#include "java/security/interfaces/RSAPrivateKey.h"
#include "java/security/interfaces/RSAPublicKey.h"

@class IOSByteArray;
@class JavaMathBigInteger;
@class JavaSecuritySpecRSAPrivateKeySpec;
@class JavaSecuritySpecRSAPublicKeySpec;

@interface ComGoogleJ2objcSecurityIosRSAKey : NSObject < JavaSecurityInterfacesRSAKey, JavaSecurityKey > {
 @public
  jlong iosSecKey_;
  JavaMathBigInteger *modulus_;
}

#pragma mark Public

- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)modulus;

- (instancetype)initWithLong:(jlong)iosSecKey;

- (NSString *)getAlgorithm;

- (NSString *)getFormat;

- (JavaMathBigInteger *)getModulus;

#pragma mark Protected

- (void)decodeParameters;

#pragma mark Package-Private

- (jlong)getSecKeyRef;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosRSAKey)

J2OBJC_FIELD_SETTER(ComGoogleJ2objcSecurityIosRSAKey, modulus_, JavaMathBigInteger *)

FOUNDATION_EXPORT NSString *ComGoogleJ2objcSecurityIosRSAKey_PUBLIC_KEY_TAG_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleJ2objcSecurityIosRSAKey, PUBLIC_KEY_TAG_, NSString *)

FOUNDATION_EXPORT NSString *ComGoogleJ2objcSecurityIosRSAKey_PRIVATE_KEY_TAG_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleJ2objcSecurityIosRSAKey, PRIVATE_KEY_TAG_, NSString *)

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosRSAKey_initWithJavaMathBigInteger_(ComGoogleJ2objcSecurityIosRSAKey *self, JavaMathBigInteger *modulus);

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosRSAKey_initWithLong_(ComGoogleJ2objcSecurityIosRSAKey *self, jlong iosSecKey);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosRSAKey)

@interface ComGoogleJ2objcSecurityIosRSAKey_IosRSAPublicKey : ComGoogleJ2objcSecurityIosRSAKey < JavaSecurityInterfacesRSAPublicKey >

#pragma mark Public

- (instancetype)initWithLong:(jlong)iosSecKey;

- (instancetype)initWithJavaSecuritySpecRSAPublicKeySpec:(JavaSecuritySpecRSAPublicKeySpec *)spec;

- (IOSByteArray *)getEncoded;

- (JavaMathBigInteger *)getPublicExponent;

#pragma mark Protected

- (void)decodeParameters;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosRSAKey_IosRSAPublicKey)

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosRSAKey_IosRSAPublicKey_initWithLong_(ComGoogleJ2objcSecurityIosRSAKey_IosRSAPublicKey *self, jlong iosSecKey);

FOUNDATION_EXPORT ComGoogleJ2objcSecurityIosRSAKey_IosRSAPublicKey *new_ComGoogleJ2objcSecurityIosRSAKey_IosRSAPublicKey_initWithLong_(jlong iosSecKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosRSAKey_IosRSAPublicKey_initWithJavaSecuritySpecRSAPublicKeySpec_(ComGoogleJ2objcSecurityIosRSAKey_IosRSAPublicKey *self, JavaSecuritySpecRSAPublicKeySpec *spec);

FOUNDATION_EXPORT ComGoogleJ2objcSecurityIosRSAKey_IosRSAPublicKey *new_ComGoogleJ2objcSecurityIosRSAKey_IosRSAPublicKey_initWithJavaSecuritySpecRSAPublicKeySpec_(JavaSecuritySpecRSAPublicKeySpec *spec) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosRSAKey_IosRSAPublicKey)

@interface ComGoogleJ2objcSecurityIosRSAKey_IosRSAPrivateKey : ComGoogleJ2objcSecurityIosRSAKey < JavaSecurityInterfacesRSAPrivateKey >

#pragma mark Public

- (instancetype)initWithLong:(jlong)iosSecKey;

- (instancetype)initWithJavaSecuritySpecRSAPrivateKeySpec:(JavaSecuritySpecRSAPrivateKeySpec *)spec;

- (IOSByteArray *)getEncoded;

- (JavaMathBigInteger *)getPrivateExponent;

#pragma mark Protected

- (void)decodeParameters;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosRSAKey_IosRSAPrivateKey)

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosRSAKey_IosRSAPrivateKey_initWithLong_(ComGoogleJ2objcSecurityIosRSAKey_IosRSAPrivateKey *self, jlong iosSecKey);

FOUNDATION_EXPORT ComGoogleJ2objcSecurityIosRSAKey_IosRSAPrivateKey *new_ComGoogleJ2objcSecurityIosRSAKey_IosRSAPrivateKey_initWithLong_(jlong iosSecKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosRSAKey_IosRSAPrivateKey_initWithJavaSecuritySpecRSAPrivateKeySpec_(ComGoogleJ2objcSecurityIosRSAKey_IosRSAPrivateKey *self, JavaSecuritySpecRSAPrivateKeySpec *spec);

FOUNDATION_EXPORT ComGoogleJ2objcSecurityIosRSAKey_IosRSAPrivateKey *new_ComGoogleJ2objcSecurityIosRSAKey_IosRSAPrivateKey_initWithJavaSecuritySpecRSAPrivateKeySpec_(JavaSecuritySpecRSAPrivateKeySpec *spec) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosRSAKey_IosRSAPrivateKey)

#endif // _ComGoogleJ2objcSecurityIosRSAKey_H_
