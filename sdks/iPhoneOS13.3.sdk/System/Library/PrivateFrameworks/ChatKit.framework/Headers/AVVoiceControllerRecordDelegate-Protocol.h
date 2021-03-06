//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVVCAlertInformation, AVVCAudioBuffer, AVVoiceController, NSArray, NSDictionary, NSError;

@protocol AVVoiceControllerRecordDelegate <NSObject>

@optional
- (void)voiceControllerStreamInvalidated:(AVVoiceController *)arg1 forStream:(NSUInteger)arg2;
- (void)voiceControllerAudioCallback:(AVVoiceController *)arg1 forStream:(NSUInteger)arg2 buffer:(AVVCAudioBuffer *)arg3;
- (void)voiceControllerDidStopRecording:(AVVoiceController *)arg1 forStream:(NSUInteger)arg2 forReason:(long long)arg3;
- (void)voiceControllerDidStartRecording:(AVVoiceController *)arg1 forStream:(NSUInteger)arg2 successfully:(BOOL)arg3 error:(NSError *)arg4;
- (void)voiceControllerWirelessSplitterRouteAvailable:(BOOL)arg1 devices:(NSArray *)arg2;
- (void)voiceControllerLPCMRecordBufferAvailable:(AVVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;
- (void)voiceControllerRecordBufferAvailable:(AVVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;
- (void)voiceControllerDidSetAudioSessionActive:(AVVoiceController *)arg1 isActivated:(BOOL)arg2;
- (void)voiceControllerWillSetAudioSessionActive:(AVVoiceController *)arg1 willActivate:(BOOL)arg2;
- (void)voiceControllerMediaServicesWereReset:(AVVoiceController *)arg1;
- (void)voiceControllerMediaServicesWereLost:(AVVoiceController *)arg1;
- (void)voiceControllerEndRecordInterruption:(AVVoiceController *)arg1;
- (void)voiceControllerBeginRecordInterruption:(AVVoiceController *)arg1 withContext:(NSDictionary *)arg2;
- (void)voiceControllerBeginRecordInterruption:(AVVoiceController *)arg1;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(AVVoiceController *)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerDidFinishAlertPlayback:(AVVoiceController *)arg1 withSettings:(AVVCAlertInformation *)arg2 error:(NSError *)arg3;
- (void)voiceControllerDidFinishAlertPlayback:(AVVoiceController *)arg1 ofType:(int)arg2 error:(NSError *)arg3;
- (void)voiceControllerEncoderErrorDidOccur:(AVVoiceController *)arg1 error:(NSError *)arg2;
- (void)voiceControllerDidDetectEndpoint:(AVVoiceController *)arg1 ofType:(int)arg2 atTime:(double)arg3;
- (void)voiceControllerDidDetectEndpoint:(AVVoiceController *)arg1 ofType:(int)arg2;
- (void)voiceControllerDidDetectStartpoint:(AVVoiceController *)arg1;
- (void)voiceControllerDidStopRecording:(AVVoiceController *)arg1 forReason:(long long)arg2;
- (void)voiceControllerDidStartRecording:(AVVoiceController *)arg1 successfully:(BOOL)arg2 error:(NSError *)arg3;
- (void)voiceControllerDidStartRecording:(AVVoiceController *)arg1 successfully:(BOOL)arg2;
@end

