//
//  IOSJoogarLogger.h
//  Joogar (iOS)
//
//  Created by Marcel Kiss on 09.04.2015
//  Copyright © 2015 SKOUMAL s.r.o. All rights reserved.
//

#import <Foundation/Foundation.h>

// Import Java sources
#import "JoogarLogger.h"

@interface IOSJoogarLogger : NSObject <JavaJoogarLogger>

/**
 * Prints error message
 * @param gMsg message
 */
- (void)eWithNSString:(NSString *)gMsg;

/**
 * Prints warning message
 * @param gMsg message
 */
- (void)wWithNSString:(NSString *)gMsg;

/**
 * Prints info message
 * @param gMsg message
 */
- (void)iWithNSString:(NSString *)gMsg;

/**
 * Prints debug message
 * @param gMsg message
 */
- (void)dWithNSString:(NSString *)gMsg;

@end
