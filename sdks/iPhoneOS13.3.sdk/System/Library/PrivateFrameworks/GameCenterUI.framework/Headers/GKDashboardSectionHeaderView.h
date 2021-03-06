//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, NSString, UIColor, UIFont, UILabel;

@interface GKDashboardSectionHeaderView : UICollectionReusableView
{
    BOOL _onDarkBackground;
    UILabel *_titleLabel;
    NSLayoutConstraint *_leftMarginConstraint;
    UIColor *_titleColor;
    NSLayoutConstraint *_rightMarginConstraint;
}

+ (CGSize)platformSizeForTitle:(id)arg1 withFont:(id)arg2;
+ (double)widthForTitle:(id)arg1 withFont:(id)arg2;
+ (double)defaultHeight;
@property(nonatomic) NSLayoutConstraint *rightMarginConstraint; // @synthesize rightMarginConstraint=_rightMarginConstraint;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) BOOL onDarkBackground; // @synthesize onDarkBackground=_onDarkBackground;
@property(nonatomic) NSLayoutConstraint *leftMarginConstraint; // @synthesize leftMarginConstraint=_leftMarginConstraint;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (CGSize)intrinsicContentSize;
@property(copy, nonatomic) UIFont *font; // @dynamic font;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)awakeFromNib;

@end

