//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIPreviewInteractionDelegate-Protocol.h>

@class UIPreviewInteraction, UITargetedPreview, UIViewController, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation;

@protocol UIPreviewInteractionDelegatePrivate <UIPreviewInteractionDelegate>

@optional
- (_Bool)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(UIPreviewInteraction *)arg1;
- (_UIPreviewInteractionHighlighter *)_previewInteractionHighlighterForPreviewTransition:(UIPreviewInteraction *)arg1;
- (UITargetedPreview *)_previewInteraction:(UIPreviewInteraction *)arg1 targetedPreviewForPreviewingAtLocation:(struct CGPoint)arg2;
- (_Bool)_previewInteractionShouldFinishTransitionToPreview:(UIPreviewInteraction *)arg1;
- (_UIPreviewInteractionViewControllerPresentation *)_previewInteraction:(UIPreviewInteraction *)arg1 viewControllerPresentationForPresentingViewController:(UIViewController *)arg2;
@end
