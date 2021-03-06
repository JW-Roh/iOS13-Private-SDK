//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPAirPlayAccessoryBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HMDWACScanner-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class CUWiFiScanner;
@protocol HMDWACScannerDelegate, OS_dispatch_queue;

@interface HMDWACScanner : NSObject <HMFLogging, HAPAirPlayAccessoryBrowserDelegate, HMDWACScanner>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CUWiFiScanner *_wifiScanner;
    id <HMDWACScannerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (id)logCategory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HMDWACScannerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)wacBrowser:(id)arg1 didUpdateAirPlayDevice:(id)arg2;
- (void)wacBrowser:(id)arg1 didRemoveAirPlayDevice:(id)arg2;
- (void)wacBrowser:(id)arg1 didFindAirPlayDevice:(id)arg2;
- (void)stop;
- (void)resume;
- (void)backoff;
- (void)startDiscoveringAirPlayAccessoriesWithBrowser:(id)arg1;
- (void)start;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)init;

@end

