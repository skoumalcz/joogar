//
//  IOSJoogarObjectAbstractFactory.m
//  Joogar (iOS)
//
//  Created by Marcel Kiss on 07.04.2015
//  Copyright © 2015 SKOUMAL s.r.o. All rights reserved.
//

#import "IOSJoogarObjectFactory.h"
#import "IOSSystemUtils.h"
#import "IOSReflectionUtils.h"

// Import translated Java files
#import "java/io/File.h"

@implementation IOSJoogarObjectFactory

- (instancetype)init {
    self = [super init];
    if (self) {
        // Init
    }
    return self;
}

- (id<JavaJoogarLogger>)getLogger {
    return [[IOSJoogarLogger alloc] init];
}

- (JavaJoogarDatabase *)getDatabaseWithNSString:(NSString *)gName {
    return [[IOSJoogarDatabase alloc] initWithFileName:gName];
}

- (JavaJoogarDatabase *)getDatabaseWithJavaIoFile:(JavaIoFile *)gPath {
    return [[IOSJoogarDatabase alloc] initWithFilePath:[gPath getPath]];
}

- (id<JavaSystemUtils>)getSystemUtils {
    return [[IOSSystemUtils alloc] init];
}

- (JavaReflectionUtils *)getReflectionUtils {
    return [[IOSReflectionUtils alloc] init];
}

@end
