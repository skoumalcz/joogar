//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/MutableClassToInstanceMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectMutableClassToInstanceMap_INCLUDE_ALL")
#if ComGoogleCommonCollectMutableClassToInstanceMap_RESTRICT
#define ComGoogleCommonCollectMutableClassToInstanceMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectMutableClassToInstanceMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectMutableClassToInstanceMap_RESTRICT

#if !defined (_ComGoogleCommonCollectMutableClassToInstanceMap_) && (ComGoogleCommonCollectMutableClassToInstanceMap_INCLUDE_ALL || ComGoogleCommonCollectMutableClassToInstanceMap_INCLUDE)
#define _ComGoogleCommonCollectMutableClassToInstanceMap_

#define ComGoogleCommonCollectMapConstraints_RESTRICT 1
#define ComGoogleCommonCollectMapConstraints_ConstrainedMap_INCLUDE 1
#include "com/google/common/collect/MapConstraints.h"

#define ComGoogleCommonCollectClassToInstanceMap_RESTRICT 1
#define ComGoogleCommonCollectClassToInstanceMap_INCLUDE 1
#include "com/google/common/collect/ClassToInstanceMap.h"

@class IOSClass;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectMutableClassToInstanceMap : ComGoogleCommonCollectMapConstraints_ConstrainedMap < ComGoogleCommonCollectClassToInstanceMap >

#pragma mark Public

+ (ComGoogleCommonCollectMutableClassToInstanceMap *)create;

+ (ComGoogleCommonCollectMutableClassToInstanceMap *)createWithJavaUtilMap:(id<JavaUtilMap>)backingMap;

- (id)getInstanceWithIOSClass:(IOSClass *)type;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectMutableClassToInstanceMap)

FOUNDATION_EXPORT ComGoogleCommonCollectMutableClassToInstanceMap *ComGoogleCommonCollectMutableClassToInstanceMap_create();

FOUNDATION_EXPORT ComGoogleCommonCollectMutableClassToInstanceMap *ComGoogleCommonCollectMutableClassToInstanceMap_createWithJavaUtilMap_(id<JavaUtilMap> backingMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMutableClassToInstanceMap)

#endif

#pragma pop_macro("ComGoogleCommonCollectMutableClassToInstanceMap_INCLUDE_ALL")
