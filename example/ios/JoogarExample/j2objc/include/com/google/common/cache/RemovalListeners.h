//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/cache/RemovalListeners.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCacheRemovalListeners_INCLUDE_ALL")
#if ComGoogleCommonCacheRemovalListeners_RESTRICT
#define ComGoogleCommonCacheRemovalListeners_INCLUDE_ALL 0
#else
#define ComGoogleCommonCacheRemovalListeners_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheRemovalListeners_RESTRICT

#if !defined (_ComGoogleCommonCacheRemovalListeners_) && (ComGoogleCommonCacheRemovalListeners_INCLUDE_ALL || ComGoogleCommonCacheRemovalListeners_INCLUDE)
#define _ComGoogleCommonCacheRemovalListeners_

@protocol ComGoogleCommonCacheRemovalListener;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonCacheRemovalListeners : NSObject

#pragma mark Public

+ (id<ComGoogleCommonCacheRemovalListener>)asynchronousWithComGoogleCommonCacheRemovalListener:(id<ComGoogleCommonCacheRemovalListener>)listener
                                                                withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheRemovalListeners)

FOUNDATION_EXPORT id<ComGoogleCommonCacheRemovalListener> ComGoogleCommonCacheRemovalListeners_asynchronousWithComGoogleCommonCacheRemovalListener_withJavaUtilConcurrentExecutor_(id<ComGoogleCommonCacheRemovalListener> listener, id<JavaUtilConcurrentExecutor> executor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheRemovalListeners)

#endif

#pragma pop_macro("ComGoogleCommonCacheRemovalListeners_INCLUDE_ALL")
