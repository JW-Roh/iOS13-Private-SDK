//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, SFDevice;

@interface TRNearbyDevice : NSObject
{
    NSUInteger _supportedService;
    SFDevice *_representedDevice;
}

@property(readonly, nonatomic) SFDevice *representedDevice; // @synthesize representedDevice=_representedDevice;
@property(nonatomic) NSUInteger supportedService; // @synthesize supportedService=_supportedService;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSUUID *identifier;
- (id)initWithRepresentedDevice:(id)arg1 supportedService:(NSUInteger)arg2;
- (id)init;

@end

