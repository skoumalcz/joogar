//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/AnswersValidator.java
//

#ifndef _OrgMockitoInternalStubbingAnswersAnswersValidator_H_
#define _OrgMockitoInternalStubbingAnswersAnswersValidator_H_

#include "J2ObjC_header.h"

@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoStubbingAnswer;

@interface OrgMockitoInternalStubbingAnswersAnswersValidator : NSObject

#pragma mark Public

- (instancetype)init;

- (void)validateWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer
          withOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersAnswersValidator)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingAnswersAnswersValidator_init(OrgMockitoInternalStubbingAnswersAnswersValidator *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersAnswersValidator *new_OrgMockitoInternalStubbingAnswersAnswersValidator_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersAnswersValidator)

#endif // _OrgMockitoInternalStubbingAnswersAnswersValidator_H_
