//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPass.h>

@class NSData, PKBarcode;

@interface PKPass (NanoPassKit)
+ (void)npkClearTransitValuePendingStateIfNecessaryForPassWithID:(id)arg1 withBalance:(id)arg2;
+ (void)npkHandleTransitValuePendingAmount:(id)arg1 withBalance:(id)arg2 forPassWithID:(id)arg3;
- (id)npkLastAddValueAmount;
- (BOOL)npkIsAddValuePending;
@property(readonly) BOOL npkHasValidNFCPayload;
@property(readonly) BOOL hasLogoImageSet;
- (id)npkCompleteHashForWatchOSVersion:(NSUInteger)arg1;
@property(readonly) NSData *npkCompleteHash;
@property(readonly) BOOL npkExpired;
@property(readonly) BOOL npkSupportsHidingAccessory;
@property(readonly) PKBarcode *npkWatchBarcode;
- (long long)npkAccessoryType;
- (id)npkArchiveData;
@end

