//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKHeroImageView-Protocol.h>

@class NSString, UIImageView;

@interface PKPhoneHeroImageView : UIView <PKHeroImageView>
{
    UIImageView *_phoneView;
}

- (struct CGSize)imageSize;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
