//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLSyncableObject-Protocol.h>

@class NSDate, NSSet, NSString;

@protocol PLSyncableAsset <NSObject, PLSyncableObject>
@property(readonly, nonatomic) BOOL hasAdjustmentsOrLegacyAdjustments;
@property(readonly, copy, nonatomic) NSString *syncedAdjustmentFingerprint;
@property(readonly, nonatomic) id faceAdjustmentVersion;
@property(readonly, copy, nonatomic) NSDate *dateForComparingAdjustmentVersions;
@property(readonly, nonatomic) BOOL faceDetectionComplete;
@property(readonly, nonatomic) long long height;
@property(readonly, nonatomic) long long width;
@property(retain, nonatomic) NSSet *detectedFaces;
@property(readonly, retain, nonatomic) NSString *cloudIdentifier;
- (NSString *)syncDescription;
- (void)markForNeedingFaceDetection;
@end

