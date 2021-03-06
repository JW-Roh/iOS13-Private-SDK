//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class SBLockOverlayStylePropertiesFactory, UIButton, UILabel, UIResizableView, _UILegibilitySettings;
@protocol SBUILockOverlayViewDelegate;

@interface SBUILockOverlayView : SBFTouchPassThroughView
{
    id <SBUILockOverlayViewDelegate> _delegate;
    UIResizableView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
    SBLockOverlayStylePropertiesFactory *_underlayPropertiesFactory;
    NSUInteger _style;
    _UILegibilitySettings *_legibilitySettings;
}

@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) NSUInteger style; // @synthesize style=_style;
@property(readonly, nonatomic) SBLockOverlayStylePropertiesFactory *underlayPropertiesFactory; // @synthesize underlayPropertiesFactory=_underlayPropertiesFactory;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <SBUILockOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (double)_maxLabelWidth;
- (void)_sizeView:(id)arg1 forFixedWith:(BOOL)arg2;
- (NSUInteger)_numberOfLinesForText:(id)arg1 font:(id)arg2 size:(CGSize)arg3;
- (void)_buttonPressed;
- (id)_actionFont;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)layoutSubviews;
- (id)_legibilitySettingsForStyle:(NSUInteger)arg1;
- (id)initWithFrame:(CGRect)arg1 style:(NSUInteger)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

