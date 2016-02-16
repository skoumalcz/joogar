//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/DOMConfigurationImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomDOMConfigurationImpl_H_
#define _OrgApacheHarmonyXmlDomDOMConfigurationImpl_H_

#include "J2ObjC_header.h"
#include "org/w3c/dom/DOMConfiguration.h"

@protocol OrgW3cDomDOMStringList;
@protocol OrgW3cDomNode;

/*!
 @brief A minimal implementation of DOMConfiguration.
 This implementation uses inner
 parameter instances to centralize each parameter's behavior.
 */
@interface OrgApacheHarmonyXmlDomDOMConfigurationImpl : NSObject < OrgW3cDomDOMConfiguration >

#pragma mark Public

- (instancetype)init;

- (jboolean)canSetParameterWithNSString:(NSString *)name
                                 withId:(id)value;

- (id)getParameterWithNSString:(NSString *)name;

- (id<OrgW3cDomDOMStringList>)getParameterNames;

- (void)normalizeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

- (void)setParameterWithNSString:(NSString *)name
                          withId:(id)value;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonyXmlDomDOMConfigurationImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomDOMConfigurationImpl_init(OrgApacheHarmonyXmlDomDOMConfigurationImpl *self);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomDOMConfigurationImpl *new_OrgApacheHarmonyXmlDomDOMConfigurationImpl_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomDOMConfigurationImpl)

@protocol OrgApacheHarmonyXmlDomDOMConfigurationImpl_Parameter < NSObject, JavaObject >

- (id)getWithOrgApacheHarmonyXmlDomDOMConfigurationImpl:(OrgApacheHarmonyXmlDomDOMConfigurationImpl *)config;

- (void)setWithOrgApacheHarmonyXmlDomDOMConfigurationImpl:(OrgApacheHarmonyXmlDomDOMConfigurationImpl *)config
                                                   withId:(id)value;

- (jboolean)canSetWithOrgApacheHarmonyXmlDomDOMConfigurationImpl:(OrgApacheHarmonyXmlDomDOMConfigurationImpl *)config
                                                          withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomDOMConfigurationImpl_Parameter)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomDOMConfigurationImpl_Parameter)

@interface OrgApacheHarmonyXmlDomDOMConfigurationImpl_FixedParameter : NSObject < OrgApacheHarmonyXmlDomDOMConfigurationImpl_Parameter > {
 @public
  id onlyValue_;
}

#pragma mark Public

- (jboolean)canSetWithOrgApacheHarmonyXmlDomDOMConfigurationImpl:(OrgApacheHarmonyXmlDomDOMConfigurationImpl *)config
                                                          withId:(id)value;

- (id)getWithOrgApacheHarmonyXmlDomDOMConfigurationImpl:(OrgApacheHarmonyXmlDomDOMConfigurationImpl *)config;

- (void)setWithOrgApacheHarmonyXmlDomDOMConfigurationImpl:(OrgApacheHarmonyXmlDomDOMConfigurationImpl *)config
                                                   withId:(id)value;

#pragma mark Package-Private

- (instancetype)initWithId:(id)onlyValue;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomDOMConfigurationImpl_FixedParameter)

J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomDOMConfigurationImpl_FixedParameter, onlyValue_, id)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomDOMConfigurationImpl_FixedParameter_initWithId_(OrgApacheHarmonyXmlDomDOMConfigurationImpl_FixedParameter *self, id onlyValue);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomDOMConfigurationImpl_FixedParameter *new_OrgApacheHarmonyXmlDomDOMConfigurationImpl_FixedParameter_initWithId_(id onlyValue) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomDOMConfigurationImpl_FixedParameter)

@interface OrgApacheHarmonyXmlDomDOMConfigurationImpl_BooleanParameter : NSObject < OrgApacheHarmonyXmlDomDOMConfigurationImpl_Parameter >

#pragma mark Public

- (jboolean)canSetWithOrgApacheHarmonyXmlDomDOMConfigurationImpl:(OrgApacheHarmonyXmlDomDOMConfigurationImpl *)config
                                                          withId:(id)value;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomDOMConfigurationImpl_BooleanParameter)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomDOMConfigurationImpl_BooleanParameter_init(OrgApacheHarmonyXmlDomDOMConfigurationImpl_BooleanParameter *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomDOMConfigurationImpl_BooleanParameter)

#endif // _OrgApacheHarmonyXmlDomDOMConfigurationImpl_H_