//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/beans/src/main/java/org/apache/harmony/beans/BeansUtils.java
//

#ifndef _OrgApacheHarmonyBeansBeansUtils_H_
#define _OrgApacheHarmonyBeansBeansUtils_H_

#include "J2ObjC_header.h"

@interface OrgApacheHarmonyBeansBeansUtils : NSObject

#pragma mark Public

- (instancetype)init;

+ (jint)getHashCodeWithBoolean:(jboolean)bool_;

+ (jint)getHashCodeWithId:(id)obj;

+ (NSString *)toASCIIUpperCaseWithNSString:(NSString *)string;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyBeansBeansUtils)

FOUNDATION_EXPORT jint OrgApacheHarmonyBeansBeansUtils_getHashCodeWithId_(id obj);

FOUNDATION_EXPORT jint OrgApacheHarmonyBeansBeansUtils_getHashCodeWithBoolean_(jboolean bool_);

FOUNDATION_EXPORT NSString *OrgApacheHarmonyBeansBeansUtils_toASCIIUpperCaseWithNSString_(NSString *string);

FOUNDATION_EXPORT void OrgApacheHarmonyBeansBeansUtils_init(OrgApacheHarmonyBeansBeansUtils *self);

FOUNDATION_EXPORT OrgApacheHarmonyBeansBeansUtils *new_OrgApacheHarmonyBeansBeansUtils_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyBeansBeansUtils)

#endif // _OrgApacheHarmonyBeansBeansUtils_H_
