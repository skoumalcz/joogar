//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../../joogar/src/main/java/net/skoumal/joogar/shared/dsl/Table.java
//

#ifndef _Table_H_
#define _Table_H_

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"

@protocol JavaTable < JavaLangAnnotationAnnotation >

@property (readonly) NSString *name;

@end

@interface JavaTable : NSObject < JavaTable > {
 @private
  NSString *name_;
}

- (instancetype)initWithName:(NSString *)name__;

+ (NSString *)nameDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTable)

J2OBJC_TYPE_LITERAL_HEADER(JavaTable)

#define NetSkoumalJoogarSharedDslTable JavaTable

#endif // _Table_H_