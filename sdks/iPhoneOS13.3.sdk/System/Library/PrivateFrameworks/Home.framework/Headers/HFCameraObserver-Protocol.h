//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HMCameraSnapshotControlDelegate-Protocol.h>
#import <Home/HMCameraStreamControlDelegate-Protocol.h>
#import <Home/HMCameraUserSettingsDelegate-Protocol.h>

@class HMCameraStream, HMCameraStreamControl, NSError;

@protocol HFCameraObserver <HMCameraSnapshotControlDelegate, HMCameraStreamControlDelegate, HMCameraUserSettingsDelegate>

@optional
- (void)cameraStream:(HMCameraStream *)arg1 didUpdateAudioStreamSettingWithError:(NSError *)arg2;
- (void)cameraStreamControlDidUpdateManagerState:(HMCameraStreamControl *)arg1;
- (void)cameraStreamControlDidUpdateStreamState:(HMCameraStreamControl *)arg1;
@end

