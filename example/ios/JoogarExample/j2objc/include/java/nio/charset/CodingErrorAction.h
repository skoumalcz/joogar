//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/CodingErrorAction.java
//

#ifndef _JavaNioCharsetCodingErrorAction_H_
#define _JavaNioCharsetCodingErrorAction_H_

#include "J2ObjC_header.h"

/*!
 @brief Used to indicate what kind of actions to take in case of encoding/decoding
 errors.
 Currently three actions are defined: <code>IGNORE</code>, <code>REPLACE</code>
 and <code>REPORT</code>.
 */
@interface JavaNioCharsetCodingErrorAction : NSObject

#pragma mark Public

/*!
 @brief Returns a text description of this action indication.
 @return a text description of this action indication.
 */
- (NSString *)description;

@end

J2OBJC_STATIC_INIT(JavaNioCharsetCodingErrorAction)

FOUNDATION_EXPORT JavaNioCharsetCodingErrorAction *JavaNioCharsetCodingErrorAction_IGNORE_;
J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetCodingErrorAction, IGNORE_, JavaNioCharsetCodingErrorAction *)

FOUNDATION_EXPORT JavaNioCharsetCodingErrorAction *JavaNioCharsetCodingErrorAction_REPLACE_;
J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetCodingErrorAction, REPLACE_, JavaNioCharsetCodingErrorAction *)

FOUNDATION_EXPORT JavaNioCharsetCodingErrorAction *JavaNioCharsetCodingErrorAction_REPORT_;
J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetCodingErrorAction, REPORT_, JavaNioCharsetCodingErrorAction *)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetCodingErrorAction)

#endif // _JavaNioCharsetCodingErrorAction_H_
