//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetricsKit/MTEnvironmentUIKitDelegate.h>

#import <MetricsKit/MTEnvironmentDelegate-Protocol.h>

@class NSString;

@interface MTEnvironmentUIKitStoreDelegate : MTEnvironmentUIKitDelegate <MTEnvironmentDelegate>
{
}

+ (id)_ams_cookiesForURL:(id)arg1;
- (id)_activeItunesAccount;
- (id)_connectionType;
- (id)_userType;
- (id)userType;
- (id)userAgent;
- (id)storeFrontHeader;
- (id)osBuildNumber;
- (id)hardwareModel;
- (id)dsId;
- (id)_cookies;
- (id)cookies;
- (id)connectionType;
- (id)capacitySystemAvailable;
- (id)capacitySystem;
- (id)capacityDisk;
- (id)capacityDataAvailable;
- (id)capacityData;
- (id)_diskUsage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
