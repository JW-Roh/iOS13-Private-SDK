//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (FCAccountActionQueue)
- (void)fc_popActionTypesUpToCount:(NSUInteger)arg1;
- (BOOL)fc_enqueueActionType:(long long)arg1;
- (void)fc_setLocalDataHintIfNeeded:(BOOL)arg1;
- (id)fc_dequeueTransactions;
- (void)fc_enqueueTransaction:(id)arg1 withMaxTransactionCount:(NSUInteger)arg2;
- (void)fc_mergeWithDictionary:(id)arg1 withValueCombiner:(id /* CDUnknownBlockType */)arg2;
- (void)fc_removeObjectsForKeysPassingTest:(id /* CDUnknownBlockType */)arg1;
- (void)fc_removeObjectsForKeysNotInSet:(id)arg1;
- (void)fc_removeObjectsForKeysNotInArray:(id)arg1;
- (void)fc_safelySetObjectAllowingNil:(id)arg1 forKey:(id)arg2;
- (void)fc_safelySetObjectAllowingNil:(id)arg1 forKeyAllowingNil:(id)arg2;
- (void)fc_transformValuesWithKeyAndValueBlock:(id /* CDUnknownBlockType */)arg1;
- (void)fc_safelySetObject:(id)arg1 forKey:(id)arg2;
@end
