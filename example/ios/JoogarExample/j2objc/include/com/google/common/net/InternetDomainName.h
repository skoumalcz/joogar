//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/net/InternetDomainName.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonNetInternetDomainName_INCLUDE_ALL")
#if ComGoogleCommonNetInternetDomainName_RESTRICT
#define ComGoogleCommonNetInternetDomainName_INCLUDE_ALL 0
#else
#define ComGoogleCommonNetInternetDomainName_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonNetInternetDomainName_RESTRICT

#if !defined (_ComGoogleCommonNetInternetDomainName_) && (ComGoogleCommonNetInternetDomainName_INCLUDE_ALL || ComGoogleCommonNetInternetDomainName_INCLUDE)
#define _ComGoogleCommonNetInternetDomainName_

@class ComGoogleCommonCollectImmutableList;

@interface ComGoogleCommonNetInternetDomainName : NSObject

#pragma mark Public

- (ComGoogleCommonNetInternetDomainName *)childWithNSString:(NSString *)leftParts;

- (jboolean)isEqual:(id)object;

+ (ComGoogleCommonNetInternetDomainName *)fromWithNSString:(NSString *)domain;

- (NSUInteger)hash;

- (jboolean)hasParent;

- (jboolean)hasPublicSuffix;

- (jboolean)isPublicSuffix;

- (jboolean)isTopPrivateDomain;

- (jboolean)isUnderPublicSuffix;

+ (jboolean)isValidWithNSString:(NSString *)name;

- (ComGoogleCommonNetInternetDomainName *)parent;

- (ComGoogleCommonCollectImmutableList *)parts;

- (ComGoogleCommonNetInternetDomainName *)publicSuffix;

- (ComGoogleCommonNetInternetDomainName *)topPrivateDomain;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)name;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonNetInternetDomainName)

FOUNDATION_EXPORT void ComGoogleCommonNetInternetDomainName_initWithNSString_(ComGoogleCommonNetInternetDomainName *self, NSString *name);

FOUNDATION_EXPORT ComGoogleCommonNetInternetDomainName *new_ComGoogleCommonNetInternetDomainName_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonNetInternetDomainName *ComGoogleCommonNetInternetDomainName_fromWithNSString_(NSString *domain);

FOUNDATION_EXPORT jboolean ComGoogleCommonNetInternetDomainName_isValidWithNSString_(NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonNetInternetDomainName)

#endif

#pragma pop_macro("ComGoogleCommonNetInternetDomainName_INCLUDE_ALL")