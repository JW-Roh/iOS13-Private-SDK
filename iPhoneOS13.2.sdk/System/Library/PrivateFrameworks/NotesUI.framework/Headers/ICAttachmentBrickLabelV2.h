//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSAttributedString, NSString, UIColor;

@interface ICAttachmentBrickLabelV2 : UILabel
{
    _Bool _vibrant;
    _Bool _disableVibrancy;
    struct UIColor *_defaultTextColor;
}

@property(retain, nonatomic) UIColor *defaultTextColor; // @synthesize defaultTextColor=_defaultTextColor;
@property(nonatomic) _Bool disableVibrancy; // @synthesize disableVibrancy=_disableVibrancy;
@property(nonatomic) _Bool vibrant; // @synthesize vibrant=_vibrant;
@property(retain, nonatomic) NSString *ic_stringValue;
@property(retain, nonatomic) NSAttributedString *ic_attributedStringValue;
- (void)setTextColor:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (_Bool)allowsVibrancy;

@end
