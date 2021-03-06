//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet, NSPredicate, _CDInteractionStore;

@interface _CDInteractionCache : NSObject
{
//     struct os_unfair_lock_s _lock;
    _CDInteractionStore *_interactionStore;
    NSUInteger _size;
    NSPredicate *_predicate;
    id /* CDUnknownBlockType */ _filterBlock;
    NSMutableOrderedSet *_mutableInteractions;
}

@property(readonly, nonatomic) NSMutableOrderedSet *mutableInteractions; // @synthesize mutableInteractions=_mutableInteractions;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ filterBlock; // @synthesize filterBlock=_filterBlock;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) NSUInteger size; // @synthesize size=_size;
@property(readonly, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *interactions;
- (void)_cacheInteractions:(id)arg1;
- (void)interactionsRecorded:(id)arg1;
- (void)_refetch;
- (void)refetch;
- (id)initWithInteractionStore:(id)arg1 size:(NSUInteger)arg2 queryPredicate:(id)arg3 filterBlock:(id /* CDUnknownBlockType */)arg4;

@end

