//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/base/FunctionalEquivalence.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonBaseFunctionalEquivalence_INCLUDE_ALL")
#if ComGoogleCommonBaseFunctionalEquivalence_RESTRICT
#define ComGoogleCommonBaseFunctionalEquivalence_INCLUDE_ALL 0
#else
#define ComGoogleCommonBaseFunctionalEquivalence_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseFunctionalEquivalence_RESTRICT

#if !defined (_ComGoogleCommonBaseFunctionalEquivalence_) && (ComGoogleCommonBaseFunctionalEquivalence_INCLUDE_ALL || ComGoogleCommonBaseFunctionalEquivalence_INCLUDE)
#define _ComGoogleCommonBaseFunctionalEquivalence_

#define ComGoogleCommonBaseEquivalence_RESTRICT 1
#define ComGoogleCommonBaseEquivalence_INCLUDE 1
#include "com/google/common/base/Equivalence.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@protocol ComGoogleCommonBaseFunction;

@interface ComGoogleCommonBaseFunctionalEquivalence : ComGoogleCommonBaseEquivalence < JavaIoSerializable >

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)doEquivalentWithId:(id)a
                        withId:(id)b;

- (jint)doHashWithId:(id)a;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function
                 withComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)resultEquivalence;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFunctionalEquivalence)

FOUNDATION_EXPORT void ComGoogleCommonBaseFunctionalEquivalence_initWithComGoogleCommonBaseFunction_withComGoogleCommonBaseEquivalence_(ComGoogleCommonBaseFunctionalEquivalence *self, id<ComGoogleCommonBaseFunction> function, ComGoogleCommonBaseEquivalence *resultEquivalence);

FOUNDATION_EXPORT ComGoogleCommonBaseFunctionalEquivalence *new_ComGoogleCommonBaseFunctionalEquivalence_initWithComGoogleCommonBaseFunction_withComGoogleCommonBaseEquivalence_(id<ComGoogleCommonBaseFunction> function, ComGoogleCommonBaseEquivalence *resultEquivalence) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFunctionalEquivalence)

#endif

#pragma pop_macro("ComGoogleCommonBaseFunctionalEquivalence_INCLUDE_ALL")
