//
//  SQLiteResult.h
//  Joogar (iOS)
//
//  Created by Severus on 11.04.2015
//  Copyright (c) 2015 Marcel Kiss. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>

@interface SQLiteStatement : NSObject

#pragma mark - Public interface

@property (nonatomic, strong, readonly) NSArray *columns;
@property (nonatomic, assign, readonly) NSUInteger position;
@property (nonatomic, assign, readonly) BOOL hasNext;
@property (nonatomic, assign, readonly) sqlite3_stmt *stmt;

#pragma mark - Instance methods

+ (instancetype)newWithStatement:(sqlite3_stmt *)stmt;
- (instancetype)initWithStatement:(sqlite3_stmt *)stmt;

- (BOOL)next;
- (void)close;

- (NSInteger)indexOfColumn:(NSString *)columnName;

- (BOOL)isNull:(NSInteger)index;
- (int)intValue:(NSInteger)index;
- (int64_t)longValue:(NSInteger)index;
- (double)doubleValue:(NSInteger)index;
- (float)floatValue:(NSInteger)index;
- (NSData *)rawData:(NSInteger)index;
- (NSString *)stringValue:(NSInteger)index;

- (BOOL)bindNull:(NSInteger)index;
- (BOOL)bindInt:(int)i at:(NSInteger)index;
- (BOOL)bindLong:(int64_t)l at:(NSInteger)index;
- (BOOL)bindDouble:(double)d at:(NSInteger)index;
- (BOOL)bindFloat:(float)f at:(NSInteger)index;
- (BOOL)bindRawData:(NSData *)data at:(NSInteger)index;
- (BOOL)bindText:(NSString *)text at:(NSInteger)index;

- (void)clearBindings;

#pragma mark - Class methods

+ (BOOL)step:(sqlite3_stmt *)stmt;
+ (BOOL)finalize:(sqlite3_stmt *)stmt;

+ (NSInteger)columnCount:(sqlite3_stmt *)stmt;
+ (NSString *)columnName:(sqlite3_stmt *)stmt atIndex:(NSInteger)index;

+ (NSString *)stringValue:(sqlite3_stmt *)stmt atIndex:(NSInteger)index;
+ (int)intValue:(sqlite3_stmt *)stmt atIndex:(NSInteger)index;
+ (int64_t)longValue:(sqlite3_stmt *)stmt atIndex:(NSInteger)index;
+ (double)doubleValue:(sqlite3_stmt *)stmt atIndex:(NSInteger)index;
+ (float)floatValue:(sqlite3_stmt *)stmt atIndex:(NSInteger)index;
+ (NSData *)rawData:(sqlite3_stmt *)stmt atIndex:(NSInteger)index;
+ (BOOL)isNull:(sqlite3_stmt *)stmt atIndex:(NSInteger)index;

+ (BOOL)bindNull:(sqlite3_stmt *)stmt at:(NSInteger)index;
+ (BOOL)bindInt:(sqlite3_stmt *)stmt value:(int)i at:(NSInteger)index;
+ (BOOL)bindLong:(sqlite3_stmt *)stmt value:(int64_t)l at:(NSInteger)index;
+ (BOOL)bindDouble:(sqlite3_stmt *)stmt value:(double)d at:(NSInteger)index;
+ (BOOL)bindFloat:(sqlite3_stmt *)stmt value:(float)f at:(NSInteger)index;
+ (BOOL)bindRawData:(sqlite3_stmt *)stmt value:(NSData *)data at:(NSInteger)index;
+ (BOOL)bindText:(sqlite3_stmt *)stmt value:(NSString *)text at:(NSInteger)index;


@end
