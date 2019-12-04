//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIDelayedAction, UIKBUndoControl, UIKBUndoStyling, UIStackView, UIVisualEffectView;
@protocol UIInteractiveUndoHUDActionDelegate;

__attribute__((visibility("hidden")))
@interface UIKBUndoInteractionHUD : UIView
{
    UIKBUndoControl *_leftButtonView;
    UIKBUndoControl *_rightButtonView;
    UIKBUndoControl *_aCutButtonView;
    UIKBUndoControl *_aCopyButtonView;
    UIKBUndoControl *_aPasteButtonView;
    double _optimizedHUDWidth;
    id <UIInteractiveUndoHUDActionDelegate> _actionDelegate;
    long long _mode;
    UIVisualEffectView *_backgroundEffectView;
    UIStackView *_undoItems;
    UIVisualEffectView *_shadowView;
    UIView *_containerView;
    UIView *_centerView;
    UIView *_grabber;
    NSLayoutConstraint *_grabberPositionConstraint;
    UIDelayedAction *_dismissGrabberTimer;
    long long _currentUndoElementIndex;
    UIKBUndoStyling *_style;
    double _grabberStartXLocation;
    long long _currentCheckpointCovered;
}

@property(nonatomic) long long currentCheckpointCovered; // @synthesize currentCheckpointCovered=_currentCheckpointCovered;
@property(nonatomic) double grabberStartXLocation; // @synthesize grabberStartXLocation=_grabberStartXLocation;
@property(retain, nonatomic) UIKBUndoStyling *style; // @synthesize style=_style;
@property(nonatomic) long long currentUndoElementIndex; // @synthesize currentUndoElementIndex=_currentUndoElementIndex;
@property(retain, nonatomic) UIDelayedAction *dismissGrabberTimer; // @synthesize dismissGrabberTimer=_dismissGrabberTimer;
@property(retain, nonatomic) NSLayoutConstraint *grabberPositionConstraint; // @synthesize grabberPositionConstraint=_grabberPositionConstraint;
@property(retain, nonatomic) UIView *grabber; // @synthesize grabber=_grabber;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIVisualEffectView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIStackView *undoItems; // @synthesize undoItems=_undoItems;
@property(retain, nonatomic) UIVisualEffectView *backgroundEffectView; // @synthesize backgroundEffectView=_backgroundEffectView;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <UIInteractiveUndoHUDActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) double optimizedHUDWidth; // @synthesize optimizedHUDWidth=_optimizedHUDWidth;
@property(retain, nonatomic) UIKBUndoControl *aPasteButtonView; // @synthesize aPasteButtonView=_aPasteButtonView;
@property(retain, nonatomic) UIKBUndoControl *aCopyButtonView; // @synthesize aCopyButtonView=_aCopyButtonView;
@property(retain, nonatomic) UIKBUndoControl *aCutButtonView; // @synthesize aCutButtonView=_aCutButtonView;
@property(retain, nonatomic) UIKBUndoControl *rightButtonView; // @synthesize rightButtonView=_rightButtonView;
@property(retain, nonatomic) UIKBUndoControl *leftButtonView; // @synthesize leftButtonView=_leftButtonView;
- (void)updateControlWithDirection:(long long)arg1 travelProgress:(double)arg2 isRTL:(_Bool)arg3;
- (void)controlActionUpOutside:(id)arg1;
- (void)controlActionUpInside:(id)arg1;
- (void)controlActionDown:(id)arg1;
- (void)performDelegateRedoAndUpdateHUDIfNeeded;
- (void)performDelegateUndoAndUpdateHUDIfNeeded;
- (void)layoutSubviews;
- (void)updateHUDControlState;
- (_Bool)availableOfControl:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)createSeparatorView;
- (id)initWithKeyboardAppearance:(long long)arg1 isRTL:(_Bool)arg2 mode:(long long)arg3 sceneBounds:(struct CGRect)arg4;

@end
