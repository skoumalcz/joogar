//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/util/concurrent/SerializingExecutor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentSerializingExecutor_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentSerializingExecutor_RESTRICT
#define ComGoogleCommonUtilConcurrentSerializingExecutor_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentSerializingExecutor_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentSerializingExecutor_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentSerializingExecutor_) && (ComGoogleCommonUtilConcurrentSerializingExecutor_INCLUDE_ALL || ComGoogleCommonUtilConcurrentSerializingExecutor_INCLUDE)
#define _ComGoogleCommonUtilConcurrentSerializingExecutor_

#define JavaUtilConcurrentExecutor_RESTRICT 1
#define JavaUtilConcurrentExecutor_INCLUDE 1
#include "java/util/concurrent/Executor.h"

@protocol JavaLangRunnable;

@interface ComGoogleCommonUtilConcurrentSerializingExecutor : NSObject < JavaUtilConcurrentExecutor >

#pragma mark Public

- (instancetype)initWithJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)r;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentSerializingExecutor)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentSerializingExecutor_initWithJavaUtilConcurrentExecutor_(ComGoogleCommonUtilConcurrentSerializingExecutor *self, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSerializingExecutor *new_ComGoogleCommonUtilConcurrentSerializingExecutor_initWithJavaUtilConcurrentExecutor_(id<JavaUtilConcurrentExecutor> executor) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSerializingExecutor)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentSerializingExecutor_INCLUDE_ALL")