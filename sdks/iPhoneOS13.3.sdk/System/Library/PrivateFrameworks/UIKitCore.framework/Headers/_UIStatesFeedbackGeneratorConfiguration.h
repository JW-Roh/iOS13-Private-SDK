//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary, NSString;

@interface _UIStatesFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration
{
    NSDictionary *_stateChangeConfigurations;
    NSString *_initialState;
}

+ (id)keyFromState:(id)arg1 toState:(id)arg2;
@property(retain, nonatomic) NSString *initialState; // @synthesize initialState=_initialState;
// - (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *stateChangeConfigurations; // @synthesize stateChangeConfigurations=_stateChangeConfigurations;
- (id)feedbackKeyPaths;
// - (id)copyWithZone:(_NSZone )arg1;

@end

