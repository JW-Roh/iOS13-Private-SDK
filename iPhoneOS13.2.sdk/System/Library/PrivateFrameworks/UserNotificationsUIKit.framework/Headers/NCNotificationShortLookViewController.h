//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationViewController.h>

#import <UserNotificationsUIKit/NCBannerPresentationTransitioningDelegateObserver-Protocol.h>
#import <UserNotificationsUIKit/NCLongLookDefaultPresentationControllerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationViewControllerObserving-Protocol.h>
#import <UserNotificationsUIKit/PLClickPresentationInteractionManagerDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLClickPresentationInteractionPresenting-Protocol.h>
#import <UserNotificationsUIKit/PLExpandedPlatterPresentationControllerDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLViewControllerAnimatorDelegate-Protocol.h>
#import <UserNotificationsUIKit/UIDragInteractionDelegate-Protocol.h>

@class NCBannerPresentationTransitionDelegate, NCNotificationLongLookViewController, NSDate, NSString, PLClickPresentationInteractionManager, UIScrollView, UITapGestureRecognizer, UIView, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface NCNotificationShortLookViewController : NCNotificationViewController <NCNotificationViewControllerObserving, PLViewControllerAnimatorDelegate, UIDragInteractionDelegate, PLClickPresentationInteractionManagerDelegate, NCBannerPresentationTransitioningDelegateObserver, PLExpandedPlatterPresentationControllerDelegate, NCLongLookDefaultPresentationControllerDelegate, PLClickPresentationInteractionPresenting>
{
    NCBannerPresentationTransitionDelegate *_bannerPresentationTransitionDelegate;
    NCNotificationLongLookViewController *_longLookNotificationViewController;
    UIView *_contextDefiningContainerView;
    UIViewController *_contextDefiningViewController;
    UITapGestureRecognizer *_tapGesture;
    NSDate *_tapBeginTime;
    id <UIViewControllerContextTransitioning> _scrollPresentationTransitionContext;
    struct CGRect _finalPresentedFrameOfViewForPreview;
    UIView *_lookViewWrapper;
    long long _trigger;
    _Bool _didScrollPresentLongLookViewController;
    PLClickPresentationInteractionManager *_clickPresentationInteractionManager;
    UIScrollView *_scrollView;
}

@property(nonatomic, getter=_didScrollPresentLongLookViewController, setter=_setDidScrollPresentLongLookViewController:) _Bool didScrollPresentLongLookViewController; // @synthesize didScrollPresentLongLookViewController=_didScrollPresentLongLookViewController;
@property(retain, nonatomic, getter=_scrollView) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)expandedPlatterPresentationControllerShouldProvideBackground:(id)arg1;
- (struct CGRect)expandedPlatterPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2;
- (struct CGRect)_frameForTransitionViewInScrollView;
- (_Bool)wantsUseableContainerBoundsForTransitionWithDelegate:(id)arg1;
- (void)notificationViewControllerDidDismiss:(id)arg1;
- (void)notificationViewControllerWillDismiss:(id)arg1;
- (void)notificationViewControllerDidPresent:(id)arg1;
- (void)notificationViewControllerWillPresent:(id)arg1;
- (void)viewControllerAnimator:(id)arg1 didEndPresentationAnimation:(_Bool)arg2 withTransitionContext:(id)arg3;
@property(readonly, nonatomic) struct CGRect finalDismissedFrameOfViewForPreview;
@property(readonly, nonatomic) struct CGRect finalPresentedFrameOfViewForPreview;
@property(readonly, nonatomic) struct CGRect initialPresentedFrameOfViewForPreview;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(readonly, nonatomic) PLClickPresentationInteractionManager *clickPresentationInteractionManager; // @synthesize clickPresentationInteractionManager=_clickPresentationInteractionManager;
@property(readonly, nonatomic) UIView *viewForPreview;
- (_Bool)clickPresentationInteractionManagerShouldAllowLongPressGesture:(id)arg1;
- (void)clickPresentationInteractionManager:(id)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2;
- (void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (void)_handlePresentedContentDismissalWithTrigger:(long long)arg1;
- (void)clickPresentationInteractionManager:(id)arg1 shouldFinishInteractionThatReachedForceThreshold:(_Bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg1;
- (void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg1;
- (_Bool)clickPresentationInteractionManager:(id)arg1 shouldBeginInteractionWithTouchAtLocation:(struct CGPoint)arg2;
- (id)containerViewForClickPresentationInteractionManager:(id)arg1;
- (id)transitioningDelegateForClickPresentationInteractionManager:(id)arg1;
- (id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;
- (id)_longLookNotificationViewController;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (id)_requiredContextIDsForDragSessionInView:(id)arg1;
- (void)_presentLongLookForScrollAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)_presentLongLookAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)_presentLongLookViaClickPresentationInteraction:(id /* block */)arg1;
- (void)_loadPresentationContainerViewIfNecessary;
- (id)_notificationShortLookViewIfLoaded;
- (void)_expandCoalescedNotificationBundle;
- (_Bool)isCoalescedNotificationBundle;
- (void)_updateShortLookShadow;
- (_Bool)_shouldUseHapticTouch;
- (void)_updateWithProvidedAuxiliaryOptionsContent;
- (unsigned long long)_maximumNumberOfTextLinesForProvidedStaticContentWithDefaultNumber:(unsigned long long)arg1 isPrimary:(_Bool)arg2 isLarge:(_Bool)arg3;
- (unsigned long long)_maximumNumberOfSecondaryLargeTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfSecondaryTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfPrimaryLargeTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfPrimaryTextLinesForProvidedStaticContent;
- (_Bool)_tryDismissingShortLookInScrollView:(id)arg1;
- (void)_handleTapOnView:(id)arg1;
- (void)_notificationViewControllerViewDidLoad;
- (void)_loadLookView;
- (void)_completeScrollPresentation;
- (void)_updateScrollViewContentSize;
- (_Bool)_shouldPadScrollViewContentSizeHeight;
- (void)_configureScrollViewIfNecessary;
- (_Bool)_isPresentingCustomContentProvidingViewController;
@property(readonly, nonatomic, getter=_presentedLongLookViewController) NCNotificationViewController *presentedLongLookViewController;
- (id)_newClickPresentationInteractionManager;
- (_Bool)_setNotificationRequest:(id)arg1;
- (void)setInteractionEnabled:(_Bool)arg1;
- (_Bool)shouldRestorePresentingShortLookOnDismiss;
- (void)expandAndPlayMedia;
- (void)presentLongLookAnimated:(_Bool)arg1 trigger:(long long)arg2 completion:(id /* block */)arg3;
- (_Bool)_canShowWhileLocked;
- (void)viewWillLayoutSubviews;
- (void)setContentReplacedWithSnapshot:(_Bool)arg1;
- (void)setHasShadow:(_Bool)arg1;
- (void)setNotificationContentViewHidden:(_Bool)arg1;
- (void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg1;
- (void)setCustomContentHomeAffordanceVisible:(_Bool)arg1;
- (_Bool)isContentExtensionVisible:(id)arg1;
- (_Bool)dismissPresentedViewControllerAndClearNotification:(_Bool)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (_Bool)didReceiveNotificationRequest:(id)arg1;
- (_Bool)isNotPresentingOrHasCommittedToDismissingCustomContentProvidingViewController;
- (_Bool)hasCommittedToPresentingCustomContentProvidingViewController;
- (void)setMaterialGroupNameBase:(id)arg1;
- (_Bool)isShortLook;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
