//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError;

@protocol WFOutOfProcessWorkflowControllerHost <NSObject>
- (void)workflowDidFinishRunningWithError:(NSError *)arg1 cancelled:(BOOL)arg2;
- (void)workflowDidStart;
@end
