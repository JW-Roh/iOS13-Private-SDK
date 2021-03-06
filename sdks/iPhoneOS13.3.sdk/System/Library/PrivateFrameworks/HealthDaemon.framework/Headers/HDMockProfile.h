//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDaemon, HDDataCollectionManager, HDDeviceManager, HDSourceManager, HDUserCharacteristicsManager;
@protocol HDHealthDaemon, HDHealthDatabase;

@interface HDMockProfile : NSObject
{
    id <HDHealthDatabase> healthDatabase;
    HDSourceManager *healthSourceManager;
    HDDeviceManager *healthDeviceManager;
    HDDaemon *daemon;
    id <HDHealthDaemon> _healthDaemon;
    HDDataCollectionManager *_dataCollectionManager;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
}

@property(retain, nonatomic) HDUserCharacteristicsManager *userCharacteristicsManager; // @synthesize userCharacteristicsManager=_userCharacteristicsManager;
@property(retain, nonatomic) HDDataCollectionManager *dataCollectionManager; // @synthesize dataCollectionManager=_dataCollectionManager;
@property(nonatomic) __weak id <HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property(nonatomic) __weak HDDaemon *daemon; // @synthesize daemon;
@property(retain, nonatomic) HDDeviceManager *healthDeviceManager; // @synthesize healthDeviceManager;
@property(retain, nonatomic) HDSourceManager *healthSourceManager; // @synthesize healthSourceManager;
@property(retain, nonatomic) id <HDHealthDatabase> healthDatabase; // @synthesize healthDatabase;
// - (void).cxx_destruct;

@end

