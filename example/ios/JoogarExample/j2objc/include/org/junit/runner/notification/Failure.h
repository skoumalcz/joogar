//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/runner/notification/Failure.java
//

#ifndef _OrgJunitRunnerNotificationFailure_H_
#define _OrgJunitRunnerNotificationFailure_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class JavaLangThrowable;
@class OrgJunitRunnerDescription;

@interface OrgJunitRunnerNotificationFailure : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_
                            withJavaLangThrowable:(JavaLangThrowable *)thrownException;

- (OrgJunitRunnerDescription *)getDescription;

- (JavaLangThrowable *)getException;

- (NSString *)getMessage;

- (NSString *)getTestHeader;

- (NSString *)getTrace;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerNotificationFailure)

FOUNDATION_EXPORT void OrgJunitRunnerNotificationFailure_initWithOrgJunitRunnerDescription_withJavaLangThrowable_(OrgJunitRunnerNotificationFailure *self, OrgJunitRunnerDescription *description_, JavaLangThrowable *thrownException);

FOUNDATION_EXPORT OrgJunitRunnerNotificationFailure *new_OrgJunitRunnerNotificationFailure_initWithOrgJunitRunnerDescription_withJavaLangThrowable_(OrgJunitRunnerDescription *description_, JavaLangThrowable *thrownException) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerNotificationFailure)

#endif // _OrgJunitRunnerNotificationFailure_H_