//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ARDisplayDeviceInterface : NSObject
{
}

+ (void)updateHME:(id)arg1 callback:(id /* block */)arg2;
+ (void)updateHME:(id)arg1 withConfigurationCallback:(id /* block */)arg2;
+ (_Bool)dictionariesEqual:(id)arg1 dictB:(id)arg2;
+ (id)stringHashFromDict:(id)arg1;
+ (void)processHMEExtension:(id)arg1 callback:(id /* block */)arg2;
+ (void)didUpdateConfig:(id)arg1;
+ (void)refreshDevice:(id /* block */)arg1;
+ (id)currentDisplayConfig;
+ (id)currentStatus;

@end
