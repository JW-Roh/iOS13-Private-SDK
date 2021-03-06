//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricMeasurement/OSDeviceDelegate-Protocol.h>

@class NSMutableDictionary, OSActivityStream;
@protocol MXMProbeableDevice;

@interface MXMOSLogDeviceStore_Internal : NSObject <OSDeviceDelegate>
{
    OSActivityStream *_stream;
    id <MXMProbeableDevice> _hostDevice;
    NSMutableDictionary *_devices;
}

+ (id)shared;
@property(readonly, nonatomic) NSMutableDictionary *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic) id <MXMProbeableDevice> hostDevice; // @synthesize hostDevice=_hostDevice;
// - (void).cxx_destruct;
- (BOOL)activityStream:(id)arg1 deviceUDID:(id)arg2 deviceID:(id)arg3 status:(long long)arg4 error:(id)arg5;
- (id)init;

@end

