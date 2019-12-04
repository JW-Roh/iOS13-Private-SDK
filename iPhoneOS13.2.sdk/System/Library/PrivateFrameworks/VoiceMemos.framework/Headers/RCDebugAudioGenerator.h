//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface RCDebugAudioGenerator : NSObject
{
    NSURL *_outputURL;
    double _duration;
    double _intervalBetweenPeaks;
    NSObject<OS_dispatch_queue> *_completionQueue;
    id /* block */ _generateCompletionHandler;
    NSDictionary *_outputSettings;
    id /* block */ _curveFunction;
}

+ (id /* block */)_defaultCurveFunction;
+ (id)_defaultOutputSettings;
@property(readonly, nonatomic) id /* block */ curveFunction; // @synthesize curveFunction=_curveFunction;
@property(readonly, nonatomic) NSDictionary *outputSettings; // @synthesize outputSettings=_outputSettings;
@property(readonly, nonatomic) id /* block */ generateCompletionHandler; // @synthesize generateCompletionHandler=_generateCompletionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(readonly, nonatomic) double intervalBetweenPeaks; // @synthesize intervalBetweenPeaks=_intervalBetweenPeaks;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
- (id)_generateLPCMAudioSamplesWithDuration:(double)arg1 curveFunction:(id /* block */)arg2 samplesPerSecond:(double)arg3 intervalBetweenPeaks:(double)arg4;
- (void)_onBackgroundQueueGenerateAudio;
- (void)_onQueueGenerateFinished;
- (void)_onQueueGenerateFailedWithError:(id)arg1;
- (_Bool)startWithCompletionHandler:(id /* block */)arg1;
- (id)initWithOutputURL:(id)arg1 duration:(double)arg2 intervalBetweenPeaks:(double)arg3;

@end
