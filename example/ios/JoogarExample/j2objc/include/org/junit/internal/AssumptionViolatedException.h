//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/internal/AssumptionViolatedException.java
//

#ifndef _OrgJunitInternalAssumptionViolatedException_H_
#define _OrgJunitInternalAssumptionViolatedException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"
#include "org/hamcrest/SelfDescribing.h"

@class JavaLangThrowable;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgJunitInternalAssumptionViolatedException : JavaLangRuntimeException < OrgHamcrestSelfDescribing >

#pragma mark Public

- (instancetype)initWithId:(id)value
    withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (instancetype)initWithNSString:(NSString *)assumption;

- (instancetype)initWithNSString:(NSString *)assumption
                     withBoolean:(jboolean)valueMatcher
                          withId:(id)value
          withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (instancetype)initWithNSString:(NSString *)assumption
                          withId:(id)value
          withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (instancetype)initWithNSString:(NSString *)assumption
           withJavaLangThrowable:(JavaLangThrowable *)t;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalAssumptionViolatedException)

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithNSString_withBoolean_withId_withOrgHamcrestMatcher_(OrgJunitInternalAssumptionViolatedException *self, NSString *assumption, jboolean valueMatcher, id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithNSString_withBoolean_withId_withOrgHamcrestMatcher_(NSString *assumption, jboolean valueMatcher, id value, id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithId_withOrgHamcrestMatcher_(OrgJunitInternalAssumptionViolatedException *self, id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithId_withOrgHamcrestMatcher_(id value, id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithNSString_withId_withOrgHamcrestMatcher_(OrgJunitInternalAssumptionViolatedException *self, NSString *assumption, id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithNSString_withId_withOrgHamcrestMatcher_(NSString *assumption, id value, id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithNSString_(OrgJunitInternalAssumptionViolatedException *self, NSString *assumption);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithNSString_(NSString *assumption) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithNSString_withJavaLangThrowable_(OrgJunitInternalAssumptionViolatedException *self, NSString *assumption, JavaLangThrowable *t);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithNSString_withJavaLangThrowable_(NSString *assumption, JavaLangThrowable *t) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalAssumptionViolatedException)

#endif // _OrgJunitInternalAssumptionViolatedException_H_
