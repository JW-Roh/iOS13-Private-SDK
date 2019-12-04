//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class UIStoryboardDecodingContext;

@interface NSCoder (UIGeometryKeyedCoding)
- (struct UIOffset)decodeUIOffsetForKey:(id)arg1;
- (struct NSDirectionalEdgeInsets)decodeDirectionalEdgeInsetsForKey:(id)arg1;
- (struct UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1;
- (struct CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1;
- (struct CGRect)decodeCGRectForKey:(id)arg1;
- (struct CGSize)decodeCGSizeForKey:(id)arg1;
- (struct CGVector)decodeCGVectorForKey:(id)arg1;
- (struct CGPoint)decodeCGPointForKey:(id)arg1;
- (void)encodeUIOffset:(struct UIOffset)arg1 forKey:(id)arg2;
- (void)encodeDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1 forKey:(id)arg2;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets)arg1 forKey:(id)arg2;
- (void)encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodeCGVector:(struct CGVector)arg1 forKey:(id)arg2;
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)_initializeClassSwapperWithCurrentDecodingViewControllerIfNeeded:(id)arg1;
- (id)_decodeObjectsAndTrackChildViewControllerIndexWithParent:(id)arg1 forKey:(id)arg2;
- (id)_decodeObjectsWithSourceSegueTemplate:(id)arg1 creator:(id /* block */)arg2 sender:(id)arg3 forKey:(id)arg4;
- (void)_createStoryboardDecodingContextIfNeeded;
@property(readonly, nonatomic) UIStoryboardDecodingContext *_storyboardDecodingContext;
- (id)_ui_decodeTextAttributesForKey:(id)arg1;
- (void)_ui_encodeTextAttributes:(id)arg1 forKey:(id)arg2;
- (_Bool)_ui_isInterprocess;
@end
