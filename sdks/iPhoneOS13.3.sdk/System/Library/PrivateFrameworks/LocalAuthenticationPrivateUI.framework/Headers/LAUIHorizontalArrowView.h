//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface LAUIHorizontalArrowView : UIView
{
    UIColor *_color;
    BOOL _effective_animating;
    unsigned short _dismissal_animation_count;
    BOOL _animated;
    double _resting_height;
    UIView *_container;
    UIView *_arrow_container;
    UIImageView *_head;
    UIView *_tail_container;
    UIImageView *_tail;
    UILabel *_label;
    BOOL _pulsing;
    struct periodic_animation_state _head_pulse;
    struct periodic_animation_state _tail_container_pulse;
    struct periodic_animation_state _tail_counter_pulse;
    BOOL _animating;
    long long _direction;
    double _displacement;
    NSString *_text;
    CGSize _maximum_line_size;
    UIOffset _displacementOffset;
}

@property(nonatomic) UIOffset displacementOffset; // @synthesize displacementOffset=_displacementOffset;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double displacement; // @synthesize displacement=_displacement;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
@property(nonatomic) CGSize maximumLineSize; // @synthesize maximumLineSize=_maximum_line_size;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)boldTextStatusDidChange:(id)arg1;
- (void)_updateLabelSize;
- (void)_updateFont;
- (void)_updatePulsingWithDelay:(double)arg1;
- (void)_updateDirectionTransform;
- (void)_updateAnimatingAnimated:(BOOL)arg1;
- (void)_updateViewsWithColor;
- (void)layoutSubviews;
- (void)_layoutIfNeededAnimated:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)didMoveToWindow;
- (void)tintColorDidChange;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

