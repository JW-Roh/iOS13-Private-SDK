//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIFeedbackGenerator.h"

@class _UIKeyboardFeedbackGeneratorConfiguration;

@interface _UIKeyboardFeedbackGenerator : UIFeedbackGenerator
{
    double _lastTypedKeyTimestamp;
}

+ (Class)_configurationClass;
@property(nonatomic, getter=_lastTypedKeyTimestamp, setter=_setLastTypedKeyTimestamp:) double lastTypedKeyTimestamp; // @synthesize lastTypedKeyTimestamp=_lastTypedKeyTimestamp;
- (id)_stats_key;
- (double)_autoDeactivationTimeout;
- (void)_playFeedbackForActionType:(long long)arg1 withCustomization:(id /* CDUnknownBlockType */)arg2;
- (id)_feedbackWithUpdatedVolume:(id)arg1;
- (float)scaleVolumeSlow:(float)arg1 fast:(float)arg2 timeSpan:(double)arg3;
- (void)actionOccurred:(long long)arg1;
- (void)_activated;
@property(readonly, nonatomic, getter=_keyboardConfiguration) _UIKeyboardFeedbackGeneratorConfiguration *keyboardConfiguration;

@end

