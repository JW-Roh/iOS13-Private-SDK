//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol NUDevice, NUDisplay;

@interface NUPlatform : NSObject
{
    BOOL _supportsAutomaticGraphicsSwitching;
    BOOL _hasHeadlessGPU;
    BOOL _hasExtendedColorDisplay;
    NSString *_name;
    NSArray *_devices;
    id <NUDevice> _integratedDevice;
    id <NUDevice> _discreteDevice;
    id <NUDevice> _headlessDevice;
    id <NUDevice> _cpuDevice;
}

+ (id)currentPlatform;
@property(nonatomic) BOOL hasExtendedColorDisplay; // @synthesize hasExtendedColorDisplay=_hasExtendedColorDisplay;
@property(retain, nonatomic) id <NUDevice> cpuDevice; // @synthesize cpuDevice=_cpuDevice;
@property(retain, nonatomic) id <NUDevice> headlessDevice; // @synthesize headlessDevice=_headlessDevice;
@property(nonatomic) BOOL hasHeadlessGPU; // @synthesize hasHeadlessGPU=_hasHeadlessGPU;
@property(retain, nonatomic) id <NUDevice> discreteDevice; // @synthesize discreteDevice=_discreteDevice;
@property(retain, nonatomic) id <NUDevice> integratedDevice; // @synthesize integratedDevice=_integratedDevice;
@property(nonatomic) BOOL supportsAutomaticGraphicsSwitching; // @synthesize supportsAutomaticGraphicsSwitching=_supportsAutomaticGraphicsSwitching;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL supportsLiveVideoRendering;
@property(readonly, nonatomic) BOOL defaultSupportsLiveVideoRendering;
- (id)displayWithIdentifier:(id)arg1;
@property(readonly, nonatomic) id <NUDisplay> mainDisplay;
@property(readonly, nonatomic) NSArray *displays;
- (void)clearCaches;
- (id)deviceForDisplay:(id)arg1;
@property(readonly, nonatomic) id <NUDevice> mainDevice;
- (id)debugDescription;
- (id)description;

@end

