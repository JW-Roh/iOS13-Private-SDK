//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIMutableApplicationSceneSettings.h>

#import <SpotlightUI/SPUILegibilitySceneSettings-Protocol.h>

@class _UILegibilitySettings;

@interface SPUIMutableLegibilitySceneSettings : UIMutableApplicationSceneSettings <SPUILegibilitySceneSettings>
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3;
- (id)keyDescriptionForSetting:(long long)arg1;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;

@end

