//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/EntityImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomEntityImpl_H_
#define _OrgApacheHarmonyXmlDomEntityImpl_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/xml/dom/NodeImpl.h"
#include "org/w3c/dom/Entity.h"

@class OrgApacheHarmonyXmlDomDocumentImpl;

/*!
 @brief Provides a straightforward implementation of the corresponding W3C DOM
 interface.
 The class is used internally only, thus only notable members that
 are not in the original interface are documented (the W3C docs are quite
 extensive). Hope that's ok.
 <p>
 Some of the fields may have package visibility, so other classes belonging to
 the DOM implementation can easily access them while maintaining the DOM tree
 structure.
 */
@interface OrgApacheHarmonyXmlDomEntityImpl : OrgApacheHarmonyXmlDomNodeImpl < OrgW3cDomEntity >

#pragma mark Public

- (NSString *)getInputEncoding;

- (NSString *)getNodeName;

- (jshort)getNodeType;

- (NSString *)getNotationName;

- (NSString *)getPublicId;

- (NSString *)getSystemId;

- (NSString *)getXmlEncoding;

- (NSString *)getXmlVersion;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)notationName
                                              withNSString:(NSString *)publicID
                                              withNSString:(NSString *)systemID;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomEntityImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomEntityImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_withNSString_withNSString_(OrgApacheHarmonyXmlDomEntityImpl *self, OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *notationName, NSString *publicID, NSString *systemID);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomEntityImpl *new_OrgApacheHarmonyXmlDomEntityImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_withNSString_withNSString_(OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *notationName, NSString *publicID, NSString *systemID) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomEntityImpl)

#endif // _OrgApacheHarmonyXmlDomEntityImpl_H_
