//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../../joogar/src/main/java/net/skoumal/joogar/shared/util/JoogarConfig.java
//

#ifndef _JoogarConfig_H_
#define _JoogarConfig_H_

#include "J2ObjC_header.h"

@class IOSClass;
@protocol JavaUtilList;
@protocol JavaUtilMap;

@interface JavaJoogarConfig : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)clearCache;

+ (id<JavaUtilList>)getFieldsWithIOSClass:(IOSClass *)clazz;

+ (void)setFieldsWithIOSClass:(IOSClass *)clazz
             withJavaUtilList:(id<JavaUtilList>)fieldz;

@end

J2OBJC_STATIC_INIT(JavaJoogarConfig)

FOUNDATION_EXPORT id<JavaUtilMap> JavaJoogarConfig_fields_;
J2OBJC_STATIC_FIELD_GETTER(JavaJoogarConfig, fields_, id<JavaUtilMap>)
J2OBJC_STATIC_FIELD_SETTER(JavaJoogarConfig, fields_, id<JavaUtilMap>)

FOUNDATION_EXPORT void JavaJoogarConfig_setFieldsWithIOSClass_withJavaUtilList_(IOSClass *clazz, id<JavaUtilList> fieldz);

FOUNDATION_EXPORT id<JavaUtilList> JavaJoogarConfig_getFieldsWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT void JavaJoogarConfig_clearCache();

FOUNDATION_EXPORT void JavaJoogarConfig_init(JavaJoogarConfig *self);

FOUNDATION_EXPORT JavaJoogarConfig *new_JavaJoogarConfig_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaJoogarConfig)

@compatibility_alias NetSkoumalJoogarSharedUtilJoogarConfig JavaJoogarConfig;

#endif // _JoogarConfig_H_
