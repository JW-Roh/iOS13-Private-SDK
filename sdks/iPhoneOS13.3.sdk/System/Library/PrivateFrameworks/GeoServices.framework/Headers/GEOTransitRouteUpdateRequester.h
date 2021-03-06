//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableSet, NSTimer;

@interface GEOTransitRouteUpdateRequester : NSObject
{
//     struct os_unfair_lock_s _updatersLock;
    NSHashTable *_updaters;
//     struct os_unfair_lock_s _processedRequestsLock;
    NSMutableSet *_processedRequests;
//     struct os_unfair_lock_s _inflightRequestsLock;
    NSMutableSet *_inflightRequests;
    NSTimer *_updateTimer;
    NSUInteger _maxRetries;
    NSUInteger _numRetries;
    double _initialDelay;
    double _requestInterval;
}

+ (id)sharedInstance;
@property(nonatomic) double requestInterval; // @synthesize requestInterval=_requestInterval;
@property(nonatomic) double initialDelay; // @synthesize initialDelay=_initialDelay;
@property(readonly, nonatomic) NSMutableSet *processedRequests; // @synthesize processedRequests=_processedRequests;
@property(readonly, nonatomic) NSHashTable *updaters; // @synthesize updaters=_updaters;
// - (void).cxx_destruct;
- (void)_removeRequestsIfApplicable:(id)arg1;
- (void)_handleResponse:(id)arg1 andError:(id)arg2 forRequest:(id)arg3;
- (id)_uuidsForRequests:(id)arg1;
- (void)_sendRequestForRequests:(id)arg1;
- (id)_requestsForUpdaters:(id)arg1;
- (void)_processRequests;
- (void)_cancelUpdateTimer;
- (void)_scheduleUpdateTimerWithInterval:(double)arg1;
- (void)unregisterRouteUpdater:(id)arg1;
- (void)registerRouteUpdater:(id)arg1;
- (void)_cancelAllRequestsIfNeeded;
- (void)_purgeAllObjects;
- (id)initPrivate;

@end

