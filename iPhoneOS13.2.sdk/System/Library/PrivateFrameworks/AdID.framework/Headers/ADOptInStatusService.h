//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AdCore/ADSingleton.h>

#import <AdID/ADOptInStatus_XPC-Protocol.h>


@class NSString, NSXPCListener;

@interface ADOptInStatusService : ADSingleton <NSXPCListenerDelegate, ADOptInStatus_XPC>
{
    _Bool _requestInFlight;
    NSXPCListener *_listener;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool requestInFlight; // @synthesize requestInFlight=_requestInFlight;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (id)optInStatusString:(long long)arg1;
- (void)advertisingIdentifier:(id /* block */)arg1;
- (void)advertisingIdentifierChanged:(id /* block */)arg1;
- (long long)optInStatusFromRecord:(id)arg1;
- (void)requestOptInStatusFromJingle:(id /* block */)arg1;
- (void)clearAdvertisingIdentifier;
- (void)refreshOptInStatusRefreshingWeakToken:(_Bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)reconcileAndUpdateBeforeResponding:(_Bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)callOptInStatusCompletionHandler:(long long)arg1 refreshWeakToken:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setOptInStatus:(_Bool)arg1 completionHandler:(id /* block */)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
