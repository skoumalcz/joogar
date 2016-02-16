//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/eventbus/EventSubscriber.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonEventbusEventSubscriber_INCLUDE_ALL")
#if ComGoogleCommonEventbusEventSubscriber_RESTRICT
#define ComGoogleCommonEventbusEventSubscriber_INCLUDE_ALL 0
#else
#define ComGoogleCommonEventbusEventSubscriber_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonEventbusEventSubscriber_RESTRICT

#if !defined (_ComGoogleCommonEventbusEventSubscriber_) && (ComGoogleCommonEventbusEventSubscriber_INCLUDE_ALL || ComGoogleCommonEventbusEventSubscriber_INCLUDE)
#define _ComGoogleCommonEventbusEventSubscriber_

@class JavaLangReflectMethod;

@interface ComGoogleCommonEventbusEventSubscriber : NSObject

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (JavaLangReflectMethod *)getMethod;

- (id)getSubscriber;

- (void)handleEventWithId:(id)event;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithId:(id)target
 withJavaLangReflectMethod:(JavaLangReflectMethod *)method;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusEventSubscriber)

FOUNDATION_EXPORT void ComGoogleCommonEventbusEventSubscriber_initWithId_withJavaLangReflectMethod_(ComGoogleCommonEventbusEventSubscriber *self, id target, JavaLangReflectMethod *method);

FOUNDATION_EXPORT ComGoogleCommonEventbusEventSubscriber *new_ComGoogleCommonEventbusEventSubscriber_initWithId_withJavaLangReflectMethod_(id target, JavaLangReflectMethod *method) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusEventSubscriber)

#endif

#pragma pop_macro("ComGoogleCommonEventbusEventSubscriber_INCLUDE_ALL")
