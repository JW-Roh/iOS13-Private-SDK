//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary;

@interface RBProcessMap : NSObject <NSCopying>
{
//     struct os_unfair_lock_s _lock;
    NSMutableDictionary *_stateMap;
}

// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)removeAllObjects;
- (id)dictionary;
- (void)enumerateWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)setState:(id)arg1 forIdentity:(id)arg2;
- (id)removeStateForIdentity:(id)arg1 withPredicate:(id /* CDUnknownBlockType */)arg2;
- (id)removeStateForIdentity:(id)arg1;
- (id)stateForIdentity:(id)arg1;
- (NSUInteger)count;
- (id)allState;
- (BOOL)containsIdentity:(id)arg1;
- (void)removeIdentity:(id)arg1;
- (void)addIdentity:(id)arg1;
- (id)allIdentities;
- (id)init;

@end

