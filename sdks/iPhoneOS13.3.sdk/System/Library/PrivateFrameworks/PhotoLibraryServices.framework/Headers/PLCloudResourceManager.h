//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PLCloudResourcePrefetchManager, PLCloudResourcePruneManager;
@protocol OS_dispatch_queue;

@interface PLCloudResourceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    PLCloudResourcePrefetchManager *_prefetchManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDate *_lastOperationDate;
    BOOL _enqueuedOperation;
}

// - (void).cxx_destruct;
- (id)statusForDebug:(BOOL)arg1;
- (void)handleOptimizeModeChange;
- (void)stop;
- (void)updateCacheDeletePurgeableAmount;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)arg1;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (void)invalidate;
- (id)initWithCPLManager:(id)arg1 library:(id)arg2;
- (id)init;

@end

