//
//  IOSJoogarDatabaseResult.h
//  Joogar (iOS)
//
//  Created by Marcel Kiss on 08.04.2015
//  Copyright © 2015 SKOUMAL s.r.o. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SQLiteStatement.h"

// Import Java sources
#import "JoogarDatabaseResult.h"

@interface IOSJoogarDatabaseResult : SQLiteStatement <JavaJoogarDatabaseResult>


@end
