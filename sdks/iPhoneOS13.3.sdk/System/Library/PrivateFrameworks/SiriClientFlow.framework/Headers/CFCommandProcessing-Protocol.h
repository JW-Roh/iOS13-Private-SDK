//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SABaseCommand;

@protocol CFCommandProcessing <NSObject>
- (void)isDeviceLockedWithPasscodeWithCompletion:(void (^)(BOOL))arg1;
- (void)handleCommand:(SABaseCommand *)arg1 reply:(void (^)(SABaseCommand *))arg2;
- (void)handleOneWayCommand:(SABaseCommand *)arg1;
@end

