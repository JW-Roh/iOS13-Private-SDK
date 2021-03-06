//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLLibraryClustererDelegate-Protocol.h>

@class NSDateFormatter, NSMutableArray, NSMutableSet, PLFrequentLocationManager, PLLocalCreationDateCreator;
@protocol PLMomentGenerationDataManagement;

@interface PLAssetCollectionGenerator : NSObject <PLLibraryClustererDelegate>
{
    id <PLMomentGenerationDataManagement> _manager;
    PLFrequentLocationManager *_frequentLocationManager;
    PLLocalCreationDateCreator *_localCreationDateCreator;
    NSMutableSet *_usedMomentObjectIDs;
    NSMutableSet *_insertedOrUpdatedMoments;
    NSMutableArray *_momentsFromAssetClusters;
    NSDateFormatter *_debugDateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *debugDateFormatter; // @synthesize debugDateFormatter=_debugDateFormatter;
@property(retain, nonatomic) NSMutableArray *momentsFromAssetClusters; // @synthesize momentsFromAssetClusters=_momentsFromAssetClusters;
@property(retain, nonatomic) NSMutableSet *insertedOrUpdatedMoments; // @synthesize insertedOrUpdatedMoments=_insertedOrUpdatedMoments;
@property(retain, nonatomic) NSMutableSet *usedMomentObjectIDs; // @synthesize usedMomentObjectIDs=_usedMomentObjectIDs;
@property(retain, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator; // @synthesize localCreationDateCreator=_localCreationDateCreator;
@property(retain, nonatomic) PLFrequentLocationManager *frequentLocationManager; // @synthesize frequentLocationManager=_frequentLocationManager;
@property(nonatomic) __weak id <PLMomentGenerationDataManagement> manager; // @synthesize manager=_manager;
// - (void).cxx_destruct;
- (id)libraryClusterer:(id)arg1 createYearListForMoments:(id)arg2 year:(long long)arg3;
- (id)libraryClusterer:(id)arg1 createMonthListForMoments:(id)arg2 month:(long long)arg3 year:(long long)arg4;
- (id)libraryClusterer:(id)arg1 createMomentClustersForAssetClusters:(id)arg2 existingMomentDataForAssets:(id)arg3;
- (void)logRoutineInformation;
- (void)_refreshYearListWithMoments:(id)arg1;
- (void)_refreshMonthList:(id)arg1;
- (void)_cleanUpMoment:(id)arg1;
- (id)_createMonthListOrAppendMomentsForMonth:(long long)arg1 year:(long long)arg2 moments:(id)arg3;
- (id)_createYearListOrAppendMomentsForYear:(long long)arg1 moments:(id)arg2;
- (id)_createMomentOrUpdateForAssetCluster:(id)arg1 existingMomentDataForAssets:(id)arg2;
- (id)_processMomentsCollectionsYearsWithAssets:(id)arg1 affectedMoments:(id)arg2 processMonthsAndYears:(BOOL)arg3;
- (id)processMomentsWithAssets:(id)arg1 affectedMoments:(id)arg2 processMonthsAndYears:(BOOL)arg3;
- (id)initWithDataManager:(id)arg1 frequentLocationManager:(id)arg2 localCreationDateCreator:(id)arg3;

@end

