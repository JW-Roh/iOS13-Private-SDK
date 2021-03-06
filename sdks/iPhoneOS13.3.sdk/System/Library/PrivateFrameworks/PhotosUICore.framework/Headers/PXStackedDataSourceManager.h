//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXDataSectionManagerChangeObserver-Protocol.h>

@class NSArray;

@interface PXStackedDataSourceManager : PXSectionedDataSourceManager <PXDataSectionManagerChangeObserver>
{
    BOOL _initialDataSourceCreated;
    NSArray *_dataSectionManagers;
}

@property(nonatomic) BOOL initialDataSourceCreated; // @synthesize initialDataSourceCreated=_initialDataSourceCreated;
@property(copy, nonatomic) NSArray *dataSectionManagers; // @synthesize dataSectionManagers=_dataSectionManagers;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (id)createInitialDataSource;
- (void)_updateDataSourceWithSectionChanges:(id)arg1 itemChanges:(id)arg2;
- (id)_newDataSource;
- (void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg1;
- (void)_registerAsChangeObserverForDataSectionManagers:(id)arg1;
- (id)initWithDataSectionManagers:(id)arg1;

@end

