//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBFMobileKeyBag, SBFMobileKeyBagState;

@protocol SBFMobileKeyBagObserver <NSObject>

@optional
- (void)keybagDidFinishProcessingStateChange:(SBFMobileKeyBag *)arg1;
- (void)keybag:(SBFMobileKeyBag *)arg1 extendedStateDidChange:(SBFMobileKeyBagState *)arg2;
- (void)keybagWillBeginProcessingStateChange:(SBFMobileKeyBag *)arg1;
- (void)keybagDidUnlockForTheFirstTime:(SBFMobileKeyBag *)arg1;
@end

