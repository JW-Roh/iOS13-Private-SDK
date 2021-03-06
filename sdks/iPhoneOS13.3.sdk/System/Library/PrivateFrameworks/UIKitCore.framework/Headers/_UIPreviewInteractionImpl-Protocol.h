//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIPreviewInteraction, UIView;
@protocol UICoordinateSpace, UIPreviewInteractionDelegate, _UIPreviewInteractionTouchForceProviding;

@protocol _UIPreviewInteractionImpl <NSObject>
@property(nonatomic) __weak UIPreviewInteraction *previewInteraction;
@property(retain, nonatomic) id <_UIPreviewInteractionTouchForceProviding> touchForceProvider;
@property(readonly, nonatomic) __weak UIView *view;
@property(nonatomic) __weak id <UIPreviewInteractionDelegate> delegate;
- (void)_startPreviewAtLocation:(CGPoint)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (void)cancelInteraction;
- (CGPoint)locationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (id)initWithView:(UIView *)arg1 previewInteraction:(UIPreviewInteraction *)arg2;
@end

