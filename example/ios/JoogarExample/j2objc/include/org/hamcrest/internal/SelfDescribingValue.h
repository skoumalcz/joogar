//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/internal/SelfDescribingValue.java
//

#ifndef _OrgHamcrestInternalSelfDescribingValue_H_
#define _OrgHamcrestInternalSelfDescribingValue_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/SelfDescribing.h"

@protocol OrgHamcrestDescription;

@interface OrgHamcrestInternalSelfDescribingValue : NSObject < OrgHamcrestSelfDescribing >

#pragma mark Public

- (instancetype)initWithId:(id)value;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestInternalSelfDescribingValue)

FOUNDATION_EXPORT void OrgHamcrestInternalSelfDescribingValue_initWithId_(OrgHamcrestInternalSelfDescribingValue *self, id value);

FOUNDATION_EXPORT OrgHamcrestInternalSelfDescribingValue *new_OrgHamcrestInternalSelfDescribingValue_initWithId_(id value) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestInternalSelfDescribingValue)

#endif // _OrgHamcrestInternalSelfDescribingValue_H_