//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CRKCloudRemoteDelta, CRKCloudZoneSyncEngine, NSError;

@protocol CRKCloudZoneSyncDelegate
- (void)didReceiveCloudError:(NSError *)arg1 fromZoneSyncEngine:(CRKCloudZoneSyncEngine *)arg2;
- (void)processRemoteDelta:(CRKCloudRemoteDelta *)arg1 fromZoneSyncEngine:(CRKCloudZoneSyncEngine *)arg2;
@end

