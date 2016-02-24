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
#import "java/lang/Character.h"
#import "java/lang/Byte.h"
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
    NSString * const fieldName = [self fieldName:[gField getName]];
    // Handle class Boolean and Character, these classes are NOT subclasses of NSNumber
    IOSClass * const class = [gField getType];
    if ([class isEqual:[IOSClass booleanClass]]) {
        JavaLangBoolean *b = gValue;
        [gObject setValue:@((BOOL)[b booleanValue]) forKey:fieldName];
    } else if ([class isEqual:[IOSClass charClass]]) {
        JavaLangCharacter *c = gValue;
        [gObject setValue:@((short)[c charValue]) forKey:fieldName];
    } else {
        [gObject setValue:gValue forKey:fieldName];
    }
}

- (id)getFieldValueNativeWithId:(id)gObject withJavaLangReflectField:(JavaLangReflectField *)gField {
    id value = [gObject valueForKey:[self fieldName:[gField getName]]];
    // Handle class Boolean and Character, these classes are NOT subclasses of NSNumber
    IOSClass * const class = [gField getType];
    if ([class isEqual:[IOSClass booleanClass]]) {
        return [[JavaLangBoolean alloc] initWithBoolean:[value boolValue]];
    } else if ([class isEqual:[IOSClass charClass]]) {
        return [[JavaLangCharacter alloc] initWithChar:[value shortValue]];
    } else {
        return value;
    }
}

@end
