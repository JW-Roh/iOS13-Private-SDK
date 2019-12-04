//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HIDDevice, HIDManager, NSArray, NSString;

@interface HIDDisplayInterface : NSObject
{
    HIDManager *_manager;
    HIDDevice *_deviceRef;
    NSString *_containerID;
    unsigned long long _registryID;
}

@property(readonly) unsigned long long registryID; // @synthesize registryID=_registryID;
@property(readonly) NSString *containerID; // @synthesize containerID=_containerID;
@property(readonly) NSArray *capabilities;
- (_Bool)extract:(id)arg1 error:(id *)arg2;
- (_Bool)commit:(id)arg1 error:(id *)arg2;
- (void)setDevice:(id)arg1;
- (id)device;
- (id)getHIDDevices;
- (id)getHIDDevicesForMatching:(id)arg1;
- (id)getDeviceElements:(id)arg1;
- (_Bool)hasMatchingContainerID:(id)arg1 containerID:(id)arg2;
- (id)extractContainerIDFromService:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithMatching:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (id)initWithContainerID:(id)arg1;
- (id)description;

@end
