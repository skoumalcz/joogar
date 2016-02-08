//
//  IOSReflectionUtils.m
//  Minos Guide
//
//  Created by Marcel Kiss on 26/10/15.
//  Copyright © 2015 SKOUMAL s.r.o. All rights reserved.
//

#import "IOSReflectionUtils.h"
#import "java/lang/reflect/Field.h"
#import "java/lang/reflect/Method.h"
#import "java/lang/Boolean.h"
#import "JavaMetadata.h"

@implementation IOSReflectionUtils

- (NSString *)fieldName:(NSString *)name {
    if ([name isEqualToString:@"id"] || [name isEqualToString:@"description"]) {
        return [name stringByAppendingString:@"__"];
    } else {
        return [name stringByAppendingString:@"_"];
    }
}

- (void)setFieldValueNativeWithId:(id)gObject withJavaLangReflectField:(JavaLangReflectField *)gField withId:(id)gValue {
    if ([gValue isKindOfClass:[JavaLangBoolean class]]) {
        JavaLangBoolean *b = gValue;
        [gObject setValue:@((BOOL)[b booleanValue]) forKey:[self fieldName:[gField getName]]];
    } else {
        [gObject setValue:gValue forKey:[self fieldName:[gField getName]]];
    }
}

- (id)getFieldValueNativeWithId:(id)gObject withJavaLangReflectField:(JavaLangReflectField *)gField {
    id value = [gObject valueForKey:[self fieldName:[gField getName]]];
    if ([gField getType] == [IOSClass booleanClass])
        return JavaLangBoolean_valueOfWithBoolean_([(NSNumber*)value integerValue] == 1 ? YES : NO);
    else
        return value;
}

@end
