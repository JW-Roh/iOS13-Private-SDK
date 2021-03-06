//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface JXOperation : NSOperation
{
    BOOL _isExecuting;
    BOOL _isFinished;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property BOOL isFinished; // @synthesize isFinished=_isFinished;
@property BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
// - (void).cxx_destruct;
- (void)startAndWaitUntilFinished;
- (void)finish;
- (void)willFinish;
- (void)cancel;
- (BOOL)isConcurrent;
- (void)start;
- (id)init;
- (void)dealloc;

@end

