//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFACEAction.h>

@interface WFACESetSettingAction : WFACEAction
{
}

- (void)constructAceCommandWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)populateFloatCommand:(id)arg1;
- (void)populateBoolCommand:(id)arg1;
- (id)settingValueKey;
- (Class)commandClass;
- (void)finishRunningWithResult:(id)arg1 error:(id)arg2;

@end
