//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUFeatureOnboarder.h>

@class HMHome;

@interface HUHomeFeatureOnboarder : HUFeatureOnboarder
{
    HMHome *_home;
}

@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (id)getPostProcessingFlowsForResults:(id)arg1;
- (id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)arg1 usageOptions:(id)arg2;
- (id)initWithGroupedFeatures:(id)arg1 home:(id)arg2 usageOptions:(id)arg3;
- (id)initWithFeatures:(id)arg1 home:(id)arg2 usageOptions:(id)arg3;

@end

