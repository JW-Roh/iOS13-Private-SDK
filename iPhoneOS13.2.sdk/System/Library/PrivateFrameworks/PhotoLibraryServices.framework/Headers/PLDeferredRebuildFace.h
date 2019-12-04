//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLFaceRebuildDescription-Protocol.h>

@class NSString;

@interface PLDeferredRebuildFace : PLManagedObject <PLFaceRebuildDescription>
{
}

+ (id)deferredFacesWithAssetCloudGUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
@property(readonly, nonatomic, getter=isClusterRejected) _Bool clusterRejected;
@property(readonly, nonatomic, getter=isRepresentative) _Bool representative;
@property(readonly, nonatomic, getter=isManual) _Bool manual;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;

// Remaining properties
@property(copy, nonatomic) NSString *assetCloudGUID; // @dynamic assetCloudGUID;
@property(copy, nonatomic) NSString *assetUUID; // @dynamic assetUUID;
@property(nonatomic) double centerX; // @dynamic centerX;
@property(nonatomic) double centerY; // @dynamic centerY;
@property(nonatomic) int cloudNameSource; // @dynamic cloudNameSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) int faceAlgorithmVersion; // @dynamic faceAlgorithmVersion;
@property(copy, nonatomic) NSString *faceUUID; // @dynamic faceUUID;
@property(readonly) NSUInteger hash;
@property(nonatomic) int nameSource; // @dynamic nameSource;
@property(copy, nonatomic) NSString *personUUID; // @dynamic personUUID;
@property(nonatomic) _Bool rejected; // @dynamic rejected;
@property(nonatomic) double size; // @dynamic size;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *uuid; // @dynamic uuid;

@end
