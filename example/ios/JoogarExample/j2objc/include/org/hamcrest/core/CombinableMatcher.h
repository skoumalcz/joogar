//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/core/CombinableMatcher.java
//

#ifndef _OrgHamcrestCoreCombinableMatcher_H_
#define _OrgHamcrestCoreCombinableMatcher_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/TypeSafeDiagnosingMatcher.h"

@class OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher;
@class OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreCombinableMatcher : OrgHamcrestTypeSafeDiagnosingMatcher

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (OrgHamcrestCoreCombinableMatcher *)and__WithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)other;

+ (OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *)bothWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *)eitherWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (OrgHamcrestCoreCombinableMatcher *)or__WithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)other;

#pragma mark Protected

- (jboolean)matchesSafelyWithId:(id)item
     withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatch;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreCombinableMatcher)

FOUNDATION_EXPORT void OrgHamcrestCoreCombinableMatcher_initWithOrgHamcrestMatcher_(OrgHamcrestCoreCombinableMatcher *self, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher *new_OrgHamcrestCoreCombinableMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *OrgHamcrestCoreCombinableMatcher_bothWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *OrgHamcrestCoreCombinableMatcher_eitherWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreCombinableMatcher)

@interface OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher : NSObject

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (OrgHamcrestCoreCombinableMatcher *)and__WithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)other;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher)

FOUNDATION_EXPORT void OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher_initWithOrgHamcrestMatcher_(OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *self, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *new_OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher)

@interface OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher : NSObject

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (OrgHamcrestCoreCombinableMatcher *)or__WithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)other;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher)

FOUNDATION_EXPORT void OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher_initWithOrgHamcrestMatcher_(OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *self, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *new_OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher)

#endif // _OrgHamcrestCoreCombinableMatcher_H_
