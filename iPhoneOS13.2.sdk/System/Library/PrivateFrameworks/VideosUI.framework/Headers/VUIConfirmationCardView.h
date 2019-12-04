//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIVisualEffectView, VUIConfirmationCardLayout, VUILabel, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIConfirmationCardView : UIView
{
    VUIConfirmationCardLayout *_layout;
    VUILabel *_textLabel;
    _TVImageView *_badgeView;
    UIView *_cardView;
    UIVisualEffectView *_backdropView;
}

@property(readonly, nonatomic) UIVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) _TVImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) VUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) VUIConfirmationCardLayout *layout; // @synthesize layout=_layout;
- (void)_configureSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
