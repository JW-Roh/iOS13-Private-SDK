//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/SVVisibilityReporting-Protocol.h>

@protocol SVVideo;

@protocol SVVideoVisibilityManager <SVVisibilityReporting>
- (void)stopMonitoringVideo:(id <SVVideo>)arg1;
- (void)startMonitoringVideo:(id <SVVideo>)arg1;
@end

