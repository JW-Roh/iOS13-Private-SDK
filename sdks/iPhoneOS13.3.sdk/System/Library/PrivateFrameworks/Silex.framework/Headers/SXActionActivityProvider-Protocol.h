//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SXAction, SXActionActivityGroup, SXActionPreviewActivity;

@protocol SXActionActivityProvider <NSObject>
- (id <SXActionActivityGroup>)activityGroupForAction:(id <SXAction>)arg1;

@optional
- (id <SXActionPreviewActivity>)previewActivityForAction:(id <SXAction>)arg1;
@end

