//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFTextField-Protocol.h>

@class WFVariableEditingContext, WFVariableString;

@protocol WFTextTokenField <WFTextField>
@property(nonatomic) NSRange selectedRange;
@property(copy, nonatomic) WFVariableString *variableString;
- (void)beginEditingWithContext:(WFVariableEditingContext *)arg1;
- (void)defaultPaste:(id)arg1;
- (void)defaultCopy:(id)arg1;
- (void)defaultCut:(id)arg1;
@end

