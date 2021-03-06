//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, PIPipeline, PIStatisticsElapsedTime;
@protocol OS_dispatch_group;

@interface PIGroup : NSObject
{
    long long _concurrencyLimit;
    BOOL _suspended;
    NSMutableArray *_operations;
    NSMutableArray *_executingOperations;
    long long _executingConcurrency;
    BOOL _removeOnCompletion;
    NSObject<OS_dispatch_group> *_operationsGroup;
    PIStatisticsElapsedTime *_executionTime;
    id /* CDUnknownBlockType */ _availableBlock;
    PIPipeline *_pipeline;
    NSString *_identifier;
    NSUInteger _priority;
    NSMutableDictionary *_operationsByPriority;
    NSMapTable *_operationsByKey;
    NSMapTable *_operationsByIdentifier;
    double _timestampStart;
}

+ (id)groupWithConcurrencyLimit:(long long)arg1 priority:(NSUInteger)arg2;
+ (id)group;
@property BOOL removeOnCompletion; // @synthesize removeOnCompletion=_removeOnCompletion;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak PIPipeline *pipeline; // @synthesize pipeline=_pipeline;
// - (void).cxx_destruct;
- (id)description;
- (double)wallTime;
- (double)executionTime;
- (void)cancelAllOperationsAndSuspendGroupUntilFinished:(id /* CDUnknownBlockType */)arg1;
- (void)cancelAllOperations:(id /* CDUnknownBlockType */)arg1;
- (id)waitUntilFinished:(BOOL)arg1;
- (void)waitUntilFinishedUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)updateOperationsWithBlock:(id /* CDUnknownBlockType */)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)addOperations:(id)arg1 waitUntilFinishedBlock:(id /* CDUnknownBlockType */)arg2;
- (void)addOperations:(id)arg1;
- (id)addOperationWithExecutionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addOperation:(id)arg1;
- (id)operationsWithPriority:(long long)arg1;
- (id)operationWithIdentifier:(id)arg1;
- (id)operationsWithKey:(id)arg1;
@property(readonly) BOOL isExecuting;
@property(readonly) long long executingConcurrency;
@property(readonly) NSUInteger executingOperationsCount;
@property(readonly) NSUInteger operationsCount;
@property(readonly, copy) NSArray *executingOperations; // @synthesize executingOperations=_executingOperations;
@property(readonly, copy) NSArray *operations; // @synthesize operations=_operations;
- (void)_removeOperation:(id)arg1;
- (void)_addOperation:(id)arg1;
- (void)_operation:(id)arg1 didChangePriority:(long long)arg2;
- (void)_rebuildOperationsByPriority;
@property(copy) id /* CDUnknownBlockType */ availableBlock; // @synthesize availableBlock=_availableBlock;
@property(getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property NSUInteger priority; // @synthesize priority=_priority;
@property long long concurrencyLimit; // @synthesize concurrencyLimit=_concurrencyLimit;
- (void)_updateConcurrencyLimit;
- (void)dealloc;
- (id)init;

@end

