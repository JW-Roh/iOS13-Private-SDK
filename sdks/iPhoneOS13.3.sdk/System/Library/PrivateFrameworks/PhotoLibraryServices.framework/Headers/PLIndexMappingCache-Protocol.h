//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, PLContainerChangeNotification;
@protocol NSObject><NSCopying;

@protocol PLIndexMappingCache <NSObject>
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> cachedIndexMapState;
- (Class)derivedChangeNotificationClass;
- (BOOL)mappedDataSourceChanged:(PLContainerChangeNotification *)arg1 remoteNotificationData:(NSDictionary *)arg2;

@optional
- (id)currentStateForChange;
@end

