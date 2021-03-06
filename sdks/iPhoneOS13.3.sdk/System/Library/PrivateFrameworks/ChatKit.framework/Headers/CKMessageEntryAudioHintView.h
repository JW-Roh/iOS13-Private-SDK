//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKMessageEntryAudioHintView : UIView
{
    UIButton *_referenceButton;
    UILabel *_hintLabel;
    UIImageView *_hintImageView;
    UIButton *_hintButton;
    UIEdgeInsets _coverInsets;
}

@property(retain, nonatomic) UIButton *hintButton; // @synthesize hintButton=_hintButton;
@property(retain, nonatomic) UIImageView *hintImageView; // @synthesize hintImageView=_hintImageView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) UIEdgeInsets coverInsets; // @synthesize coverInsets=_coverInsets;
@property(retain, nonatomic) UIButton *referenceButton; // @synthesize referenceButton=_referenceButton;
// - (void).cxx_destruct;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)layoutSubviews;
- (id)initWithReferenceButton:(id)arg1 coverInsets:(UIEdgeInsets)arg2;

@end

