//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ByFunctionOrdering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectByFunctionOrdering_INCLUDE_ALL")
#if ComGoogleCommonCollectByFunctionOrdering_RESTRICT
#define ComGoogleCommonCollectByFunctionOrdering_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectByFunctionOrdering_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectByFunctionOrdering_RESTRICT

#if !defined (_ComGoogleCommonCollectByFunctionOrdering_) && (ComGoogleCommonCollectByFunctionOrdering_INCLUDE_ALL || ComGoogleCommonCollectByFunctionOrdering_INCLUDE)
#define _ComGoogleCommonCollectByFunctionOrdering_

#define ComGoogleCommonCollectOrdering_RESTRICT 1
#define ComGoogleCommonCollectOrdering_INCLUDE 1
#include "com/google/common/collect/Ordering.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@protocol ComGoogleCommonBaseFunction;

@interface ComGoogleCommonCollectByFunctionOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
 @public
  id<ComGoogleCommonBaseFunction> function_;
  ComGoogleCommonCollectOrdering *ordering_;
}

#pragma mark Public

- (jint)compareWithId:(id)left
               withId:(id)right;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function
                 withComGoogleCommonCollectOrdering:(ComGoogleCommonCollectOrdering *)ordering;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectByFunctionOrdering)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectByFunctionOrdering, function_, id<ComGoogleCommonBaseFunction>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectByFunctionOrdering, ordering_, ComGoogleCommonCollectOrdering *)

FOUNDATION_EXPORT void ComGoogleCommonCollectByFunctionOrdering_initWithComGoogleCommonBaseFunction_withComGoogleCommonCollectOrdering_(ComGoogleCommonCollectByFunctionOrdering *self, id<ComGoogleCommonBaseFunction> function, ComGoogleCommonCollectOrdering *ordering);

FOUNDATION_EXPORT ComGoogleCommonCollectByFunctionOrdering *new_ComGoogleCommonCollectByFunctionOrdering_initWithComGoogleCommonBaseFunction_withComGoogleCommonCollectOrdering_(id<ComGoogleCommonBaseFunction> function, ComGoogleCommonCollectOrdering *ordering) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectByFunctionOrdering)

#endif

#pragma pop_macro("ComGoogleCommonCollectByFunctionOrdering_INCLUDE_ALL")
