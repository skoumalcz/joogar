//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/CoderResult.java
//

#ifndef _JavaNioCharsetCoderResult_H_
#define _JavaNioCharsetCoderResult_H_

#include "J2ObjC_header.h"

/*!
 @brief Used to indicate the result of encoding/decoding.
 There are four types of
 results:
 <ol>
 <li>UNDERFLOW indicates that all input has been processed but more input is
 required. It is represented by the unique object
 <code>CoderResult.UNDERFLOW</code>.
 <li>OVERFLOW indicates an insufficient output buffer size. It is represented
 by the unique object <code>CoderResult.OVERFLOW</code>.
 <li>A malformed-input error indicates that an unrecognizable sequence of
 input units has been encountered. Get an instance of this type of result by
 calling <code>CoderResult.malformedForLength(int)</code> with the length of
 the malformed-input.
 <li>An unmappable-character error indicates that a sequence of input units
 can not be mapped to the output charset. Get an instance of this type of
 result by calling <code>CoderResult.unmappableForLength(int)</code> with
 the input sequence size indicating the identity of the unmappable character.
 </ol>
 */
@interface JavaNioCharsetCoderResult : NSObject

#pragma mark Public

/*!
 @brief Returns true if this result represents a malformed-input error or an
 unmappable-character error.
 @return true if this is a malformed-input error or an
 unmappable-character error, otherwise false.
 */
- (jboolean)isError;

/*!
 @brief Returns true if this result represents a malformed-input error.
 @return true if this is a malformed-input error, otherwise false.
 */
- (jboolean)isMalformed;

/*!
 @brief Returns true if this result is an overflow condition.
 @return true if this is an overflow, otherwise false.
 */
- (jboolean)isOverflow;

/*!
 @brief Returns true if this result is an underflow condition.
 @return true if an underflow, otherwise false.
 */
- (jboolean)isUnderflow;

/*!
 @brief Returns true if this result represents an unmappable-character error.
 @return true if this is an unmappable-character error, otherwise false.
 */
- (jboolean)isUnmappable;

/*!
 @brief Gets the length of the erroneous input.
 The length is only meaningful to
 a malformed-input error or an unmappable character error.
 @return the length, as an integer, of this object's erroneous input.
 @throws UnsupportedOperationException
 if this result is an overflow or underflow.
 */
- (jint)length;

/*!
 @brief Gets a <code>CoderResult</code> object indicating a malformed-input
 error.
 @param length
 the length of the malformed-input.
 @return a <code>CoderResult</code> object indicating a malformed-input
 error.
 @throws IllegalArgumentException
 if <code>length</code> is non-positive.
 */
+ (JavaNioCharsetCoderResult *)malformedForLengthWithInt:(jint)length;

/*!
 @brief Throws an exception corresponding to this coder result.
 @throws BufferUnderflowException
 in case this is an underflow.
 @throws BufferOverflowException
 in case this is an overflow.
 @throws UnmappableCharacterException
 in case this is an unmappable-character error.
 @throws MalformedInputException
 in case this is a malformed-input error.
 @throws CharacterCodingException
 the default exception.
 */
- (void)throwException;

/*!
 @brief Returns a text description of this result.
 @return a text description of this result.
 */
- (NSString *)description;

/*!
 @brief Gets a <code>CoderResult</code> object indicating an unmappable
 character error.
 @param length
 the length of the input unit sequence denoting the unmappable
 character.
 @return a <code>CoderResult</code> object indicating an unmappable
 character error.
 @throws IllegalArgumentException
 if <code>length</code> is non-positive.
 */
+ (JavaNioCharsetCoderResult *)unmappableForLengthWithInt:(jint)length;

@end

J2OBJC_STATIC_INIT(JavaNioCharsetCoderResult)

FOUNDATION_EXPORT JavaNioCharsetCoderResult *JavaNioCharsetCoderResult_UNDERFLOW__;
J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetCoderResult, UNDERFLOW__, JavaNioCharsetCoderResult *)

FOUNDATION_EXPORT JavaNioCharsetCoderResult *JavaNioCharsetCoderResult_OVERFLOW__;
J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetCoderResult, OVERFLOW__, JavaNioCharsetCoderResult *)

FOUNDATION_EXPORT JavaNioCharsetCoderResult *JavaNioCharsetCoderResult_malformedForLengthWithInt_(jint length);

FOUNDATION_EXPORT JavaNioCharsetCoderResult *JavaNioCharsetCoderResult_unmappableForLengthWithInt_(jint length);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetCoderResult)

#endif // _JavaNioCharsetCoderResult_H_