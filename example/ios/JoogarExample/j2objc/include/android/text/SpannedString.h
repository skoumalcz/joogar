//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/SpannedString.java
//

#ifndef _AndroidTextSpannedString_H_
#define _AndroidTextSpannedString_H_

#include "J2ObjC_header.h"
#include "android/text/GetChars.h"
#include "android/text/SpannableStringInternal.h"
#include "android/text/Spanned.h"
#include "java/lang/CharSequence.h"

/*!
 @brief This is the class for text whose content and markup are immutable.
 For mutable markup, see <code>SpannableString</code>; for mutable text,
 see <code>SpannableStringBuilder</code>.
 */
@interface AndroidTextSpannedString : AndroidTextSpannableStringInternal < JavaLangCharSequence, AndroidTextGetChars, AndroidTextSpanned >

#pragma mark Public

- (instancetype)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)source;

- (id<JavaLangCharSequence>)subSequenceFrom:(jint)start
                                         to:(jint)end;

+ (AndroidTextSpannedString *)valueOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)source;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextSpannedString)

FOUNDATION_EXPORT void AndroidTextSpannedString_initWithJavaLangCharSequence_(AndroidTextSpannedString *self, id<JavaLangCharSequence> source);

FOUNDATION_EXPORT AndroidTextSpannedString *new_AndroidTextSpannedString_initWithJavaLangCharSequence_(id<JavaLangCharSequence> source) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidTextSpannedString *AndroidTextSpannedString_valueOfWithJavaLangCharSequence_(id<JavaLangCharSequence> source);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextSpannedString)

#endif // _AndroidTextSpannedString_H_
