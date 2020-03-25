//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabaseValueCache, HDProfile;
@protocol OS_dispatch_queue;

@interface HDSourceManager : NSObject
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDDatabaseValueCache *_sourceEntityByBundleIdentifierCache;
    HDDatabaseValueCache *_clientSourceCache;
    HDDatabaseValueCache *_localSourceForBundleIdentifierCache;
    HDDatabaseValueCache *_localSourceForSourceID;
}

+ (BOOL)_isLocalDeviceBundleIdentifier:(id)arg1;
// - (void).cxx_destruct;
- (void)_applicationsUninstalledNotification:(id)arg1;
- (id)_createSourceEntityForBundleIdentifier:(id)arg1 owningAppBundleIdentifier:(id)arg2 name:(id)arg3 options:(NSUInteger)arg4 isCurrentDevice:(BOOL)arg5 productType:(id)arg6 error:(id )arg7;
- (id)_createSourceEntityForSpartanDeviceWithError:(id )arg1;
- (id)_createSourceEntityForLocalDeviceWithError:(id )arg1;
- (id)_fetchClientSourceForPersistentID:(id)arg1 error:(id )arg2;
- (id)_sourcePersistentIDsFromSourceEntities:(id)arg1;
- (BOOL)_deleteSourceIfNoSampleFound:(id)arg1;
- (id)_localSourcesForBundleIDs:(id)arg1 database:(id)arg2 error:(id )arg3;
- (id)_bundleIDsWithoutLocalSourceForSourcesWithPredicate:(id)arg1 database:(id)arg2 error:(id )arg3;
- (BOOL)_deleteSourcesWithUUIDs:(id)arg1 localSourceEntityCacheKey:(id)arg2 deleteSamples:(BOOL)arg3 database:(id)arg4 error:(id )arg5;
- (id)_sourceUUIDsForBundleIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)deleteSourceWithBundleIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)_createSourcesWithCodables:(id)arg1 provenance:(long long)arg2 sourceUUIDSToDelete:(id)arg3 deleteSamples:(BOOL)arg4 database:(id)arg5 error:(id )arg6;
- (BOOL)createSourcesWithCodables:(id)arg1 provenance:(long long)arg2 error:(id )arg3;
- (id)_clientSourcesWithPredicate:(id)arg1 error:(id )arg2;
- (id)allWatchSourcesWithError:(id )arg1;
- (id)allSourcesWithError:(id )arg1;
- (id)clientSourceForUUID:(id)arg1 error:(id )arg2;
- (id)clientSourcesForSourceIDs:(id)arg1 error:(id )arg2;
- (id)sourceUUIDForBundleIdentifier:(id)arg1 error:(id )arg2;
- (id)clientSourceForSourceEntity:(id)arg1 error:(id )arg2;
- (id)clientSourceForSourceEntities:(id)arg1 error:(id )arg2;
- (id)clientSourceForPersistentID:(id)arg1 error:(id )arg2;
- (id)clientSourceForBundleIdentifier:(id)arg1 error:(id )arg2;
- (id)_sourceForBundleIdentifier:(id)arg1 createSourceBlock:(id /* CDUnknownBlockType */)arg2 modifySourceBlock:(id /* CDUnknownBlockType */)arg3 error:(id )arg4;
- (id)sourceForCodableSource:(id)arg1 provenance:(long long)arg2 createIfNecessary:(BOOL)arg3 isDeleted:(BOOL )arg4 error:(id )arg5;
- (id)sourceForAppleDeviceWithUUID:(id)arg1 identifier:(id)arg2 name:(id)arg3 productType:(id)arg4 createIfNecessary:(BOOL)arg5 error:(id )arg6;
- (id)sourceEntityForClientSource:(id)arg1 createOrUpdateIfNecessary:(BOOL)arg2 error:(id )arg3;
- (id)sourceForApplicationIdentifier:(id)arg1 createOrUpdateIfNecessary:(BOOL)arg2 entitlements:(id)arg3 name:(id)arg4 error:(id )arg5;
- (id)createOrUpdateSourceForClient:(id)arg1 error:(id )arg2;
- (id)sourceForClient:(id)arg1 error:(id )arg2;
- (id)_sourceFromEphemeralSource:(id)arg1 provenance:(long long)arg2 createOrUpdateIfNecessary:(BOOL)arg3 error:(id )arg4;
- (id)publicSourceForGatewayExternalIdentifier:(id)arg1 provenance:(long long)arg2 createOrUpdateIfNecessary:(BOOL)arg3 nameOnCreateOrUpdate:(id)arg4 error:(id )arg5;
- (id)privateSourceForClinicalAccountIdentifier:(id)arg1 provenance:(long long)arg2 createOrUpdateIfNecessary:(BOOL)arg3 nameOnCreateOrUpdate:(id)arg4 error:(id )arg5;
- (id)localDeviceSourceWithError:(id )arg1;
- (id)_predicateForSourceBundleIdentifier:(id)arg1 localOnly:(BOOL)arg2;
- (id)localSourceForSourceID:(id)arg1 copyIfNecessary:(BOOL)arg2 error:(id )arg3;
- (id)_createCopyOfFirstSourceWithPredicate:(id)arg1 database:(id)arg2 error:(id )arg3;
- (id)localSourceForBundleIdentifier:(id)arg1 copyIfNecessary:(BOOL)arg2 error:(id )arg3;
- (id)localSourceForBundleIdentifier:(id)arg1 error:(id )arg2;
- (id)allSourcesForBundleIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)setLocalDeviceSourceUUID:(id)arg1 bundleIdentifier:(id)arg2 error:(id )arg3;
- (BOOL)updateCurrentDeviceNameWithError:(id )arg1;
- (void)dealloc;
- (id)init;
- (id)initWithProfile:(id)arg1;

@end
