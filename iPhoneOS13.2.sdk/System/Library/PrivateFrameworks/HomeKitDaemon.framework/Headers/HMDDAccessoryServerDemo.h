//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServer.h>

@class HMDDAccessoryServerBrowserDemo, NSDictionary, NSNumber;

@interface HMDDAccessoryServerDemo : HAPAccessoryServer
{
    _Bool __paired;
    _Bool __hasPairings;
    NSNumber *_category;
    NSDictionary *_accessoryInfo;
    HMDDAccessoryServerBrowserDemo *_browser;
}

@property(nonatomic) _Bool _hasPairings; // @synthesize _hasPairings=__hasPairings;
@property(nonatomic) _Bool _paired; // @synthesize _paired=__paired;
@property(nonatomic) __weak HMDDAccessoryServerBrowserDemo *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) NSDictionary *accessoryInfo; // @synthesize accessoryInfo=_accessoryInfo;
- (void)setCategory:(id)arg1;
- (id)category;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)handleUpdatesForCharacteristics:(id)arg1;
- (void)identifyWithCompletion:(id /* block */)arg1;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (_Bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (_Bool)tryPairingPassword:(id)arg1 error:(id *)arg2;
- (_Bool)stopPairingWithError:(id *)arg1;
- (void)continuePairingAfterAuthPrompt;
- (void)startPairingWithConsentRequired:(_Bool)arg1 config:(id)arg2 ownershipToken:(id)arg3;
- (void)processCharacteristicWrite:(id)arg1 value:(id)arg2;
- (void)enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_parseAttributeDatabase:(id)arg1;
- (void)discoverAccessories;
- (long long)linkType;
- (id)initWithName:(id)arg1 identifier:(id)arg2 deviceInfo:(id)arg3 paired:(_Bool)arg4 keyStore:(id)arg5 browser:(id)arg6;
- (id)initCommon:(id)arg1 browser:(id)arg2;
- (_Bool)hasPairings;
- (_Bool)isPaired;

@end
