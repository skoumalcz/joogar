//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/experimental/theories/internal/ParameterizedAssertionError.java
//

#ifndef _OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_H_
#define _OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

@class IOSObjectArray;
@class JavaLangThrowable;
@protocol JavaUtilCollection;

@interface OrgJunitExperimentalTheoriesInternalParameterizedAssertionError : JavaLangRuntimeException

#pragma mark Public

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)targetException
                             withNSString:(NSString *)methodName
                        withNSObjectArray:(IOSObjectArray *)params;

- (jboolean)isEqual:(id)obj;

+ (NSString *)joinWithNSString:(NSString *)delimiter
        withJavaUtilCollection:(id<JavaUtilCollection>)values;

+ (NSString *)joinWithNSString:(NSString *)delimiter
             withNSObjectArray:(IOSObjectArray *)params;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesInternalParameterizedAssertionError)

FOUNDATION_EXPORT void OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_initWithJavaLangThrowable_withNSString_withNSObjectArray_(OrgJunitExperimentalTheoriesInternalParameterizedAssertionError *self, JavaLangThrowable *targetException, NSString *methodName, IOSObjectArray *params);

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesInternalParameterizedAssertionError *new_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_initWithJavaLangThrowable_withNSString_withNSObjectArray_(JavaLangThrowable *targetException, NSString *methodName, IOSObjectArray *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT NSString *OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_joinWithNSString_withNSObjectArray_(NSString *delimiter, IOSObjectArray *params);

FOUNDATION_EXPORT NSString *OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_joinWithNSString_withJavaUtilCollection_(NSString *delimiter, id<JavaUtilCollection> values);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesInternalParameterizedAssertionError)

#endif // _OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_H_
