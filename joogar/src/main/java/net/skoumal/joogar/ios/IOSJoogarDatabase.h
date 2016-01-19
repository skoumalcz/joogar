//
//  IOSJoogarDatabase.h
//  Joogar (iOS)
//
//  Created by Marcel Kiss on 07/04/15.
//  Copyright © 2015 SKOUMAL s.r.o. All rights reserved.
//

#import <Foundation/Foundation.h>

// Import Java sources
#import "Joogar.h"
#import "JoogarDatabase.h"
#import "JoogarLogger.h"

#import "SQLiteDB.h"
#import "IOSJoogarDatabaseResult.h"

@interface IOSJoogarDatabase : JavaJoogarDatabase

#pragma mark - Class constructors

//! Create Joogar database with file name in document folder
+ (instancetype)dbWithFileName:(NSString *)fileName;
//! Create Joogar database with file path
+ (instancetype)dbWithFilePath:(NSString *)filePath;

#pragma mark - Constructors

//! Create Joogar database with file name in document folder
- (instancetype)initWithFileName:(NSString *)fileName;
//! Create Joogar database with file path
- (instancetype)initWithFilePath:(NSString *)filePath;

@end
