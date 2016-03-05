//
//  SQLiteDB.h
//  Joogar (iOS)
//
//  Created by Severus on 11.04.2015
//  Copyright (c) 2015 Marcel Kiss. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>

#import "SQLiteStatement.h"

@interface SQLiteDB : NSObject

//! Flag if database is opened
@property (nonatomic, assign, readonly) BOOL isOpen;
//! Database file path
@property (nonatomic, assign, readonly) NSString *path;

//! Create database with file path
+ (instancetype)databaseWithFilePath:(NSString *)filePath;

//! Create database with file path
- (instancetype)initWithFilePath:(NSString *)filePath;

//! Used to lock access to DB to one thread
+ (void)lock;
+ (void)unlock;

//! Open database
- (BOOL)open;
//! Close database
- (BOOL)close;
//! Compile and preprate query
- (SQLiteStatement *)prepare:(NSString *)query;
- (sqlite3_stmt *)prepareRaw:(NSString *)query;
//! Execute query
- (int)execute:(NSString *)query;
//! Return number of changes
- (int)changes;
//! Print error message
- (void)logError;

@end