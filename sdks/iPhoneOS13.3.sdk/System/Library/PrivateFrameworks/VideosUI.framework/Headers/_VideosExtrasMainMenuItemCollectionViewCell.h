//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface _VideosExtrasMainMenuItemCollectionViewCell : UICollectionViewCell
{
    NSLayoutConstraint *_textLabelConstraint;
    UILabel *_textLabel;
}

+ (id)_createLabelInCell:(id)arg1;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSLayoutConstraint *textLabelConstraint; // @synthesize textLabelConstraint=_textLabelConstraint;
// - (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;
- (void)_dynamicTypeChanged;
- (void)safeAreaInsetsDidChange;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

