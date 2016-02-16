//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/runner/Request.java
//

#ifndef _OrgJunitRunnerRequest_H_
#define _OrgJunitRunnerRequest_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangThrowable;
@class OrgJunitRunnerComputer;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerRunner;
@protocol JavaUtilComparator;

@interface OrgJunitRunnerRequest : NSObject

#pragma mark Public

- (instancetype)init;

+ (OrgJunitRunnerRequest *)aClassWithIOSClass:(IOSClass *)clazz;

+ (OrgJunitRunnerRequest *)classesWithIOSClassArray:(IOSObjectArray *)classes;

+ (OrgJunitRunnerRequest *)classesWithOrgJunitRunnerComputer:(OrgJunitRunnerComputer *)computer
                                           withIOSClassArray:(IOSObjectArray *)classes;

+ (OrgJunitRunnerRequest *)classWithoutSuiteMethodWithIOSClass:(IOSClass *)clazz;

+ (OrgJunitRunnerRequest *)errorReportWithIOSClass:(IOSClass *)klass
                             withJavaLangThrowable:(JavaLangThrowable *)cause;

- (OrgJunitRunnerRequest *)filterWithWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)desiredDescription;

- (OrgJunitRunnerRequest *)filterWithWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (OrgJunitRunnerRunner *)getRunner;

+ (OrgJunitRunnerRequest *)methodWithIOSClass:(IOSClass *)clazz
                                 withNSString:(NSString *)methodName;

+ (OrgJunitRunnerRequest *)runnerWithOrgJunitRunnerRunner:(OrgJunitRunnerRunner *)runner;

- (OrgJunitRunnerRequest *)sortWithWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerRequest)

FOUNDATION_EXPORT OrgJunitRunnerRequest *OrgJunitRunnerRequest_methodWithIOSClass_withNSString_(IOSClass *clazz, NSString *methodName);

FOUNDATION_EXPORT OrgJunitRunnerRequest *OrgJunitRunnerRequest_aClassWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT OrgJunitRunnerRequest *OrgJunitRunnerRequest_classWithoutSuiteMethodWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT OrgJunitRunnerRequest *OrgJunitRunnerRequest_classesWithOrgJunitRunnerComputer_withIOSClassArray_(OrgJunitRunnerComputer *computer, IOSObjectArray *classes);

FOUNDATION_EXPORT OrgJunitRunnerRequest *OrgJunitRunnerRequest_classesWithIOSClassArray_(IOSObjectArray *classes);

FOUNDATION_EXPORT OrgJunitRunnerRequest *OrgJunitRunnerRequest_errorReportWithIOSClass_withJavaLangThrowable_(IOSClass *klass, JavaLangThrowable *cause);

FOUNDATION_EXPORT OrgJunitRunnerRequest *OrgJunitRunnerRequest_runnerWithOrgJunitRunnerRunner_(OrgJunitRunnerRunner *runner);

FOUNDATION_EXPORT void OrgJunitRunnerRequest_init(OrgJunitRunnerRequest *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerRequest)

#endif // _OrgJunitRunnerRequest_H_