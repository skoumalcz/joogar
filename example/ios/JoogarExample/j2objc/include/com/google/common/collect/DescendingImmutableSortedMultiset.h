//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/DescendingImmutableSortedMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectDescendingImmutableSortedMultiset_INCLUDE_ALL")
#if ComGoogleCommonCollectDescendingImmutableSortedMultiset_RESTRICT
#define ComGoogleCommonCollectDescendingImmutableSortedMultiset_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectDescendingImmutableSortedMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectDescendingImmutableSortedMultiset_RESTRICT

#if !defined (_ComGoogleCommonCollectDescendingImmutableSortedMultiset_) && (ComGoogleCommonCollectDescendingImmutableSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectDescendingImmutableSortedMultiset_INCLUDE)
#define _ComGoogleCommonCollectDescendingImmutableSortedMultiset_

#define ComGoogleCommonCollectImmutableSortedMultiset_RESTRICT 1
#define ComGoogleCommonCollectImmutableSortedMultiset_INCLUDE 1
#include "com/google/common/collect/ImmutableSortedMultiset.h"

@class ComGoogleCommonCollectBoundTypeEnum;
@class ComGoogleCommonCollectImmutableSortedSet;
@protocol ComGoogleCommonCollectMultiset_Entry;

@interface ComGoogleCommonCollectDescendingImmutableSortedMultiset : ComGoogleCommonCollectImmutableSortedMultiset

#pragma mark Public

- (jint)countWithId:(id)element;

- (ComGoogleCommonCollectImmutableSortedMultiset *)descendingMultiset;

- (ComGoogleCommonCollectImmutableSortedSet *)elementSet;

- (id<ComGoogleCommonCollectMultiset_Entry>)firstEntry;

- (ComGoogleCommonCollectImmutableSortedMultiset *)headMultisetWithId:(id)upperBound
                              withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

- (id<ComGoogleCommonCollectMultiset_Entry>)lastEntry;

- (jint)size;

- (ComGoogleCommonCollectImmutableSortedMultiset *)tailMultisetWithId:(id)lowerBound
                              withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableSortedMultiset:(ComGoogleCommonCollectImmutableSortedMultiset *)forward;

- (id<ComGoogleCommonCollectMultiset_Entry>)getEntryWithInt:(jint)index;

- (jboolean)isPartialView;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectDescendingImmutableSortedMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectDescendingImmutableSortedMultiset_initWithComGoogleCommonCollectImmutableSortedMultiset_(ComGoogleCommonCollectDescendingImmutableSortedMultiset *self, ComGoogleCommonCollectImmutableSortedMultiset *forward);

FOUNDATION_EXPORT ComGoogleCommonCollectDescendingImmutableSortedMultiset *new_ComGoogleCommonCollectDescendingImmutableSortedMultiset_initWithComGoogleCommonCollectImmutableSortedMultiset_(ComGoogleCommonCollectImmutableSortedMultiset *forward) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectDescendingImmutableSortedMultiset)

#endif

#pragma pop_macro("ComGoogleCommonCollectDescendingImmutableSortedMultiset_INCLUDE_ALL")
