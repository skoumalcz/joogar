//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/runner/notification/RunNotifier.java
//

#ifndef _OrgJunitRunnerNotificationRunNotifier_H_
#define _OrgJunitRunnerNotificationRunNotifier_H_

#include "J2ObjC_header.h"

@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationFailure;
@class OrgJunitRunnerNotificationRunListener;
@class OrgJunitRunnerResult;

@interface OrgJunitRunnerNotificationRunNotifier : NSObject

#pragma mark Public

- (instancetype)init;

- (void)addFirstListenerWithOrgJunitRunnerNotificationRunListener:(OrgJunitRunnerNotificationRunListener *)listener;

- (void)addListenerWithOrgJunitRunnerNotificationRunListener:(OrgJunitRunnerNotificationRunListener *)listener;

- (void)fireTestAssumptionFailedWithOrgJunitRunnerNotificationFailure:(OrgJunitRunnerNotificationFailure *)failure;

- (void)fireTestFailureWithOrgJunitRunnerNotificationFailure:(OrgJunitRunnerNotificationFailure *)failure;

- (void)fireTestFinishedWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (void)fireTestIgnoredWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (void)fireTestRunFinishedWithOrgJunitRunnerResult:(OrgJunitRunnerResult *)result;

- (void)fireTestRunStartedWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (void)fireTestStartedWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (void)pleaseStop;

- (void)removeListenerWithOrgJunitRunnerNotificationRunListener:(OrgJunitRunnerNotificationRunListener *)listener;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerNotificationRunNotifier)

FOUNDATION_EXPORT void OrgJunitRunnerNotificationRunNotifier_init(OrgJunitRunnerNotificationRunNotifier *self);

FOUNDATION_EXPORT OrgJunitRunnerNotificationRunNotifier *new_OrgJunitRunnerNotificationRunNotifier_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerNotificationRunNotifier)

#endif // _OrgJunitRunnerNotificationRunNotifier_H_
