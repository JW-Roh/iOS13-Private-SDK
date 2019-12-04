//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceCollection.h>

#import <NanoTimeKitCompanion/NTKCollectionClient-Protocol.h>
#import <NanoTimeKitCompanion/NTKFaceObserver-Protocol.h>

@class NSArray, NSMutableArray, NSNumber, NSString, NSUUID, NSXPCConnection;

@interface NTKPersistentFaceCollection : NTKFaceCollection <NTKFaceObserver, NTKCollectionClient>
{
    _Bool _hasLoaded;
    NSXPCConnection *_connection;
    _Bool _registrationNeeded;
    NSNumber *_seqId;
    NSArray *_referenceOrderedUUIDs;
    NSUUID *_referenceSelectedUUID;
    _Bool _suppressingFaceObserverCallbacks;
    _Bool _updatesFromDaemonSuspended;
    NSMutableArray *_updatesFromDaemonEnqueuedWhileSuspended;
    NSString *_updateSuspensionIdentifier;
    _Bool _isLibraryCollection;
}

- (void)_performSuppressingFaceObserverCallbacks:(id /* block */)arg1;
- (void)_pruneEnqueuedUpdatesMadeObsoleteByNewUpdate:(id)arg1;
- (void)_performOrEnqueueUpdateOfType:(long long)arg1 forFaceUUID:(id)arg2 block:(id /* block */)arg3;
- (void)_handleConnectionInterrupted;
- (void)_registerIfNeeded;
- (void)_fromDaemon_computeSelectedUUIDFromReferenceAndNotifySelected;
- (void)_fromDaemon_upgradeFace:(id)arg1 forUUID:(id)arg2;
- (void)_fromDaemon_updateFaceForUUID:(id)arg1 withResourceDirectory:(id)arg2;
- (void)_fromDaemon_updateFaceForUUID:(id)arg1 withConfiguration:(id)arg2;
- (void)_fromDaemon_removeFaceForUUID:(id)arg1;
- (void)_fromDaemon_addFace:(id)arg1 forUUID:(id)arg2;
- (void)flushCompleteForIdentifier:(id)arg1;
- (void)removeFaceForUUID:(id)arg1 seqId:(id)arg2 completion:(id /* block */)arg3;
- (void)addFace:(id)arg1 forUUID:(id)arg2 seqId:(id)arg3;
- (void)upgradeFace:(id)arg1 forUUID:(id)arg2 seqID:(id)arg3;
- (void)updateFaceForUUID:(id)arg1 withResourceDirectory:(id)arg2 seqId:(id)arg3 completion:(id /* block */)arg4;
- (void)updateFaceForUUID:(id)arg1 withConfiguration:(id)arg2 seqId:(id)arg3;
- (void)updateOrderedFaceUUIDs:(id)arg1 seqId:(id)arg2;
- (void)updateSelectedFaceUUID:(id)arg1 seqId:(id)arg2;
- (void)resetClientCollection;
- (void)loadFullCollectionWithOrderedUUIDs:(id)arg1 selectedUUID:(id)arg2 facesByUUID:(id)arg3 seqId:(id)arg4 completion:(id /* block */)arg5;
- (id)_serverProxy;
- (void)_sendToDaemonFlushWithIdentifier:(id)arg1;
- (void)_sendToDaemonReset;
- (void)_sendToDaemonRemovedFaceForUUID:(id)arg1;
- (void)_sendToDaemonAddedFace:(id)arg1 forUUID:(id)arg2;
- (void)_sendToDaemonUpgradeForFace:(id)arg1 withUUID:(id)arg2;
- (void)_sendToDaemonUpdatedResourceDirectoryForFace:(id)arg1 withUUID:(id)arg2;
- (void)_sendToDaemonUpdatedConfigurationForFace:(id)arg1 withUUID:(id)arg2;
- (void)_sendToDaemonSelectedUUID;
- (void)_sendToDaemonOrderedUUIDs;
- (void)_notifyReset;
- (void)_notifyLoaded;
- (void)faceUpgradeOccurred:(id)arg1;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)_handleFlushCompleteForIdentifier:(id)arg1;
- (void)resumeUpdatesFromDaemon;
- (void)suspendUpdatesFromDaemon;
- (void)reset;
- (void)_didRemoveFace:(id)arg1 withUUID:(id)arg2;
- (void)_didSelectFaceUUID:(id)arg1;
- (void)_didMoveFace:(id)arg1 withUUID:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)_didAddFace:(id)arg1 withUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (_Bool)hasLoaded;
- (void)dealloc;
- (id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
