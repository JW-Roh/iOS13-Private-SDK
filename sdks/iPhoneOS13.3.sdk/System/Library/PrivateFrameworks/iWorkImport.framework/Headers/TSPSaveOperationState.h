//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable;

__attribute__((visibility("hidden")))
@interface TSPSaveOperationState : NSObject
{
    NSMapTable *_newDataStorages;
    NSHashTable *_remoteData;
    int _sampleID;
    long long _updateType;
}

@property(nonatomic) int sampleID; // @synthesize sampleID=_sampleID;
@property(readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL inheritAttributes;
@property(readonly, nonatomic) BOOL isSavingCurrentDocument;
@property(readonly, nonatomic) BOOL shouldUpdate;
@property(readonly, nonatomic) BOOL hasRemoteData;
- (void)addRemoteData:(id)arg1;
- (void)enumerateDatasAndStoragesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)hasNewStorageForData:(id)arg1;
- (void)addNewStorage:(id)arg1 forData:(id)arg2;
- (id)initWithUpdateType:(long long)arg1;
- (id)init;

@end

