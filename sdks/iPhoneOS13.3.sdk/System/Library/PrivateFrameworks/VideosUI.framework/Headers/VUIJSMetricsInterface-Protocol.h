//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/JSExport-Protocol.h>

@class NSDictionary;

@protocol VUIJSMetricsInterface <JSExport>
- (void)recordLogEvent:(NSDictionary *)arg1;
- (void)recordPerfEvent:(NSDictionary *)arg1;
- (void)recordEvent:(NSDictionary *)arg1;
@end

