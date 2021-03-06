//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLSilo.h>

@class NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo : CLSilo
{
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    double _currentLatchedAbsoluteTimestamp;
}

// - (void).cxx_destruct;
- (id)debugDescription;
- (id)operationQueue;
- (id)queue;
- (void)afterInterval:(double)arg1 async:(id /* CDUnknownBlockType */)arg2;
- (void)sync:(id /* CDUnknownBlockType */)arg1;
- (void)async:(id /* CDUnknownBlockType */)arg1;
- (id)newTimer;
- (double)currentLatchedAbsoluteTimestamp;
- (void)updateLatchedAbsoluteTimestamp;
- (void)_setLatchedAbsoluteTimestamp:(double)arg1;
- (void)resume;
- (void)suspend;
- (void)assertOutside;
- (void)assertInside;
- (id)getTimeCoercibleVariantInstance;
- (id)initMain;
- (id)initWithUnderlyingQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

