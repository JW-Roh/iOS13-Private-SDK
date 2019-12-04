//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTTaskScheduler-Protocol.h>

@class NSMutableArray, NSString;
@protocol AVTTaskScheduler, OS_dispatch_queue;

@interface AVTCoalescingInvertingTaskScheduler : NSObject <AVTTaskScheduler>
{
    NSMutableArray *_tasks;
    NSObject<OS_dispatch_queue> *_coalescingQueue;
    NSObject<OS_dispatch_queue> *_stateLock;
    id <AVTTaskScheduler> _backingScheduler;
    double _coalesingDelay;
}

@property(readonly, nonatomic) double coalesingDelay; // @synthesize coalesingDelay=_coalesingDelay;
@property(readonly, nonatomic) id <AVTTaskScheduler> backingScheduler; // @synthesize backingScheduler=_backingScheduler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // @synthesize stateLock=_stateLock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *coalescingQueue; // @synthesize coalescingQueue=_coalescingQueue;
@property(readonly, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
- (void)lowerTaskPriority:(id /* block */)arg1;
- (void)cancelTask:(id /* block */)arg1;
- (void)cancelAllTasks;
- (void)startTasksFrom:(id /* block */)arg1;
- (void)scheduleTask:(id /* block */)arg1;
- (void)performStateWork:(id /* block */)arg1;
- (id)initWithBackingScheduler:(id)arg1 coalescingQueue:(id)arg2 delay:(double)arg3 environment:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
