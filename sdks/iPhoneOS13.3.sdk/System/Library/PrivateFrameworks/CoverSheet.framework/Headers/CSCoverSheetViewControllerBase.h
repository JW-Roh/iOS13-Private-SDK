//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CoverSheet/BSDescriptionProviding-Protocol.h>
#import <CoverSheet/CSCoverSheetViewPresenting-Protocol.h>

@class CSAppearance, CSBehavior, CSPresentation, FBDisplayLayoutElement, NSArray, NSHashTable, NSSet, NSString, UIColor, _UILegibilitySettings;
@protocol CSCoverSheetViewPresenting, UICoordinateSpace;

@interface CSCoverSheetViewControllerBase : UIViewController <CSCoverSheetViewPresenting, BSDescriptionProviding>
{
    CSAppearance *_appearance;
    CSBehavior *_behavior;
    CSPresentation *_presentation;
    _UILegibilitySettings *_legibilitySettings;
    FBDisplayLayoutElement *_displayLayoutElement;
    NSHashTable *_regionProviders;
    BOOL _forcingLayoutForPresentation;
    BOOL _isBeingPresented;
    id <CSCoverSheetViewPresenting> _presenter;
}

+ (id)coverSheetIdentifier;
+ (Class)viewClass;
@property(nonatomic) __weak id <CSCoverSheetViewPresenting> presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic, getter=isPresentation) BOOL presentation; // @synthesize presentation=_isBeingPresented;
// - (void).cxx_destruct;
- (CGSize)effectiveContentSizeForScrollView:(id)arg1;
- (id)_regionsForView:(id)arg1;
- (BOOL)_presentationParticipant;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) NSUInteger restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
- (BOOL)wouldHandleButtonEvent:(id)arg1;
- (BOOL)handleEvent:(id)arg1;
@property(readonly, nonatomic) long long presentationAltitude;
@property(readonly, nonatomic) long long presentationTransition;
@property(readonly, nonatomic) long long presentationPriority;
@property(readonly, nonatomic) long long presentationType;
@property(readonly, nonatomic) long long presentationStyle;
- (id)_presenter;
- (void)handleAction:(id)arg1 fromSender:(id)arg2;
- (void)_conformsToCSCoverSheetViewPresenting;
- (void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)updateAppearanceForController:(id)arg1;
- (void)updateBehaviorForController:(id)arg1;
@property(readonly, copy, nonatomic) CSPresentation *externalPresentation;
@property(readonly, copy, nonatomic) CSBehavior *activeBehavior;
@property(readonly, copy, nonatomic) CSAppearance *activeAppearance;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (void)_rebuildDisposition;
- (BOOL)_rebuildPresentation;
- (BOOL)_rebuildBehavior;
- (BOOL)_rebuildAppearance;
- (void)_layoutIfNeededForPresentation;
- (void)configureDisplayLayoutElement:(id)arg1;
- (id)displayLayoutElementIdentifier;
- (BOOL)handleAppearanceUpdateFromController:(id)arg1 animationSettings:(inout id )arg2;
- (BOOL)handleAction:(id)arg1 fromController:(id)arg2;
- (void)performCustomTransitionToVisible:(BOOL)arg1 withAnimationSettings:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)aggregatePresentation:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)updateForPresentation:(id)arg1;
- (void)didTransitionToPresented:(BOOL)arg1;
- (void)willTransitionToPresented:(BOOL)arg1;
@property(readonly, nonatomic) UIViewController *kitPresentedViewController;
@property(readonly, nonatomic) BOOL presentationCancelsTouches;
@property(readonly, nonatomic, getter=isDisappeared) BOOL disappeared;
- (void)dismiss;
- (void)sendAction:(id)arg1;
- (void)updateBehavior:(id /* CDUnknownBlockType */)arg1;
- (void)updateAppearance:(id /* CDUnknownBlockType */)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateAppearance:(id /* CDUnknownBlockType */)arg1;
- (void)rebuildEverythingForReason:(id)arg1;
- (void)rebuildBehavior;
- (void)rebuildAppearance;
- (void)unregisterAllViews;
- (void)unregisterView:(id)arg1;
- (void)registerView:(id)arg1 forRole:(long long)arg2 options:(NSUInteger)arg3;
- (void)registerView:(id)arg1 forRole:(long long)arg2;
- (BOOL)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setDisplayLayoutElementActive:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)setDisplayLayoutElementActive:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
