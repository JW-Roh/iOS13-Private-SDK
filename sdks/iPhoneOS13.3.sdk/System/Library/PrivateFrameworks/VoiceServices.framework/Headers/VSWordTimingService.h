//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VSWordTimingService : NSObject
{
    NSDictionary *_wordTimings;
}

@property(retain, nonatomic) NSDictionary *wordTimings; // @synthesize wordTimings=_wordTimings;
// - (void).cxx_destruct;
- (id)estimatedTTSWordTimingForText:(id)arg1 withLanguage:(id)arg2 withGender:(long long)arg3;
- (id)timingPlistForLanguage:(id)arg1;
- (id)timingInfosFrom:(id)arg1 withText:(id)arg2;

@end

