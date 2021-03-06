//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFRepeatAction.h>

@interface WFForEachRepeatAction : WFRepeatAction
{
    NSUInteger _numberOfLoops;
}

- (NSUInteger)numberOfLoops;
- (id)providedVariableNames;
- (id)itemVariableNameWithScopeLevel:(NSUInteger)arg1;
- (id)itemVariableName;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (void)runWithInput:(id)arg1 error:(id )arg2;
- (id)repeatCollectionWithVariableSource:(id)arg1;
- (void)setRepeatCollection:(id)arg1 withVariableSource:(id)arg2;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (BOOL)shouldRepeatWithVariableSource:(id)arg1;

@end

