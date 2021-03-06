//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class CKServerChangeToken, HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheUpdateGroupTokenOperation : HMDBackingStoreOperation
{
    HMDBackingStoreCacheGroup *_record;
    CKServerChangeToken *_serverChangeToken;
}

@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *record; // @synthesize record=_record;
// - (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithGroup:(id)arg1 serverChangeToken:(id)arg2 resultBlock:(id /* CDUnknownBlockType */)arg3;

@end

