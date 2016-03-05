//
//  IOSJoogarDatabaseResult.m
//  Joogar (iOS)
//
//  Created by Marcel Kiss on 08.04.2015
//  Copyright © 2015 SKOUMAL s.r.o. All rights reserved.
//

#import "IOSJoogarDatabaseResult.h"

#import "IOSPrimitiveArray.h"
#import "SQLiteDB.h"

@interface IOSJoogarDatabaseResult ()

#pragma mark - Private interface

@end


@implementation IOSJoogarDatabaseResult

#pragma mark - Java interface

- (jboolean)next {
    return [super next];
}

- (void)close {
    [super close];
}

- (jint)count {
    return -1;
}

- (jint)getColumnIndexWithNSString:(NSString *)colName {
    return (jint)[self indexOfColumn:colName];
}

- (jint)getIntWithInt:(jint)columnIndex {
    return [self intValue:columnIndex];
}

- (jlong)getLongWithInt:(jint)columnIndex {
    return [self longValue:columnIndex];
}

- (jfloat)getFloatWithInt:(jint)columnIndex {
    return [self floatValue:columnIndex];
}

- (jdouble)getDoubleWithInt:(jint)columnIndex {
    return [self doubleValue:columnIndex];
}

- (jboolean)isNullWithInt:(jint)columnIndex {
    return [self isNull:columnIndex];
}

- (NSString *)getStringWithInt:(jint)columnIndex {
    return [self stringValue:columnIndex];
}

- (IOSByteArray *)getBlobWithInt:(jint)columnIndex {
    NSData *data = [self rawData:columnIndex];
    return [IOSByteArray newArrayWithBytes:[data bytes] count:[data length]];
}

- (jint)getPosition {
    return (jint)[self position];
}

- (void)setPositionWithInt:(jint)position {
    //NSAssert(NO, @"Can't set position");
}

- (jboolean)allowsRandomAccess {
    return NO;
}

@end
