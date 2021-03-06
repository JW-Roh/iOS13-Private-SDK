//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError;

@protocol SVVideoEventTracker <NSObject>

@optional
- (void)tappedToToggleControls;
- (void)exitedFullscreen;
- (void)enteredFullscreen;
- (void)tappedDiscoverMore;
- (void)tappedAdvance;
- (void)tappedNowPlaying;
- (void)tappedCallToAction;
- (void)muteStateChanged:(BOOL)arg1;
- (void)impressionQuartilePassed:(NSUInteger)arg1;
- (void)impressionThresholdPassed:(double)arg1;
- (void)playbackFailedWithError:(NSError *)arg1;
- (void)playbackFinished;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStarted;
- (void)playbackInitiated;
- (void)didDisappear;
- (void)didAppear;
@end

