//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MPVolumeController, NSString;

@protocol MPVolumeControllerDelegate <NSObject>

@optional
- (void)volumeController:(MPVolumeController *)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2;
- (void)volumeController:(MPVolumeController *)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeWarningStateDidChange:(long long)arg2;
- (void)volumeController:(MPVolumeController *)arg1 mutedStateDidChange:(BOOL)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeControlLabelDidChange:(NSString *)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeControlCapabilitiesDidChange:(unsigned int)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeControlAvailableDidChange:(BOOL)arg2;
@end

