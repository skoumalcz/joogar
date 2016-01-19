//
//  IOSJoogarLogger.m
//  Joogar (iOS)
//
//  Created by Marcel Kiss on 09.04.2015
//  Copyright © 2015 SKOUMAL s.r.o. All rights reserved.
//

#import "IOSJoogarLogger.h"

@implementation IOSJoogarLogger

/**
 * Prints error message
 * @param gMsg message
 */
- (void)eWithNSString:(NSString *)gMsg {
    NSLog(@"Joogar Error: %@", gMsg);
}

/**
 * Prints warning message
 * @param gMsg message
 */
- (void)wWithNSString:(NSString *)gMsg {
    NSLog(@"Joogar Warning: %@", gMsg);
}

/**
 * Prints info message
 * @param gMsg message
 */
- (void)iWithNSString:(NSString *)gMsg {
    NSLog(@"Joogar Info: %@", gMsg);
}

/**
 * Prints debug message
 * @param gMsg message
 */
- (void)dWithNSString:(NSString *)gMsg {
    NSLog(@"Joogar Debug: %@", gMsg);
}

@end
