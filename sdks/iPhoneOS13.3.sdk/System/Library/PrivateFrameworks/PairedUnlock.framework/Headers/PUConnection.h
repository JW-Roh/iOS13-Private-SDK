//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, PUConnectionUnlockClient;
@protocol OS_dispatch_queue, PUConnectionDelegate;

@interface PUConnection : NSObject
{
    NSXPCConnection *_serverConnection;
    NSObject<OS_dispatch_queue> *_serverConnectionQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    PUConnectionUnlockClient *_unlockClient;
    id <PUConnectionDelegate> _delegate;
    id /* CDUnknownBlockType */ _remoteDeviceRemoveLockoutHandler;
}

+ (void)syncPasscodeState;
@property(copy, nonatomic) id /* CDUnknownBlockType */ remoteDeviceRemoveLockoutHandler; // @synthesize remoteDeviceRemoveLockoutHandler=_remoteDeviceRemoveLockoutHandler;
@property __weak id <PUConnectionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)remoteDeviceDidRemoveLockout:(BOOL)arg1 error:(id)arg2;
- (void)didGetRemoteDeviceState:(id)arg1 error:(id)arg2;
- (void)remoteDeviceDidUnlock;
- (void)remoteDeviceDidCompleteRemoteAction:(BOOL)arg1 remoteDeviceState:(id)arg2 error:(id)arg3;
- (void)didDisableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2;
- (void)didEnableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2;
- (void)didUnpairForUnlock:(BOOL)arg1 error:(id)arg2;
- (void)didPairForUnlock:(BOOL)arg1 error:(id)arg2;
- (id)delegateIfRespondsToSelector:(SEL)arg1;
- (void)queryRemoteDeviceState:(id /* CDUnknownBlockType */)arg1;
- (void)getRemoteDeviceState:(id /* CDUnknownBlockType */)arg1;
- (void)requestDeviceSetWristDetectionDisabled:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)requestRemoteDeviceRemoveLockout:(id /* CDUnknownBlockType */)arg1;
- (void)requestRemoteDeviceUnlockNotification;
- (void)requestRemoteDeviceRemoteAction:(long long)arg1 type:(long long)arg2;
- (void)disableOnlyRemoteUnlock;
- (void)enableOnlyRemoteUnlockWithPasscode:(id)arg1;
- (void)unpairForUnlock;
- (void)pairForUnlockWithPasscode:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (id)serverConnection;
- (void)dealloc;
- (const char )queueNameWithSuffix:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end
