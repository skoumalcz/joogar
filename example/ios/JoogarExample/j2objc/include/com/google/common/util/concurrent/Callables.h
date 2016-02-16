//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/util/concurrent/Callables.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentCallables_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentCallables_RESTRICT
#define ComGoogleCommonUtilConcurrentCallables_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentCallables_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentCallables_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentCallables_) && (ComGoogleCommonUtilConcurrentCallables_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCallables_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCallables_

@protocol ComGoogleCommonBaseSupplier;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;

@interface ComGoogleCommonUtilConcurrentCallables : NSObject

#pragma mark Public

+ (id<JavaUtilConcurrentCallable>)returningWithId:(id)value;

#pragma mark Package-Private

+ (id<JavaUtilConcurrentCallable>)threadRenamingWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable
                                               withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)nameSupplier;

+ (id<JavaLangRunnable>)threadRenamingWithJavaLangRunnable:(id<JavaLangRunnable>)task
                           withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)nameSupplier;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCallables)

FOUNDATION_EXPORT id<JavaUtilConcurrentCallable> ComGoogleCommonUtilConcurrentCallables_returningWithId_(id value);

FOUNDATION_EXPORT id<JavaUtilConcurrentCallable> ComGoogleCommonUtilConcurrentCallables_threadRenamingWithJavaUtilConcurrentCallable_withComGoogleCommonBaseSupplier_(id<JavaUtilConcurrentCallable> callable, id<ComGoogleCommonBaseSupplier> nameSupplier);

FOUNDATION_EXPORT id<JavaLangRunnable> ComGoogleCommonUtilConcurrentCallables_threadRenamingWithJavaLangRunnable_withComGoogleCommonBaseSupplier_(id<JavaLangRunnable> task, id<ComGoogleCommonBaseSupplier> nameSupplier);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCallables)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentCallables_INCLUDE_ALL")