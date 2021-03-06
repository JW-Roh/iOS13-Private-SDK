//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionFairPlayController : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_fairPlaySerialQueue;
    NSMutableDictionary *_subscriptionKeyBagStatusCache;
}

+ (id)sharedController;
// - (void).cxx_destruct;
- (void)_handleSubscriptionFairPlayKeyStatusChangedDistributedNotification:(id)arg1;
- (void)stopSubscriptionLeaseForAccountUniqueIdentifier:(NSUInteger)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)generateSubscriptionLeaseRequestWithAccountUniqueID:(NSUInteger)arg1 transactionType:(unsigned int)arg2 certificateData:(id)arg3 assetIDData:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(NSUInteger)arg1 transactionType:(unsigned int)arg2 machineIDData:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)importSubscriptionKeyBagData:(id)arg1 leaseInfoData:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)importSubscriptionKeyBagData:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getKeyStatusListWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)getKeyStatusForAccountUniqueIdentifier:(NSUInteger)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)_init;

@end

