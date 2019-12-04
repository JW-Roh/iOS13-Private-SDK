//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSPromise;
@protocol OS_dispatch_queue;

@interface AMSUniqueExecutionQueue : NSObject
{
    id /* block */ _block;
    NSObject<OS_dispatch_queue> *_completionCallbacksQueue;
    NSObject<OS_dispatch_queue> *_executeBlockQueue;
    AMSPromise *_executionPromise;
    NSObject<OS_dispatch_queue> *_executionPromiseAccessQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *executionPromiseAccessQueue; // @synthesize executionPromiseAccessQueue=_executionPromiseAccessQueue;
@property(retain, nonatomic) AMSPromise *executionPromise; // @synthesize executionPromise=_executionPromise;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executeBlockQueue; // @synthesize executeBlockQueue=_executeBlockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionCallbacksQueue; // @synthesize completionCallbacksQueue=_completionCallbacksQueue;
@property(copy, nonatomic) id /* block */ block; // @synthesize block=_block;
- (id)_createExecutionPromise;
- (void)_beginExecutingBlockWithPromise:(id)arg1;
- (void)addCompletionBlockForSubsequentExecution:(id /* block */)arg1;
- (void)addCompletionBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1;

@end
