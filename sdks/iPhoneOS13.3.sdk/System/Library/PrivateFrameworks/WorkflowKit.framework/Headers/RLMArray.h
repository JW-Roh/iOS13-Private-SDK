//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/RLMCollection-Protocol.h>
#import <WorkflowKit/RLMThreadConfined_Private-Protocol.h>

@class NSMutableArray, NSString, RLMObjectBase, RLMRealm;

@interface RLMArray : NSObject <RLMThreadConfined_Private, RLMCollection, NSFastEnumeration>
{
    NSString *_objectClassName;
    int _type;
    BOOL _optional;
    NSString *_key;
    RLMObjectBase *_parentObject;
    NSMutableArray *_backingArray;
}

+ (id)objectWithThreadSafeReference:(unique_ptr_d0e912ad)arg1 metadata:(id)arg2 realm:(id)arg3;
@property(readonly, copy, nonatomic) NSString *objectClassName; // @synthesize objectClassName=_objectClassName;
@property(readonly, nonatomic, getter=isOptional) BOOL optional; // @synthesize optional=_optional;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)descriptionWithMaxDepth:(NSUInteger)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id objectiveCMetadata;
- (unique_ptr_d0e912ad)makeThreadSafeReference;
- (id)addNotificationBlock:(id /* CDUnknownBlockType */)arg1;
- (id)sortedResultsUsingDescriptors:(id)arg1;
- (id)objectsWithPredicate:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(NSUInteger)arg3 context:(void )arg4;
- (id)objectsAtIndexes:(id)arg1;
- (NSUInteger)indexOfObjectWithPredicate:(id)arg1;
- (id)averageOfProperty:(id)arg1;
- (id)sumOfProperty:(id)arg1;
- (id)maxOfProperty:(id)arg1;
- (id)minOfProperty:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)aggregateProperty:(id)arg1 operation:(id)arg2 method:(SEL)arg3;
- (int)typeForProperty:(id)arg1;
// - (id)objectsWhere:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (id)objectsWhere:(id)arg1;
- (void)removeAllObjects;
- (NSUInteger)indexOfObject:(id)arg1;
- (void)exchangeObjectAtIndex:(NSUInteger)arg1 withObjectAtIndex:(NSUInteger)arg2;
- (void)moveObjectAtIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
@property(readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property(readonly, nonatomic) NSUInteger count;
- (id)objectAtIndex:(NSUInteger)arg1;
- (id)lastObject;
- (id)firstObject;
@property(readonly, nonatomic) RLMRealm *realm;
// - (NSUInteger)indexOfObjectWhere:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (NSUInteger)indexOfObjectWhere:(id)arg1;
- (id)sortedResultsUsingKeyPath:(id)arg1 ascending:(BOOL)arg2;
- (void)setObject:(id)arg1 atIndexedSubscript:(NSUInteger)arg2;
- (id)objectAtIndexedSubscript:(NSUInteger)arg1;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (id)initWithObjectType:(int)arg1 optional:(BOOL)arg2;
- (id)initWithObjectClassName:(id)arg1;

@end

