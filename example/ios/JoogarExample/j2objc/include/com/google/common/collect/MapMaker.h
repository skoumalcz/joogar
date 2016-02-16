//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/MapMaker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectMapMaker_INCLUDE_ALL")
#if ComGoogleCommonCollectMapMaker_RESTRICT
#define ComGoogleCommonCollectMapMaker_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectMapMaker_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectMapMaker_RESTRICT
#if ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_INCLUDE
#define ComGoogleCommonCollectMapMaker_NullConcurrentMap_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectMapMaker_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_

#define ComGoogleCommonCollectGenericMapMaker_RESTRICT 1
#define ComGoogleCommonCollectGenericMapMaker_INCLUDE 1
#include "com/google/common/collect/GenericMapMaker.h"

@class ComGoogleCommonBaseEquivalence;
@class ComGoogleCommonBaseTicker;
@class ComGoogleCommonCollectMapMakerInternalMap;
@class ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum;
@class ComGoogleCommonCollectMapMaker_RemovalCauseEnum;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonCollectMapMaker_RemovalListener;
@protocol JavaUtilConcurrentConcurrentMap;

#define ComGoogleCommonCollectMapMaker_UNSET_INT -1

@interface ComGoogleCommonCollectMapMaker : ComGoogleCommonCollectGenericMapMaker {
 @public
  jboolean useCustomMap_;
  jint initialCapacity_;
  jint concurrencyLevel_;
  jint maximumSize_;
  ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *keyStrength_;
  ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *valueStrength_;
  jlong expireAfterWriteNanos_;
  jlong expireAfterAccessNanos_;
  ComGoogleCommonCollectMapMaker_RemovalCauseEnum *nullRemovalCause_;
  ComGoogleCommonBaseEquivalence *keyEquivalence_;
  ComGoogleCommonBaseTicker *ticker_;
}

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectMapMaker *)concurrencyLevelWithInt:(jint)concurrencyLevel;

- (ComGoogleCommonCollectMapMaker *)initialCapacityWithInt:(jint)initialCapacity OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilConcurrentConcurrentMap>)makeMap;

- (ComGoogleCommonCollectMapMaker *)softValues;

- (NSString *)description;

- (ComGoogleCommonCollectMapMaker *)weakKeys;

- (ComGoogleCommonCollectMapMaker *)weakValues;

#pragma mark Package-Private

- (ComGoogleCommonCollectMapMaker *)expireAfterAccessWithLong:(jlong)duration
                           withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (ComGoogleCommonCollectMapMaker *)expireAfterWriteWithLong:(jlong)duration
                          withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jint)getConcurrencyLevel;

- (jlong)getExpireAfterAccessNanos;

- (jlong)getExpireAfterWriteNanos;

- (jint)getInitialCapacity;

- (ComGoogleCommonBaseEquivalence *)getKeyEquivalence;

- (ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *)getKeyStrength;

- (ComGoogleCommonBaseTicker *)getTicker;

- (ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *)getValueStrength;

- (ComGoogleCommonCollectMapMaker *)keyEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)equivalence;

- (id<JavaUtilConcurrentConcurrentMap>)makeComputingMapWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

- (ComGoogleCommonCollectMapMakerInternalMap *)makeCustomMap;

- (ComGoogleCommonCollectMapMaker *)maximumSizeWithInt:(jint)size;

- (ComGoogleCommonCollectGenericMapMaker *)removalListenerWithComGoogleCommonCollectMapMaker_RemovalListener:(id<ComGoogleCommonCollectMapMaker_RemovalListener>)listener;

- (ComGoogleCommonCollectMapMaker *)setKeyStrengthWithComGoogleCommonCollectMapMakerInternalMap_StrengthEnum:(ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *)strength;

- (ComGoogleCommonCollectMapMaker *)setValueStrengthWithComGoogleCommonCollectMapMakerInternalMap_StrengthEnum:(ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *)strength;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, keyStrength_, ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, valueStrength_, ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, nullRemovalCause_, ComGoogleCommonCollectMapMaker_RemovalCauseEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, keyEquivalence_, ComGoogleCommonBaseEquivalence *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, ticker_, ComGoogleCommonBaseTicker *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectMapMaker, UNSET_INT, jint)

FOUNDATION_EXPORT void ComGoogleCommonCollectMapMaker_init(ComGoogleCommonCollectMapMaker *self);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker *new_ComGoogleCommonCollectMapMaker_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker)

#endif

#if !defined (_ComGoogleCommonCollectMapMaker_RemovalListener_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_RemovalListener_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_RemovalListener_

@class ComGoogleCommonCollectMapMaker_RemovalNotification;

@protocol ComGoogleCommonCollectMapMaker_RemovalListener < NSObject, JavaObject >

- (void)onRemovalWithComGoogleCommonCollectMapMaker_RemovalNotification:(ComGoogleCommonCollectMapMaker_RemovalNotification *)notification;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_RemovalListener)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_RemovalListener)

#endif

#if !defined (_ComGoogleCommonCollectMapMaker_RemovalNotification_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_RemovalNotification_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_RemovalNotification_

#define ComGoogleCommonCollectImmutableEntry_RESTRICT 1
#define ComGoogleCommonCollectImmutableEntry_INCLUDE 1
#include "com/google/common/collect/ImmutableEntry.h"

@class ComGoogleCommonCollectMapMaker_RemovalCauseEnum;

@interface ComGoogleCommonCollectMapMaker_RemovalNotification : ComGoogleCommonCollectImmutableEntry

#pragma mark Public

- (ComGoogleCommonCollectMapMaker_RemovalCauseEnum *)getCause;

- (jboolean)wasEvicted;

#pragma mark Package-Private

- (instancetype)initWithId:(id)key
                    withId:(id)value
withComGoogleCommonCollectMapMaker_RemovalCauseEnum:(ComGoogleCommonCollectMapMaker_RemovalCauseEnum *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_RemovalNotification)

FOUNDATION_EXPORT void ComGoogleCommonCollectMapMaker_RemovalNotification_initWithId_withId_withComGoogleCommonCollectMapMaker_RemovalCauseEnum_(ComGoogleCommonCollectMapMaker_RemovalNotification *self, id key, id value, ComGoogleCommonCollectMapMaker_RemovalCauseEnum *cause);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_RemovalNotification *new_ComGoogleCommonCollectMapMaker_RemovalNotification_initWithId_withId_withComGoogleCommonCollectMapMaker_RemovalCauseEnum_(id key, id value, ComGoogleCommonCollectMapMaker_RemovalCauseEnum *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_RemovalNotification)

#endif

#if !defined (_ComGoogleCommonCollectMapMaker_RemovalCauseEnum_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_RemovalCauseEnum_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_RemovalCauseEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

typedef NS_ENUM(NSUInteger, ComGoogleCommonCollectMapMaker_RemovalCause) {
  ComGoogleCommonCollectMapMaker_RemovalCause_EXPLICIT = 0,
  ComGoogleCommonCollectMapMaker_RemovalCause_REPLACED = 1,
  ComGoogleCommonCollectMapMaker_RemovalCause_COLLECTED = 2,
  ComGoogleCommonCollectMapMaker_RemovalCause_EXPIRED = 3,
  ComGoogleCommonCollectMapMaker_RemovalCause_SIZE = 4,
};

@interface ComGoogleCommonCollectMapMaker_RemovalCauseEnum : JavaLangEnum < NSCopying >

#pragma mark Package-Private

- (jboolean)wasEvicted;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectMapMaker_RemovalCauseEnum_values();

+ (ComGoogleCommonCollectMapMaker_RemovalCauseEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_RemovalCauseEnum *ComGoogleCommonCollectMapMaker_RemovalCauseEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectMapMaker_RemovalCauseEnum)

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_RemovalCauseEnum *ComGoogleCommonCollectMapMaker_RemovalCauseEnum_values_[];

#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_EXPLICIT ComGoogleCommonCollectMapMaker_RemovalCauseEnum_values_[ComGoogleCommonCollectMapMaker_RemovalCause_EXPLICIT]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum, EXPLICIT)

#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_REPLACED ComGoogleCommonCollectMapMaker_RemovalCauseEnum_values_[ComGoogleCommonCollectMapMaker_RemovalCause_REPLACED]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum, REPLACED)

#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_COLLECTED ComGoogleCommonCollectMapMaker_RemovalCauseEnum_values_[ComGoogleCommonCollectMapMaker_RemovalCause_COLLECTED]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum, COLLECTED)

#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_EXPIRED ComGoogleCommonCollectMapMaker_RemovalCauseEnum_values_[ComGoogleCommonCollectMapMaker_RemovalCause_EXPIRED]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum, EXPIRED)

#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_SIZE ComGoogleCommonCollectMapMaker_RemovalCauseEnum_values_[ComGoogleCommonCollectMapMaker_RemovalCause_SIZE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum, SIZE)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum)

#endif

#if !defined (_ComGoogleCommonCollectMapMaker_NullConcurrentMap_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_NullConcurrentMap_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_NullConcurrentMap_

#define JavaUtilAbstractMap_RESTRICT 1
#define JavaUtilAbstractMap_INCLUDE 1
#include "java/util/AbstractMap.h"

#define JavaUtilConcurrentConcurrentMap_RESTRICT 1
#define JavaUtilConcurrentConcurrentMap_INCLUDE 1
#include "java/util/concurrent/ConcurrentMap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectMapMaker;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectMapMaker_NullConcurrentMap : JavaUtilAbstractMap < JavaUtilConcurrentConcurrentMap, JavaIoSerializable >

#pragma mark Public

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id<JavaUtilSet>)entrySet;

- (id)getWithId:(id)key;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)putIfAbsentWithId:(id)key
                 withId:(id)value;

- (id)removeWithId:(id)key;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (id)replaceWithId:(id)key
             withId:(id)value;

- (jboolean)replaceWithId:(id)key
                   withId:(id)oldValue
                   withId:(id)newValue;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)mapMaker;

- (void)notifyRemovalWithId:(id)key
                     withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_NullConcurrentMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectMapMaker_NullConcurrentMap_initWithComGoogleCommonCollectMapMaker_(ComGoogleCommonCollectMapMaker_NullConcurrentMap *self, ComGoogleCommonCollectMapMaker *mapMaker);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_NullConcurrentMap *new_ComGoogleCommonCollectMapMaker_NullConcurrentMap_initWithComGoogleCommonCollectMapMaker_(ComGoogleCommonCollectMapMaker *mapMaker) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_NullConcurrentMap)

#endif

#if !defined (_ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_

@class ComGoogleCommonCollectMapMaker;
@protocol ComGoogleCommonBaseFunction;

@interface ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap : ComGoogleCommonCollectMapMaker_NullConcurrentMap {
 @public
  id<ComGoogleCommonBaseFunction> computingFunction_;
}

#pragma mark Public

- (id)getWithId:(id)k;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)mapMaker
                       withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap, computingFunction_, id<ComGoogleCommonBaseFunction>)

FOUNDATION_EXPORT void ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap *self, ComGoogleCommonCollectMapMaker *mapMaker, id<ComGoogleCommonBaseFunction> computingFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap *new_ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMaker *mapMaker, id<ComGoogleCommonBaseFunction> computingFunction) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap)

#endif

#if !defined (_ComGoogleCommonCollectMapMaker_ComputingMapAdapter_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_ComputingMapAdapter_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_ComputingMapAdapter_

#define ComGoogleCommonCollectComputingConcurrentHashMap_RESTRICT 1
#define ComGoogleCommonCollectComputingConcurrentHashMap_INCLUDE 1
#include "com/google/common/collect/ComputingConcurrentHashMap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectMapMaker;
@protocol ComGoogleCommonBaseFunction;

@interface ComGoogleCommonCollectMapMaker_ComputingMapAdapter : ComGoogleCommonCollectComputingConcurrentHashMap < JavaIoSerializable >

#pragma mark Public

- (id)getWithId:(id)key;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)mapMaker
                       withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_ComputingMapAdapter)

FOUNDATION_EXPORT void ComGoogleCommonCollectMapMaker_ComputingMapAdapter_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMaker_ComputingMapAdapter *self, ComGoogleCommonCollectMapMaker *mapMaker, id<ComGoogleCommonBaseFunction> computingFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_ComputingMapAdapter *new_ComGoogleCommonCollectMapMaker_ComputingMapAdapter_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMaker *mapMaker, id<ComGoogleCommonBaseFunction> computingFunction) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_ComputingMapAdapter)

#endif

#pragma pop_macro("ComGoogleCommonCollectMapMaker_INCLUDE_ALL")
