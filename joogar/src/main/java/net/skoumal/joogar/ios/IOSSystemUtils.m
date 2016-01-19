//
//  IOSSystemUtils.m
//  Joogar (iOS)
//
//  Created by Marcel Kiss on 15.04.2015
//  Copyright © 2015 SKOUMAL s.r.o. All rights reserved.
//

#import "IOSSystemUtils.h"

// Import translated Java files
#import "java/io/InputStream.h"
#import "java/util/LinkedList.h"

@implementation IOSSystemUtils

- (id<JavaUtilList>)getUpgradeScriptsWithNSString:(NSString *)gDbName {
    JavaUtilLinkedList *list = [[JavaUtilLinkedList alloc] init];
    return list;
}

- (JavaIoInputStream *)openUpgradeScriptWithNSString:(NSString *)gScriptName {
    return nil;
}

@end
