//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

#import <ActionKit/WFActionEventObserver-Protocol.h>

@class NSArray, WFAction;

@interface WFLightroomPresetPickerParameter : WFEnumerationParameter <WFActionEventObserver>
{
    NSArray *_possibleStates;
    WFAction *_action;
}

+ (id)presetsByGroup;
@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (BOOL)isHidden;
- (void)possibleStatesDidChange;
- (Class)singleStateClass;

@end

