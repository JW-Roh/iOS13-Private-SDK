//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UIBezierPath, UIPanGestureRecognizer, UIView, UIViewSpringAnimationBehavior, _UIVelocityIntegrator;
@protocol _UIPreviewPlatterPanControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIPreviewPlatterPanController : NSObject <UIGestureRecognizerDelegate>
{
    unsigned long long _currentDetentIndex;
    double _initialYTranslation;
    UIBezierPath *_actionScrubPath;
    double _currentDistanceToActionScrubPath;
    struct CGPoint _initialLocationInsidePreview;
    _Bool _actionsViewIsVisible;
    _Bool _enabled;
    UIViewSpringAnimationBehavior *_animationBehavior;
    id <_UIPreviewPlatterPanControllerDelegate> _delegate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSArray *_detents;
    unsigned long long _initialDetentIndex;
    unsigned long long _rubberbandingEdges;
    NSArray *_accessoryViews;
    UIView *_containerView;
    UIView *_platterView;
    UIView *_actionsView;
    _UIVelocityIntegrator *_velocityIntegrator;
    struct CGPoint _originalPlatterCenter;
    struct CGPoint _originalActionsCenter;
    CDStruct_6f807b77 _menuAnchor;
}

@property(retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator; // @synthesize velocityIntegrator=_velocityIntegrator;
@property(nonatomic) __weak UIView *actionsView; // @synthesize actionsView=_actionsView;
@property(nonatomic) __weak UIView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
@property(nonatomic) unsigned long long rubberbandingEdges; // @synthesize rubberbandingEdges=_rubberbandingEdges;
@property(nonatomic) CDStruct_6f807b77 menuAnchor; // @synthesize menuAnchor=_menuAnchor;
@property(nonatomic) struct CGPoint originalActionsCenter; // @synthesize originalActionsCenter=_originalActionsCenter;
@property(nonatomic) struct CGPoint originalPlatterCenter; // @synthesize originalPlatterCenter=_originalPlatterCenter;
@property(nonatomic) unsigned long long initialDetentIndex; // @synthesize initialDetentIndex=_initialDetentIndex;
@property(retain, nonatomic) NSArray *detents; // @synthesize detents=_detents;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) __weak id <_UIPreviewPlatterPanControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updatePlatterGestureDebugUIWithGesture:(id)arg1;
- (struct CGPoint)_rubberBandedTranslationForGestureTranslation:(struct CGPoint)arg1;
- (_Bool)_initialPointInPlatterIsValid;
- (void)_animationsForAnyAttachedAccessoryViews;
- (void)_animationsForActionsStyleWithLocation:(struct CGPoint)arg1 ended:(_Bool)arg2;
- (void)_animationsForPreviewPlusActionsStyleWithTranslation:(struct CGPoint)arg1 location:(struct CGPoint)arg2;
@property(readonly, nonatomic) UIViewSpringAnimationBehavior *animationBehavior; // @synthesize animationBehavior=_animationBehavior;
- (void)_updateViewPositionsWithTranslation:(struct CGPoint)arg1 location:(struct CGPoint)arg2 ended:(_Bool)arg3 withVelocity:(_Bool)arg4;
- (double)_tearOffSpeedMultiplier;
- (_Bool)_canBeginDraggingWithTranslation:(struct CGPoint)arg1 location:(struct CGPoint)arg2;
- (id)_actionScrubPathWithInitialLocation:(struct CGPoint)arg1;
- (void)_handlePanGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (double)_dragTearOffThreshold;
- (_Bool)_canSwipeDownToDismiss;
- (int)_nearestDetentWithTranslation:(struct CGPoint)arg1;
- (double)_rangeOfMotion;
- (struct CGVector)_currentPlatterVelocity;
- (id)initWithContainerView:(id)arg1 platterView:(id)arg2 actionsView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
