//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/Contains.java
//

#ifndef _OrgMockitoInternalMatchersContains_H_
#define _OrgMockitoInternalMatchersContains_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"

@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersContains : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)substring;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersContains)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersContains_initWithNSString_(OrgMockitoInternalMatchersContains *self, NSString *substring);

FOUNDATION_EXPORT OrgMockitoInternalMatchersContains *new_OrgMockitoInternalMatchersContains_initWithNSString_(NSString *substring) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersContains)

#endif // _OrgMockitoInternalMatchersContains_H_
