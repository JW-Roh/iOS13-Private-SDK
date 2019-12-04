//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PLLocalChangeEventBuilder : NSObject
{
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_updatedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSMutableDictionary *_attributesByOID;
    NSMutableDictionary *_relationshipsByOID;
    NSMutableArray *_deletedAssetCloudGUIDs;
    NSMutableArray *_deletedAlbumCloudGUIDs;
    NSMutableArray *_deletedMemoryCloudGUIDs;
    NSMutableArray *_deletedPersonCloudGUIDs;
    NSMutableArray *_deletedFaceCropCloudGUIDs;
    NSMutableArray *_deletedOwnedMomentShareCloudGUIDs;
    NSMutableArray *_deletedSubscribedMomentShareCloudGUIDs;
    NSMutableArray *_deletedSuggestionCloudGUIDs;
    NSMutableArray *_deletedInternalResourceUUIDToResourceTypeMappings;
    _Bool _coalescedEvent;
    _Bool _syncChange;
    id /* block */ _transactionFilter;
    id /* block */ _updatedPropertyFilter;
}

+ (id)localEventFromTransaction:(id)arg1;
+ (id)localEventWithBuilderBlock:(id /* block */)arg1;
@property(copy, nonatomic) id /* block */ updatedPropertyFilter; // @synthesize updatedPropertyFilter=_updatedPropertyFilter;
@property(copy, nonatomic) id /* block */ transactionFilter; // @synthesize transactionFilter=_transactionFilter;
@property(nonatomic, getter=isSyncChange) _Bool syncChange; // @synthesize syncChange=_syncChange;
@property(nonatomic, getter=isCoalescedEvent) _Bool coalescedEvent; // @synthesize coalescedEvent=_coalescedEvent;
- (id)buildLocalEvent;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id /* block */)recordDeletedCloudGUIDBlockForChangeKey:(id)arg1;
- (id /* block */)recordChangedObjectIDBlockForChangeKey:(id)arg1;
- (_Bool)_isCloudStateDeletedOnTombstone:(id)arg1;
- (Class)_cloudDeletableEntityFromObjectID:(id)arg1;
- (void)_recordCloudDeleteForChange:(id)arg1;
- (void)_recordDeleteChange:(id)arg1;
- (id)_filteredUpdatedPropertiesFromChange:(id)arg1;
- (void)_recordUpdateChange:(id)arg1;
- (void)_recordInsertChange:(id)arg1;
- (void)recordChange:(id)arg1;
- (_Bool)_shouldRecordTransaction:(id)arg1;
- (void)recordTransaction:(id)arg1;
- (void)recordAllTransactionsFromIterator:(id)arg1;
- (void)recordUpdatedAttributes:(unsigned long long)arg1 andRelationships:(unsigned long long)arg2 forObjectID:(id)arg3;
- (void)recordDeletedCloudGUID:(id)arg1 forType:(long long)arg2;
- (void)recordDeletedObjectID:(id)arg1;
- (void)recordUpdatedObjectID:(id)arg1;
- (void)recordInsertedObjectID:(id)arg1;
- (id)init;

@end
