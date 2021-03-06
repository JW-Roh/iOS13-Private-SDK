//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocompleteUI/CNComposeTableViewCell.h>

@class UIImageView, UIView;

@interface CNAutocompleteDisambiguatingTableViewCell : CNComposeTableViewCell
{
    BOOL _checkmarkVisible;
    UIImageView *_checkmarkImageView;
}

+ (id)createCheckmarkView;
+ (id)identifier;
@property(retain) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property(nonatomic, getter=isCheckmarkVisible) BOOL checkmarkVisible; // @synthesize checkmarkVisible=_checkmarkVisible;
// - (void).cxx_destruct;
@property(readonly) UIView *checkmarkView;
- (void)setRecipient:(id)arg1;
- (id)titleTextStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

