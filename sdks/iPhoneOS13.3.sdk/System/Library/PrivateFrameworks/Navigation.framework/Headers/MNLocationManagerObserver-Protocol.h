//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MNLocationManager, NSDate, NSError;

@protocol MNLocationManagerObserver <NSObject>
- (void)locationManager:(MNLocationManager *)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationManager:(MNLocationManager *)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationManagerDidResumeLocationUpdates:(MNLocationManager *)arg1;
- (void)locationManagerDidPauseLocationUpdates:(MNLocationManager *)arg1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(MNLocationManager *)arg1;
- (void)locationManagerDidReset:(MNLocationManager *)arg1;
- (void)locationManagerFailedToUpdateLocation:(MNLocationManager *)arg1 withError:(NSError *)arg2;
- (void)locationManagerUpdatedLocation:(MNLocationManager *)arg1;
@end

