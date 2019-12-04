//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class AVCAudioStream, NSArray, NSData, NSError;

@protocol AVCAudioStreamDelegate 
- (void)stream:(AVCAudioStream *)arg1 didStart:(_Bool)arg2 error:(NSError *)arg3;

@optional
- (void)stream:(AVCAudioStream *)arg1 updateOutputFrequencyLevel:(NSData *)arg2;
- (void)stream:(AVCAudioStream *)arg1 updateInputFrequencyLevel:(NSData *)arg2;
- (void)streamDidServerDie:(AVCAudioStream *)arg1;
- (void)stream:(AVCAudioStream *)arg1 didReceiveRTCPPackets:(NSArray *)arg2;
- (void)stream:(AVCAudioStream *)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)streamDidRTCPTimeOut:(AVCAudioStream *)arg1;
- (void)streamDidRTPTimeOut:(AVCAudioStream *)arg1;
- (void)stream:(AVCAudioStream *)arg1 didStartSynchronizer:(_Bool)arg2 error:(NSError *)arg3;
- (void)streamDidInterruptionEnd:(AVCAudioStream *)arg1;
- (void)streamDidInterruptionBegin:(AVCAudioStream *)arg1;
- (void)stream:(AVCAudioStream *)arg1 didResume:(_Bool)arg2 error:(NSError *)arg3;
- (void)stream:(AVCAudioStream *)arg1 didPause:(_Bool)arg2 error:(NSError *)arg3;
- (void)streamDidStop:(AVCAudioStream *)arg1;
@end
