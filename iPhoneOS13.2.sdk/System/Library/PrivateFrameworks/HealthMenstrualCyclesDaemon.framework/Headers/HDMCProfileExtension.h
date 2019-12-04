//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCyclesDaemon/HDProfileExtension-Protocol.h>

@class HDMCAnalysisManager, HDMCAnalyticsManager, HDMCNotificationManager, HDProfile, HKMCSettingsManager, NSString;

@interface HDMCProfileExtension : NSObject <HDProfileExtension>
{
    HDMCAnalyticsManager *_analyticsManager;
    HDProfile *_profile;
    HDMCAnalysisManager *_analysisManager;
    HDMCNotificationManager *_notificationManager;
    HKMCSettingsManager *_settingsManager;
}

@property(readonly, nonatomic) HKMCSettingsManager *settingsManager; // @synthesize settingsManager=_settingsManager;
@property(readonly, nonatomic) HDMCNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(retain, nonatomic) HDMCAnalysisManager *analysisManager; // @synthesize analysisManager=_analysisManager;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
