//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSVolumeMonitor;

@protocol CSVolumeMonitorDelegate <NSObject>

@optional
- (void)CSVolumeMonitor:(CSVolumeMonitor *)arg1 didReceiveAlarmVolumeChanged:(float)arg2;
- (void)CSVolumeMonitor:(CSVolumeMonitor *)arg1 didReceiveMusicVolumeChanged:(float)arg2;
@end
