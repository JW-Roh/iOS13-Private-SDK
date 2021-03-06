//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSPReferenceOrderedSet : NSObject
{
    NSUInteger _capacity;
    struct __CFDictionary _dictionary;
    struct _TSPReferenceOrderedSetEntry _firstEntry;
    struct _TSPReferenceOrderedSetEntry _lastEntry;
    NSUInteger _count;
}

@property(readonly, nonatomic) NSUInteger count; // @synthesize count=_count;
- (id)allObjects;
- (void)minusSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)enumerateItemsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)removeItem:(id)arg1;
- (BOOL)addItem:(id)arg1;
- (BOOL)containsItem:(id)arg1;
- (void)dealloc;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)init;

@end

