//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/reflect/Reflection.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonReflectReflection_INCLUDE_ALL")
#if ComGoogleCommonReflectReflection_RESTRICT
#define ComGoogleCommonReflectReflection_INCLUDE_ALL 0
#else
#define ComGoogleCommonReflectReflection_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonReflectReflection_RESTRICT

#if !defined (_ComGoogleCommonReflectReflection_) && (ComGoogleCommonReflectReflection_INCLUDE_ALL || ComGoogleCommonReflectReflection_INCLUDE)
#define _ComGoogleCommonReflectReflection_

@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangReflectInvocationHandler;

@interface ComGoogleCommonReflectReflection : NSObject

#pragma mark Public

+ (NSString *)getPackageNameWithIOSClass:(IOSClass *)clazz;

+ (NSString *)getPackageNameWithNSString:(NSString *)classFullName;

+ (void)initialize__WithIOSClassArray:(IOSObjectArray *)classes OBJC_METHOD_FAMILY_NONE;

+ (id)newProxyWithIOSClass:(IOSClass *)interfaceType
withJavaLangReflectInvocationHandler:(id<JavaLangReflectInvocationHandler>)handler OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectReflection)

FOUNDATION_EXPORT NSString *ComGoogleCommonReflectReflection_getPackageNameWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT NSString *ComGoogleCommonReflectReflection_getPackageNameWithNSString_(NSString *classFullName);

FOUNDATION_EXPORT void ComGoogleCommonReflectReflection_initialize__WithIOSClassArray_(IOSObjectArray *classes);

FOUNDATION_EXPORT id ComGoogleCommonReflectReflection_newProxyWithIOSClass_withJavaLangReflectInvocationHandler_(IOSClass *interfaceType, id<JavaLangReflectInvocationHandler> handler);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectReflection)

#endif

#pragma pop_macro("ComGoogleCommonReflectReflection_INCLUDE_ALL")