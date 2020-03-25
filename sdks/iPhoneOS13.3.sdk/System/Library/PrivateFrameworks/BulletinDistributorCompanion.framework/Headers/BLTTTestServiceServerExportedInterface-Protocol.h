//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BBBulletin, NSData, NSString;

@protocol BLTTTestServiceServerExportedInterface <NSObject>
- (void)removeSectionID:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)overriddenSettingsWithCompletion:(void (^)(NSArray *))arg1;
- (void)originalSettingsWithCompletion:(void (^)(NSArray *))arg1;
- (void)settingOverridesWithCompletion:(void (^)(NSArray *))arg1;
- (void)willAlertForSectionID:(NSString *)arg1 subtype:(long long)arg2 completion:(void (^)(BOOL))arg3;
- (void)disableStandaloneTestModeWithCompletion:(void (^)(void))arg1;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(NSUInteger)arg1 maximumSendDelay:(NSUInteger)arg2 minimumResponseDelay:(NSUInteger)arg3 maximumResponseDelay:(NSUInteger)arg4 completion:(void (^)(void))arg5;
- (void)getStandaloneTestModeEnabledWithCompletion:(void (^)(BOOL))arg1;
- (void)clearSectionInfoSentCacheWithCompletion:(void (^)(void))arg1;
- (void)spoolSectionInfoWithCompletion:(void (^)(void))arg1;
- (void)sendAllSectionInfoWithSpool:(BOOL)arg1 completion:(void (^)(void))arg2;
- (void)sendSectionInfoWithSectionID:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)addBulletin:(BBBulletin *)arg1 forFeed:(NSUInteger)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(NSData *)arg4 attachmentType:(long long)arg5 alwaysSend:(BOOL)arg6 completion:(void (^)(BOOL))arg7;
@end
