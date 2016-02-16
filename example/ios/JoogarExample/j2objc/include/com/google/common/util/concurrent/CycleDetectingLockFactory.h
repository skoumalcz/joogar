//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/util/concurrent/CycleDetectingLockFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_RESTRICT
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_RESTRICT
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering;
@class IOSClass;
@class JavaUtilConcurrentLocksReentrantLock;
@class JavaUtilConcurrentLocksReentrantReadWriteLock;
@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy;
@protocol JavaUtilMap;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory : NSObject {
 @public
  id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy_;
}

#pragma mark Public

+ (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory *)newInstanceWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *)newInstanceWithExplicitOrderingWithIOSClass:(IOSClass *)enumClass
                                                           withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithNSString:(NSString *)lockName OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithNSString:(NSString *)lockName
                                                           withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithNSString:(NSString *)lockName OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithNSString:(NSString *)lockName
                                                                             withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

+ (id<JavaUtilMap>)createNodesWithIOSClass:(IOSClass *)clazz;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory)

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory, policy_, id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_newInstanceWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_newInstanceWithExplicitOrderingWithIOSClass_withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_(IOSClass *enumClass, id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy);

FOUNDATION_EXPORT id<JavaUtilMap> ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_createNodesWithIOSClass_(IOSClass *clazz);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException;

@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy < NSObject, JavaObject >

- (void)handlePotentialDeadlockWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException *)exception;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

typedef NS_ENUM(NSUInteger, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies) {
  ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_THROW = 0,
  ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_WARN = 1,
  ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_DISABLED = 2,
};

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum : JavaLangEnum < NSCopying, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy >

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values();

+ (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values_[];

#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_THROW ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values_[ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_THROW]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum, THROW)

#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_WARN ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values_[ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_WARN]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum, WARN)

#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_DISABLED ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values_[ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_DISABLED]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum, DISABLED)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_

@class JavaLangEnum;
@class JavaUtilConcurrentLocksReentrantLock;
@class JavaUtilConcurrentLocksReentrantReadWriteLock;
@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy;
@protocol JavaUtilMap;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering : ComGoogleCommonUtilConcurrentCycleDetectingLockFactory

#pragma mark Public

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithJavaLangEnum:(JavaLangEnum *)rank OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithJavaLangEnum:(JavaLangEnum *)rank
                                                               withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithJavaLangEnum:(JavaLangEnum *)rank OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithJavaLangEnum:(JavaLangEnum *)rank
                                                                                 withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy
                                                                      withJavaUtilMap:(id<JavaUtilMap>)lockGraphNodes;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_withJavaUtilMap_(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *self, id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy, id<JavaUtilMap> lockGraphNodes);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *new_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_withJavaUtilMap_(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy, id<JavaUtilMap> lockGraphNodes) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_

#define JavaLangIllegalStateException_RESTRICT 1
#define JavaLangIllegalStateException_INCLUDE 1
#include "java/lang/IllegalStateException.h"

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;
@class IOSObjectArray;
@protocol JavaUtilSet;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace : JavaLangIllegalStateException

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)node1
                    withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)node2;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_EMPTY_STACK_TRACE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace, EMPTY_STACK_TRACE_, IOSObjectArray *)

FOUNDATION_EXPORT id<JavaUtilSet> ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_EXCLUDED_CLASS_NAMES_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace, EXCLUDED_CLASS_NAMES_, id<JavaUtilSet>)
J2OBJC_STATIC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace, EXCLUDED_CLASS_NAMES_, id<JavaUtilSet>)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace *self, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *node1, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *node2);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace *new_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *node1, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *node2) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException : ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace

#pragma mark Public

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace *)getConflictingStackTrace;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;

@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock < NSObject, JavaObject >

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)getLockGraphNode;

- (jboolean)isAcquiredByCurrentThread;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_

@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy;
@protocol JavaUtilList;
@protocol JavaUtilMap;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode : NSObject {
 @public
  id<JavaUtilMap> allowedPriorLocks_;
  id<JavaUtilMap> disallowedPriorLocks_;
  NSString *lockName_;
}

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)lockName;

- (void)checkAcquiredLockWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy
                  withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)acquiredLock;

- (void)checkAcquiredLocksWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy
                                                                           withJavaUtilList:(id<JavaUtilList>)acquiredLocks;

- (NSString *)getLockName;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode)

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode, allowedPriorLocks_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode, disallowedPriorLocks_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode, lockName_, NSString *)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_initWithNSString_(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *self, NSString *lockName);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *new_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_initWithNSString_(NSString *lockName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_

#define JavaUtilConcurrentLocksReentrantLock_RESTRICT 1
#define JavaUtilConcurrentLocksReentrantLock_INCLUDE 1
#include "java/util/concurrent/locks/ReentrantLock.h"

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;
@class JavaUtilConcurrentTimeUnitEnum;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock : JavaUtilConcurrentLocksReentrantLock < ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock >

#pragma mark Public

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)getLockGraphNode;

- (jboolean)isAcquiredByCurrentThread;

- (void)lock;

- (void)lockInterruptibly;

- (jboolean)tryLock;

- (jboolean)tryLockWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)unlock;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_

#define JavaUtilConcurrentLocksReentrantReadWriteLock_RESTRICT 1
#define JavaUtilConcurrentLocksReentrantReadWriteLock_INCLUDE 1
#include "java/util/concurrent/locks/ReentrantReadWriteLock.h"

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;
@class JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock;
@class JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock : JavaUtilConcurrentLocksReentrantReadWriteLock < ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock >

#pragma mark Public

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)getLockGraphNode;

- (jboolean)isAcquiredByCurrentThread;

- (JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock *)readLock;

- (JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock *)writeLock;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL")