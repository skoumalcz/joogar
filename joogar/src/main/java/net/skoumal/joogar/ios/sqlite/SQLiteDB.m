//
//  SQLiteDB.m
//  Joogar (iOS)
//
//  Created by Severus on 11.04.2015
//  Copyright (c) 2015 Marcel Kiss. All rights reserved.
//

#import "SQLiteDB.h"

@interface SQLiteDB () {
    // SQLite database
    sqlite3 *database;
}

//! Flag if database is opened
@property (nonatomic, assign, readwrite) BOOL isOpened;
//! Database file path
@property (nonatomic, assign, readwrite) NSString *path;
//! Statement cache
@property (nonatomic, strong) NSMutableDictionary *stmtCache;

@property (nonatomic, strong) NSRecursiveLock *lock;

@end



@implementation SQLiteDB

//! Create database with file path
+ (instancetype)databaseWithFilePath:(NSString *)filePath {
    return [[SQLiteDB alloc] initWithFilePath:filePath];
}

//! Create database with file path
- (instancetype)initWithFilePath:(NSString *)filePath {
    self = [super init];
    if (self) {
        self.lock = [[NSRecursiveLock alloc] init];
        // Save file path
        self.path = filePath;
        // Create cache
        self.stmtCache = [NSMutableDictionary new];
    }
    return self;
}

//! Open database. Returns YES if success
- (BOOL)open {
    return self.isOpened = (sqlite3_open([self.path UTF8String], &database) == SQLITE_OK);
}

//! Close database. Returns YES if success
- (BOOL)close {
    if (self.isOpened)
        // SQLite close
        return (sqlite3_close(database) == SQLITE_OK);
    return NO;
}

//! Dealloc object
- (void)dealloc {
    // Close database before dealloc
    [self close];
}

//! Compile and preprate query
- (SQLiteStatement *)prepare:(NSString *)query {
    [self.lock lock];
    // Get cache
    SQLiteStatement *statement = [self.stmtCache valueForKey:query];
    if (!statement) {
        sqlite3_stmt *stmt = nil;
        // Compile statement
        BOOL success = (sqlite3_prepare_v2(database, [query UTF8String], -1, &stmt, NULL) == SQLITE_OK);
        if (success) {
            statement = [[SQLiteStatement alloc] initWithStatement:stmt];
            // Add to cachce
            // TODO: Fix clear bindings
            //[self.stmtCache setValue:statement forKey:query];
        } else {
            // Log error
            [self logError];
        }
    } else {
        // Clear bindings
        [statement clearBindings];
    }
    [self.lock unlock];
    // Return statement
    return statement;
}

- (sqlite3_stmt *)prepareRaw:(NSString *)query {
    sqlite3_stmt *stmt = nil;
    if (!(sqlite3_prepare_v2(database, [query UTF8String], -1, &stmt, NULL) == SQLITE_OK)) {
        [self logError];
        return nil;
    }
    return stmt;
}

//! Execute query
- (int)execute:(NSString *)query {
    [self.lock lock];
    // Prepare
    SQLiteStatement *statement = [self prepare:query];
    if (!statement)
        return sqlite3_errcode(database);
    // Execute query
    BOOL result = [statement next];
    [self.lock unlock];
    return result;
}

//! Return number of changes
- (int)changes {
    return sqlite3_changes(database);
}

//! Print error message
- (void)logError {
    // Get error code
    int code = sqlite3_errcode(database);
    // Check for error code
    if (code != SQLITE_OK && code < 100) {
        // Get error message
        const char *msg = sqlite3_errmsg(database);
        // Print error message
        NSLog(@"SQLite Error (%i): %s", code, msg);
    }
}

@end
