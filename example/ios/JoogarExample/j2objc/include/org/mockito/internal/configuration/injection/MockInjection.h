//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/MockInjection.java
//

#ifndef _OrgMockitoInternalConfigurationInjectionMockInjection_H_
#define _OrgMockitoInternalConfigurationInjectionMockInjection_H_

#include "J2ObjC_header.h"

@class JavaLangReflectField;
@class OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection;
@protocol JavaUtilSet;

@interface OrgMockitoInternalConfigurationInjectionMockInjection : NSObject

#pragma mark Public

- (instancetype)init;

+ (OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *)onFieldWithJavaLangReflectField:(JavaLangReflectField *)field
                                                                                                         withId:(id)ofInstance;

+ (OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *)onFieldsWithJavaUtilSet:(id<JavaUtilSet>)fields
                                                                                                 withId:(id)ofInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionMockInjection)

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *OrgMockitoInternalConfigurationInjectionMockInjection_onFieldWithJavaLangReflectField_withId_(JavaLangReflectField *field, id ofInstance);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *OrgMockitoInternalConfigurationInjectionMockInjection_onFieldsWithJavaUtilSet_withId_(id<JavaUtilSet> fields, id ofInstance);

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionMockInjection_init(OrgMockitoInternalConfigurationInjectionMockInjection *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionMockInjection *new_OrgMockitoInternalConfigurationInjectionMockInjection_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionMockInjection)

@interface OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection : NSObject

#pragma mark Public

- (void)apply;

- (OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *)handleSpyAnnotation;

- (OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *)tryConstructorInjection;

- (OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *)tryPropertyOrFieldInjection;

- (OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *)withMocksWithJavaUtilSet:(id<JavaUtilSet>)mocks;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection)

#endif // _OrgMockitoInternalConfigurationInjectionMockInjection_H_
