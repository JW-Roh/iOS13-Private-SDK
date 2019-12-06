//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIFeedbackGenerator.h"

@class NSString, _UIFeedback, _UIStatesFeedbackGeneratorConfiguration;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIStatesFeedbackGenerator : UIFeedbackGenerator
{
    BOOL _approachActivated;
    NSString *_currentState;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_playingContinuousFeedback;
}

+ (Class)_configurationClass;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback; // @synthesize playingContinuousFeedback=_playingContinuousFeedback;
@property(nonatomic, getter=_approachActivated, setter=_setApproachActivated:) BOOL approachActivated; // @synthesize approachActivated=_approachActivated;
@property(retain, nonatomic) NSString *currentState; // @synthesize currentState=_currentState;
// - (void).cxx_destruct;
- (id)_stats_key;
- (void)_stopPlayingContinuousFeedback;
- (void)transitionToState:(id)arg1 ended:(BOOL)arg2;
- (void)transitionToState:(id)arg1 updated:(double)arg2;
- (id)_configurationFromState:(id)arg1 toState:(id)arg2;
@property(readonly, nonatomic, getter=_statesConfiguration) _UIStatesFeedbackGeneratorConfiguration *statesConfiguration;
- (id)initWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
- (id)initWithStyle:(long long)arg1;

@end
