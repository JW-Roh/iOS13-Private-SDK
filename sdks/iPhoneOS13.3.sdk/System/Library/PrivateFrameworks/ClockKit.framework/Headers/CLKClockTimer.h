//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableDictionary;
@protocol OS_dispatch_source;

@interface CLKClockTimer : NSObject
{
    CADisplayLink *_displayLink;
    CADisplayLink *_30fpsDisplayLink;
    CADisplayLink *_nativeDisplayLink;
    NSMutableDictionary *_minuteHandlers;
    NSMutableDictionary *_secondHandlers;
    NSMutableDictionary *_subsecondHandlers;
    NSMutableDictionary *_30fpsHandlers;
    NSMutableDictionary *_nativeHandlers;
    NSUInteger _nextToken;
    long long _lastHour;
    long long _lastMinute;
    long long _lastSecond;
    double _lastSubsecondFraction;
    BOOL _permittedToRun;
    NSObject<OS_dispatch_source> *_signalSource;
    NSMutableDictionary *_identificationLogsByToken;
}

+ (void)_forceDate:(id)arg1;
+ (id)now;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_dumpIndentificationLogs;
- (void)_updateDisplayLinkFrameIntervalAccuracyIfNecessaryForTimePastMinuteInSeconds:(double)arg1;
- (void)pause;
- (void)unpause;
- (void)_onNativeDisplayLink:(id)arg1;
- (void)_on30fpsDisplayLink:(id)arg1;
- (void)_handleTimePassed;
- (void)_onDisplayLink:(id)arg1;
- (void)_maybeClearLastSeenTimeComponents;
- (void)_updateNativeDisplayLink;
- (void)_update30fpsDisplayLink;
- (void)_updateDisplayLink;
- (void)_removeToken:(NSNumber *)arg1;
- (NSNumber *)_nextTokenWithIdentificationLog:(id /* CDUnknownBlockType */)arg1;
- (void)stopDisplayNativeUpdatesForToken:(NSNumber *)arg1;
- (NSNumber *)startDisplayNativeUpdatesWithHandler:(id /* CDUnknownBlockType */)arg1 identificationLog:(id /* CDUnknownBlockType */)arg2;
- (void)stop30fpsUpdatesForToken:(NSNumber *)arg1;
- (NSNumber *)start30fpsUpdatesWithHandler:(id /* CDUnknownBlockType */)arg1 identificationLog:(id /* CDUnknownBlockType */)arg2;
- (void)stopSubsecondUpdatesForToken:(id)arg1;
- (NSNumber *)startSubsecondUpdatesWithHandler:(id /* CDUnknownBlockType */)arg1 identificationLog:(id /* CDUnknownBlockType */)arg2;
- (NSNumber *)startSubsecondUpdatesWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)stopSecondUpdatesForToken:(NSNumber *)arg1;
- (NSNumber *)startSecondUpdatesWithHandler:(id /* CDUnknownBlockType */)arg1 identificationLog:(id /* CDUnknownBlockType */)arg2;
- (NSNumber *)startSecondUpdatesWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)stopMinuteUpdatesForToken:(NSNumber *)arg1;
- (NSNumber *)startMinuteUpdatesWithHandler:(id /* CDUnknownBlockType */)arg1 identificationLog:(id /* CDUnknownBlockType */)arg2;
- (NSNumber *)startMinuteUpdatesWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)init;

@end

