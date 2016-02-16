//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/Selection.java
//

#ifndef _AndroidTextSelection_H_
#define _AndroidTextSelection_H_

#include "J2ObjC_header.h"

@protocol AndroidTextSpannable;
@protocol JavaLangCharSequence;

/*!
 @brief Utility class for manipulating cursors and selections in CharSequences.
 A cursor is a selection where the start and end are at the same offset.
 */
@interface AndroidTextSelection : NSObject

#pragma mark Public

/*!
 @brief Move the selection edge to offset <code>index</code>.
 */
+ (void)extendSelectionWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                        withInt:(jint)index;

/*!
 @brief Return the offset of the selection edge or cursor, or -1 if
 there is no selection or cursor.
 */
+ (jint)getSelectionEndWithJavaLangCharSequence:(id<JavaLangCharSequence>)text;

/*!
 @brief Return the offset of the selection anchor or cursor, or -1 if
 there is no selection or cursor.
 */
+ (jint)getSelectionStartWithJavaLangCharSequence:(id<JavaLangCharSequence>)text;

/*!
 @brief Remove the selection or cursor, if any, from the text.
 */
+ (void)removeSelectionWithAndroidTextSpannable:(id<AndroidTextSpannable>)text;

/*!
 @brief Select the entire text.
 */
+ (void)selectAllWithAndroidTextSpannable:(id<AndroidTextSpannable>)text;

/*!
 @brief Move the cursor to offset <code>index</code>.
 */
+ (void)setSelectionWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                     withInt:(jint)index;

/*!
 @brief Set the selection anchor to <code>start</code> and the selection edge
 to <code>stop</code>.
 */
+ (void)setSelectionWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                     withInt:(jint)start
                                     withInt:(jint)stop;

@end

J2OBJC_STATIC_INIT(AndroidTextSelection)

FOUNDATION_EXPORT id AndroidTextSelection_SELECTION_START_;
J2OBJC_STATIC_FIELD_GETTER(AndroidTextSelection, SELECTION_START_, id)

FOUNDATION_EXPORT id AndroidTextSelection_SELECTION_END_;
J2OBJC_STATIC_FIELD_GETTER(AndroidTextSelection, SELECTION_END_, id)

FOUNDATION_EXPORT jint AndroidTextSelection_getSelectionStartWithJavaLangCharSequence_(id<JavaLangCharSequence> text);

FOUNDATION_EXPORT jint AndroidTextSelection_getSelectionEndWithJavaLangCharSequence_(id<JavaLangCharSequence> text);

FOUNDATION_EXPORT void AndroidTextSelection_setSelectionWithAndroidTextSpannable_withInt_withInt_(id<AndroidTextSpannable> text, jint start, jint stop);

FOUNDATION_EXPORT void AndroidTextSelection_setSelectionWithAndroidTextSpannable_withInt_(id<AndroidTextSpannable> text, jint index);

FOUNDATION_EXPORT void AndroidTextSelection_selectAllWithAndroidTextSpannable_(id<AndroidTextSpannable> text);

FOUNDATION_EXPORT void AndroidTextSelection_extendSelectionWithAndroidTextSpannable_withInt_(id<AndroidTextSpannable> text, jint index);

FOUNDATION_EXPORT void AndroidTextSelection_removeSelectionWithAndroidTextSpannable_(id<AndroidTextSpannable> text);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextSelection)

#endif // _AndroidTextSelection_H_