//
//  SQLiteResult.m
//  Joogar (iOS)
//
//  Created by Severus on 11.04.2015
//  Copyright (c) 2015 Marcel Kiss. All rights reserved.
//

#import "SQLiteStatement.h"
#import "SQLiteDB.h"

@interface SQLiteStatement () {
    sqlite3_stmt *statement; 
}

#pragma mark - Private interface

@property (nonatomic, strong, readwrite) NSArray *columns;
@property (nonatomic, assign, readwrite) NSUInteger position;
@property (nonatomic, assign, readwrite) BOOL hasNext;

@end



@implementation SQLiteStatement

#pragma mark - Class constructors

+ (instancetype)newWithStatement:(sqlite3_stmt *)stmt {
    return [[SQLiteStatement alloc] initWithStatement:stmt];
}

#pragma mark - Instance methods

- (instancetype)initWithStatement:(sqlite3_stmt *)stmt {
    if (!stmt) return nil;
    self = [super init];
    if (self) {
        statement = stmt;
        self.position = 0;
        
        self.hasNext = YES;
        
        // Read all column names
        NSMutableArray *columns = [[NSMutableArray alloc] init];
        const NSInteger columnCount = [SQLiteStatement columnCount:statement];
        for (NSInteger index = 0; index < columnCount; index++) {
            NSString *columnName = [SQLiteStatement columnName:statement atIndex:index];
            [columns addObject:columnName];
        }
        self.columns = columns;
    }
    return self;
}

- (BOOL)next {
    if (self.hasNext) {
        self.position++;
        return self.hasNext = [SQLiteStatement step:statement];
    }
    return NO;
}

- (void)close {
    [SQLiteStatement finalize:statement];
}

- (void)clearBindings {
    // TODO: Fix this
    //sqlite3_clear_bindings(statement);
    //sqlite3_reset(statement);
}

- (sqlite3_stmt *)stmt {
    return statement;
}

- (NSInteger)indexOfColumn:(NSString *)columnName {
    for (NSInteger index = 0; index < self.columns.count; index++) {
        if ([[self.columns[index] lowercaseString] isEqualToString:[columnName lowercaseString]]) return index;
    }
    return -1;
}

- (BOOL)isNull:(NSInteger)index {
    return [SQLiteStatement isNull:statement atIndex:index];
}

- (int)intValue:(NSInteger)index {
    return [SQLiteStatement intValue:statement atIndex:index];
}

- (int64_t)longValue:(NSInteger)index {
    return [SQLiteStatement longValue:statement atIndex:index];
}

- (double)doubleValue:(NSInteger)index {
    return [SQLiteStatement doubleValue:statement atIndex:index];
}

- (float)floatValue:(NSInteger)index {
    return [SQLiteStatement floatValue:statement atIndex:index];
}

- (NSData *)rawData:(NSInteger)index {
    return [SQLiteStatement rawData:statement atIndex:index];
}

- (NSString *)stringValue:(NSInteger)index {
    return [SQLiteStatement stringValue:statement atIndex:index];
}

// Bind

- (BOOL)bindNull:(NSInteger)index {
    return [SQLiteStatement bindNull:statement at:index];
}

- (BOOL)bindInt:(int)i at:(NSInteger)index {
    return [SQLiteStatement bindInt:statement value:i at:index];
}

- (BOOL)bindLong:(int64_t)l at:(NSInteger)index {
    return [SQLiteStatement bindLong:statement value:l at:index];
}

- (BOOL)bindDouble:(double)d at:(NSInteger)index {
    return [SQLiteStatement bindDouble:statement value:d at:index];
}

- (BOOL)bindFloat:(float)f at:(NSInteger)index {
    return [SQLiteStatement bindFloat:statement value:f at:index];
}

- (BOOL)bindRawData:(NSData *)data at:(NSInteger)index {
    return [SQLiteStatement bindRawData:statement value:data at:index];
}

- (BOOL)bindText:(NSString *)text at:(NSInteger)index {
    return [SQLiteStatement bindText:statement value:text at:index];
}

#pragma mark - Class methods

+ (BOOL)step:(sqlite3_stmt *)stmt {
    return (sqlite3_step(stmt) == SQLITE_ROW);
}

+ (BOOL)finalize:(sqlite3_stmt *)stmt {
    BOOL ret = sqlite3_finalize(stmt) == SQLITE_OK;
    [[SQLiteDB databaseLock] unlock];
    return ret;
}

+ (NSInteger)columnCount:(sqlite3_stmt *)stmt {
    return sqlite3_column_count(stmt);
}

+ (NSString *)columnName:(sqlite3_stmt *)stmt atIndex:(NSInteger)index {
    char *text = (char *)sqlite3_column_name(stmt, (int)index);
    if (text) return [NSString stringWithUTF8String:text];
    return nil;
}

+ (NSString *)stringValue:(sqlite3_stmt *)stmt atIndex:(NSInteger)index {
    char *text = (char *)sqlite3_column_text(stmt, (int)index);
    if (text) return [NSString stringWithUTF8String:text];
    return nil;
}

+ (int)intValue:(sqlite3_stmt *)stmt atIndex:(NSInteger)index {
    return sqlite3_column_int(stmt, (int)index);
}

+ (int64_t)longValue:(sqlite3_stmt *)stmt atIndex:(NSInteger)index {
    return sqlite3_column_int64(stmt, (int)index);
}

+ (double)doubleValue:(sqlite3_stmt *)stmt atIndex:(NSInteger)index {
    return sqlite3_column_double(stmt, (int)index);
}

+ (float)floatValue:(sqlite3_stmt *)stmt atIndex:(NSInteger)index {
    return (float)[SQLiteStatement doubleValue:stmt atIndex:index];
}

+ (NSData *)rawData:(sqlite3_stmt *)stmt atIndex:(NSInteger)index {
    const void *bytes = sqlite3_column_blob(stmt, (int)index);
    NSInteger length = sqlite3_column_bytes(stmt, (int)index);
    if (!bytes || !length) return nil;
    return [NSData dataWithBytes:bytes length:length];
}

+ (BOOL)isNull:(sqlite3_stmt *)stmt atIndex:(NSInteger)index {
    return (sqlite3_column_type(stmt, (int)index) == SQLITE_NULL);
}

+ (BOOL)bindNull:(sqlite3_stmt *)stmt at:(NSInteger)index {
    return sqlite3_bind_null(stmt, (int)index) == SQLITE_OK;
}

+ (BOOL)bindInt:(sqlite3_stmt *)stmt value:(int)i at:(NSInteger)index {
    return sqlite3_bind_int(stmt, (int)index, i) == SQLITE_OK;
}

+ (BOOL)bindLong:(sqlite3_stmt *)stmt value:(int64_t)l at:(NSInteger)index {
    return sqlite3_bind_int64(stmt, (int)index, l) == SQLITE_OK;
}

+ (BOOL)bindDouble:(sqlite3_stmt *)stmt value:(double)d at:(NSInteger)index {
    return sqlite3_bind_double(stmt, (int)index, d) == SQLITE_OK;
}

+ (BOOL)bindFloat:(sqlite3_stmt *)stmt value:(float)f at:(NSInteger)index {
    return [SQLiteStatement bindDouble:stmt value:f at:index];
}

+ (BOOL)bindRawData:(sqlite3_stmt *)stmt value:(NSData *)data at:(NSInteger)index {
    return sqlite3_bind_blob(stmt, (int)index, [data bytes], (int)[data length], SQLITE_STATIC) == SQLITE_OK;
}

+ (BOOL)bindText:(sqlite3_stmt *)stmt value:(NSString *)text at:(NSInteger)index {
    const char* cString = [text cStringUsingEncoding:NSUTF8StringEncoding];
    return sqlite3_bind_text(stmt, (int)index, cString, (int)strlen(cString), SQLITE_STATIC) == SQLITE_OK;
}

@end
