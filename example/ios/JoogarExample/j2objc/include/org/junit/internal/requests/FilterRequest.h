//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/internal/requests/FilterRequest.java
//

#ifndef _OrgJunitInternalRequestsFilterRequest_H_
#define _OrgJunitInternalRequestsFilterRequest_H_

#include "J2ObjC_header.h"
#include "org/junit/runner/Request.h"

@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerRunner;

@interface OrgJunitInternalRequestsFilterRequest : OrgJunitRunnerRequest

#pragma mark Public

- (instancetype)initWithOrgJunitRunnerRequest:(OrgJunitRunnerRequest *)classRequest
         withOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (OrgJunitRunnerRunner *)getRunner;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRequestsFilterRequest)

FOUNDATION_EXPORT void OrgJunitInternalRequestsFilterRequest_initWithOrgJunitRunnerRequest_withOrgJunitRunnerManipulationFilter_(OrgJunitInternalRequestsFilterRequest *self, OrgJunitRunnerRequest *classRequest, OrgJunitRunnerManipulationFilter *filter);

FOUNDATION_EXPORT OrgJunitInternalRequestsFilterRequest *new_OrgJunitInternalRequestsFilterRequest_initWithOrgJunitRunnerRequest_withOrgJunitRunnerManipulationFilter_(OrgJunitRunnerRequest *classRequest, OrgJunitRunnerManipulationFilter *filter) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRequestsFilterRequest)

#endif // _OrgJunitInternalRequestsFilterRequest_H_