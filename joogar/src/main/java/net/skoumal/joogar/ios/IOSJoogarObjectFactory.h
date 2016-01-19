//
//  IOSJoogarObjectAbstractFactory.h
//  Joogar (iOS)
//
//  Created by Marcel Kiss on 07.04.2015
//  Copyright © 2015 SKOUMAL s.r.o. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "IOSJoogarLogger.h"
#import "IOSJoogarDatabase.h"

// Import Java sources
#import "JoogarObjectAbstractFactory.h"

@interface IOSJoogarObjectFactory : NSObject <JavaJoogarObjectAbstractFactory>

- (id<JavaJoogarLogger>)getLogger;

- (JavaJoogarDatabase *)getDatabaseWithNSString:(NSString *)gName;

- (JavaJoogarDatabase *)getDatabaseWithJavaIoFile:(JavaIoFile *)gPath;

@end
