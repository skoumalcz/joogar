//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/cache/CacheLoader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCacheCacheLoader_INCLUDE_ALL")
#if ComGoogleCommonCacheCacheLoader_RESTRICT
#define ComGoogleCommonCacheCacheLoader_INCLUDE_ALL 0
#else
#define ComGoogleCommonCacheCacheLoader_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheCacheLoader_RESTRICT

#if !defined (_ComGoogleCommonCacheCacheLoader_) && (ComGoogleCommonCacheCacheLoader_INCLUDE_ALL || ComGoogleCommonCacheCacheLoader_INCLUDE)
#define _ComGoogleCommonCacheCacheLoader_

@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBaseSupplier;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaLangIterable;
@protocol JavaUtilConcurrentExecutor;
@protocol JavaUtilMap;

@interface ComGoogleCommonCacheCacheLoader : NSObject

#pragma mark Public

+ (ComGoogleCommonCacheCacheLoader *)asyncReloadingWithComGoogleCommonCacheCacheLoader:(ComGoogleCommonCacheCacheLoader *)loader
                                                        withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

+ (ComGoogleCommonCacheCacheLoader *)fromWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (ComGoogleCommonCacheCacheLoader *)fromWithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)supplier;

- (id)load__WithId:(id)key;

- (id<JavaUtilMap>)loadAllWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)reloadWithId:(id)key
                                                           withId:(id)oldValue;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheLoader)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheLoader_init(ComGoogleCommonCacheCacheLoader *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheLoader *ComGoogleCommonCacheCacheLoader_fromWithComGoogleCommonBaseFunction_(id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheLoader *ComGoogleCommonCacheCacheLoader_fromWithComGoogleCommonBaseSupplier_(id<ComGoogleCommonBaseSupplier> supplier);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheLoader *ComGoogleCommonCacheCacheLoader_asyncReloadingWithComGoogleCommonCacheCacheLoader_withJavaUtilConcurrentExecutor_(ComGoogleCommonCacheCacheLoader *loader, id<JavaUtilConcurrentExecutor> executor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheLoader)

#endif

#if !defined (_ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException_) && (ComGoogleCommonCacheCacheLoader_INCLUDE_ALL || ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException_INCLUDE)
#define _ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException_

#define JavaLangUnsupportedOperationException_RESTRICT 1
#define JavaLangUnsupportedOperationException_INCLUDE 1
#include "java/lang/UnsupportedOperationException.h"

@interface ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException : JavaLangUnsupportedOperationException

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException_init(ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException *new_ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException)

#endif

#if !defined (_ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException_) && (ComGoogleCommonCacheCacheLoader_INCLUDE_ALL || ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException_INCLUDE)
#define _ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException_

#define JavaLangRuntimeException_RESTRICT 1
#define JavaLangRuntimeException_INCLUDE 1
#include "java/lang/RuntimeException.h"

@interface ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException_initWithNSString_(ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException *self, NSString *message);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException *new_ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException)

#endif

#pragma pop_macro("ComGoogleCommonCacheCacheLoader_INCLUDE_ALL")