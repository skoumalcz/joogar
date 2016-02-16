//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/FilteredEntryMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectFilteredEntryMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectFilteredEntryMultimap_RESTRICT
#define ComGoogleCommonCollectFilteredEntryMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectFilteredEntryMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectFilteredEntryMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectFilteredEntryMultimap_) && (ComGoogleCommonCollectFilteredEntryMultimap_INCLUDE_ALL || ComGoogleCommonCollectFilteredEntryMultimap_INCLUDE)
#define _ComGoogleCommonCollectFilteredEntryMultimap_

#define ComGoogleCommonCollectAbstractMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractMultimap.h"

#define ComGoogleCommonCollectFilteredMultimap_RESTRICT 1
#define ComGoogleCommonCollectFilteredMultimap_INCLUDE 1
#include "com/google/common/collect/FilteredMultimap.h"

@protocol ComGoogleCommonBasePredicate;
@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectFilteredEntryMultimap : ComGoogleCommonCollectAbstractMultimap < ComGoogleCommonCollectFilteredMultimap > {
 @public
  id<ComGoogleCommonCollectMultimap> unfiltered_;
  id<ComGoogleCommonBasePredicate> predicate_;
}

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (id<ComGoogleCommonBasePredicate>)entryPredicate;

- (id<JavaUtilCollection>)getWithId:(id)key;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilCollection>)removeAllWithId:(id)key;

- (jint)size;

- (id<ComGoogleCommonCollectMultimap>)unfiltered;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)unfiltered
                      withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (id<JavaUtilMap>)createAsMap;

- (id<JavaUtilCollection>)createEntries;

- (id<ComGoogleCommonCollectMultiset>)createKeys;

- (id<JavaUtilCollection>)createValues;

- (id<JavaUtilIterator>)entryIterator;

+ (id<JavaUtilCollection>)filterCollectionWithJavaUtilCollection:(id<JavaUtilCollection>)collection
                                withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (jboolean)removeEntriesIfWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (id<JavaUtilCollection>)unmodifiableEmptyCollection;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredEntryMultimap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectFilteredEntryMultimap, unfiltered_, id<ComGoogleCommonCollectMultimap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectFilteredEntryMultimap, predicate_, id<ComGoogleCommonBasePredicate>)

FOUNDATION_EXPORT void ComGoogleCommonCollectFilteredEntryMultimap_initWithComGoogleCommonCollectMultimap_withComGoogleCommonBasePredicate_(ComGoogleCommonCollectFilteredEntryMultimap *self, id<ComGoogleCommonCollectMultimap> unfiltered, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredEntryMultimap *new_ComGoogleCommonCollectFilteredEntryMultimap_initWithComGoogleCommonCollectMultimap_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectMultimap> unfiltered, id<ComGoogleCommonBasePredicate> predicate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<JavaUtilCollection> ComGoogleCommonCollectFilteredEntryMultimap_filterCollectionWithJavaUtilCollection_withComGoogleCommonBasePredicate_(id<JavaUtilCollection> collection, id<ComGoogleCommonBasePredicate> predicate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredEntryMultimap)

#endif

#if !defined (_ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate_) && (ComGoogleCommonCollectFilteredEntryMultimap_INCLUDE_ALL || ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate_INCLUDE)
#define _ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate_

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"

@class ComGoogleCommonCollectFilteredEntryMultimap;

@interface ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate : NSObject < ComGoogleCommonBasePredicate >

#pragma mark Public

- (jboolean)applyWithId:(id)value;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectFilteredEntryMultimap:(ComGoogleCommonCollectFilteredEntryMultimap *)outer$
                                                             withId:(id)key;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate)

FOUNDATION_EXPORT void ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate_initWithComGoogleCommonCollectFilteredEntryMultimap_withId_(ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate *self, ComGoogleCommonCollectFilteredEntryMultimap *outer$, id key);

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate *new_ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate_initWithComGoogleCommonCollectFilteredEntryMultimap_withId_(ComGoogleCommonCollectFilteredEntryMultimap *outer$, id key) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate)

#endif

#if !defined (_ComGoogleCommonCollectFilteredEntryMultimap_AsMap_) && (ComGoogleCommonCollectFilteredEntryMultimap_INCLUDE_ALL || ComGoogleCommonCollectFilteredEntryMultimap_AsMap_INCLUDE)
#define _ComGoogleCommonCollectFilteredEntryMultimap_AsMap_

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_ImprovedAbstractMap_INCLUDE 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectFilteredEntryMultimap;
@protocol JavaUtilCollection;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectFilteredEntryMultimap_AsMap : ComGoogleCommonCollectMaps_ImprovedAbstractMap

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (id<JavaUtilCollection>)getWithId:(id)key;

- (id<JavaUtilCollection>)removeWithId:(id)key;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectFilteredEntryMultimap:(ComGoogleCommonCollectFilteredEntryMultimap *)outer$;

- (id<JavaUtilSet>)createEntrySet;

- (id<JavaUtilSet>)createKeySet;

- (id<JavaUtilCollection>)createValues;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredEntryMultimap_AsMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectFilteredEntryMultimap_AsMap_initWithComGoogleCommonCollectFilteredEntryMultimap_(ComGoogleCommonCollectFilteredEntryMultimap_AsMap *self, ComGoogleCommonCollectFilteredEntryMultimap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredEntryMultimap_AsMap *new_ComGoogleCommonCollectFilteredEntryMultimap_AsMap_initWithComGoogleCommonCollectFilteredEntryMultimap_(ComGoogleCommonCollectFilteredEntryMultimap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredEntryMultimap_AsMap)

#endif

#if !defined (_ComGoogleCommonCollectFilteredEntryMultimap_Keys_) && (ComGoogleCommonCollectFilteredEntryMultimap_INCLUDE_ALL || ComGoogleCommonCollectFilteredEntryMultimap_Keys_INCLUDE)
#define _ComGoogleCommonCollectFilteredEntryMultimap_Keys_

#define ComGoogleCommonCollectMultimaps_RESTRICT 1
#define ComGoogleCommonCollectMultimaps_Keys_INCLUDE 1
#include "com/google/common/collect/Multimaps.h"

@class ComGoogleCommonCollectFilteredEntryMultimap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectFilteredEntryMultimap_Keys : ComGoogleCommonCollectMultimaps_Keys

#pragma mark Public

- (id<JavaUtilSet>)entrySet;

- (jint)removeWithId:(id)key
             withInt:(jint)occurrences;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectFilteredEntryMultimap:(ComGoogleCommonCollectFilteredEntryMultimap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredEntryMultimap_Keys)

FOUNDATION_EXPORT void ComGoogleCommonCollectFilteredEntryMultimap_Keys_initWithComGoogleCommonCollectFilteredEntryMultimap_(ComGoogleCommonCollectFilteredEntryMultimap_Keys *self, ComGoogleCommonCollectFilteredEntryMultimap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredEntryMultimap_Keys *new_ComGoogleCommonCollectFilteredEntryMultimap_Keys_initWithComGoogleCommonCollectFilteredEntryMultimap_(ComGoogleCommonCollectFilteredEntryMultimap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredEntryMultimap_Keys)

#endif

#pragma pop_macro("ComGoogleCommonCollectFilteredEntryMultimap_INCLUDE_ALL")
