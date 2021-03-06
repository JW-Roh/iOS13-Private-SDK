//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CLKVideoPlayerView;

@protocol CLKVideoPlayerViewDelegate <NSObject>
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(CLKVideoPlayerView *)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(CLKVideoPlayerView *)arg1;
- (void)videoPlayerViewDidBeginPlaying:(CLKVideoPlayerView *)arg1;

@optional
- (void)videoPlayerView:(CLKVideoPlayerView *)arg1 didFinishPrerolling:(BOOL)arg2;
- (void)videoPlayerViewWillBeginPlaying:(CLKVideoPlayerView *)arg1;
@end

