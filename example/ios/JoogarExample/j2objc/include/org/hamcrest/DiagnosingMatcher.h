//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/DiagnosingMatcher.java
//

#ifndef _OrgHamcrestDiagnosingMatcher_H_
#define _OrgHamcrestDiagnosingMatcher_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/BaseMatcher.h"

@protocol OrgHamcrestDescription;

@interface OrgHamcrestDiagnosingMatcher : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype)init;

- (void)describeMismatchWithId:(id)item
    withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatchDescription;

- (jboolean)matchesWithId:(id)item;

#pragma mark Protected

- (jboolean)matchesWithId:(id)item
withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatchDescription;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestDiagnosingMatcher)

FOUNDATION_EXPORT void OrgHamcrestDiagnosingMatcher_init(OrgHamcrestDiagnosingMatcher *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestDiagnosingMatcher)

#endif // _OrgHamcrestDiagnosingMatcher_H_
