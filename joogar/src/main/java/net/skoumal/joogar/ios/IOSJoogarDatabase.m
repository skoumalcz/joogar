//
//  IOSJoogarDatabase.m
//  Joogar (iOS)
//
//  Created by Marcel Kiss on 07.04.2015
//  Copyright © 2015 SKOUMAL s.r.o. All rights reserved.
//

#import "IOSJoogarDatabase.h"

// Import translated Java files
#import "IOSObjectArray.h"
#import "QueryBuilder.h"
#import "java/util/List.h"
#import "java/lang/Byte.h"
#import "java/lang/Character.h"
#import "java/lang/Short.h"
#import "java/lang/Integer.h"
#import "java/lang/Long.h"
#import "java/lang/Float.h"
#import "java/lang/Double.h"
#import "java/lang/Boolean.h"


#import "IOSJoogarLogger.h"

@interface IOSJoogarDatabase ()

// SQL database
@property (nonatomic, strong) SQLiteDB *database;

@end



@implementation IOSJoogarDatabase

#pragma mark - Class constructors

//! Create Joogar database with file name in document folder
+ (instancetype)dbWithFileName:(NSString *)fileName {
    return [[IOSJoogarDatabase alloc] initWithFileName:fileName];
}

//! Create Joogar database with file path
+ (instancetype)dbWithFilePath:(NSString *)filePath {
    return [[IOSJoogarDatabase alloc] initWithFilePath:filePath];
}

#pragma mark - Instance methods

//! Create Joogar database with file name in document folder
- (instancetype)initWithFileName:(NSString *)fileName {
    // Document directory path
    NSString *documentPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    // Create database file path
    NSString *dbPath = [documentPath stringByAppendingPathComponent:fileName];
    self = [self initWithFilePath:dbPath];
    if (self) {
        
    }
    return self;
}

//! Create Joogar database with file path
- (instancetype)initWithFilePath:(NSString *)filePath {
    self = [super init];
    if (self) {
        self.database = [SQLiteDB databaseWithFilePath:filePath];
        // Open database
        if (![self.database open])
            // Log warning
            NSLog(@"Joogar Warning: Can't open database");
    }
    return self;
}

#pragma mark - Java interface

- (id<JavaJoogarDatabaseResult>)rawQueryWithNSString:(NSString *)query withNSStringArray:(IOSObjectArray *)arguments {
    // Prepare statement
    sqlite3_stmt *stmt = [self.database prepareRaw:query];
    // Create result
    IOSJoogarDatabaseResult *result = [[IOSJoogarDatabaseResult alloc] initWithStatement:stmt];
    // Bind objects
    [self bindToStatement:result objects:arguments];
    // Return statement
    return result;
}

- (jint)execSQLWithNSString:(NSString *)query withNSStringArray:(IOSObjectArray *)arguments {
    // Prepare statement
    SQLiteStatement *statement = [self.database prepare:query];
    // Bind objects
    [self bindToStatement:statement objects:arguments];
    if (statement) {
        // Execute
        [statement next];
        [statement close];
        return 0;
    } else {
        // Log error
        [SQLiteDB unlock];
        [self.database logError];
        return -1;
    }
}

- (jlong)insertOrUpdateInternalWithNSString:(NSString *)gSqlStr withNSObjectArray:(IOSObjectArray *)gValue {
    // Prepare statement
    SQLiteStatement *statement = [self.database prepare:gSqlStr];
    // Bind objects
    [self bindToStatement:statement objects:gValue];
    // Execute
    [statement next];
    [statement close];
    // Return number of changes
    return [self.database changes];
}

- (void)bindToStatement:(SQLiteStatement *)statement objects:(IOSObjectArray *)arguments {
    for (NSInteger index = 1; index <= [arguments length]; index++) {
        id object = [arguments objectAtIndex:index - 1];
        
        if (object) {
            if ([object isKindOfClass:[IOSByteArray class]]) {
                IOSByteArray *array = (IOSByteArray *)object;
                NSData *data = [NSData dataWithBytes:array.buffer length:array.length];
                [statement bindRawData:data at:index];
            } else
            if ([object isKindOfClass:[JavaLangFloat class]]) {
                [statement bindFloat:[(JavaLangFloat *)object floatValue] at:index];
            } else
            if ([object isKindOfClass:[JavaLangDouble class]]) {
                [statement bindDouble:[(JavaLangDouble *)object doubleValue] at:index];
            } else
            if ([object isKindOfClass:[JavaLangLong class]]) {
                [statement bindLong:[(JavaLangLong *)object longLongValue] at:index];
            } else
            if ([object isKindOfClass:[JavaLangInteger class]]) {
                [statement bindInt:[(JavaLangInteger *)object intValue] at:index];
            } else
            if ([object isKindOfClass:[JavaLangShort class]]) {
                [statement bindInt:[(JavaLangShort *)object shortValue] at:index];
            } else
            if ([object isKindOfClass:[JavaLangCharacter class]]) {
                [statement bindInt:[(JavaLangCharacter *)object charValue] at:index];
            } else
            if ([object isKindOfClass:[JavaLangByte class]]) {
                [statement bindInt:[(JavaLangByte *)object charValue] at:index];
            } else
            if ([object isKindOfClass:[JavaLangBoolean class]]) {
                [statement bindInt:([(JavaLangBoolean *)object booleanValue] ? 1 : 0) at:index];
            } else
            if ([object isKindOfClass:[NSString class]]) {
                [statement bindText:(NSString *)object at:index];
            } else
            
            if ([object isKindOfClass:[NSNumber class]]) {
                NSNumber *number = (NSNumber *)object;
                BOOL success = NO;
                if (![number isKindOfClass:[NSDecimalNumber class]]) {
                    CFNumberRef numberRef = (__bridge CFNumberRef)number;
                    CFNumberType numberType = CFNumberGetType(numberRef);
                    
                    if (numberType == kCFNumberFloat32Type ||
                        numberType == kCFNumberFloat64Type ||
                        numberType == kCFNumberCGFloatType) {
                        double value;
                        success = CFNumberGetValue(numberRef, kCFNumberFloat64Type, &value);
                        
                        if (success) {
                            [statement bindDouble:value at:index];
                        } else {
                            NSLog(@"Bad number extraction");
                        }
                    } else {
                        SInt64 value;
                        success = CFNumberGetValue(numberRef, kCFNumberSInt64Type, &value);
                        if (success) {
                            [statement bindLong:value at:index];
                        } else {
                            NSLog(@"Bad number extraction");
                        }
                    }
                }
            } else {
                NSLog(@"Can't bind object");
            }
        } else {
            [statement bindNull:index];
        }
    }
}

@end
