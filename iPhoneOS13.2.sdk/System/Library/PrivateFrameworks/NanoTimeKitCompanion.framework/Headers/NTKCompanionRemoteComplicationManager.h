//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKComplicationCollectionObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKRemoteComplicationProvider-Protocol.h>

@class CLKDevice, NSDictionary, NSMutableDictionary, NSString, NTKComplicationCollection;
@protocol OS_dispatch_queue;

@interface NTKCompanionRemoteComplicationManager : NSObject <NTKComplicationCollectionObserver, NTKRemoteComplicationProvider>
{
    NTKComplicationCollection *_remoteComplications;
    NSDictionary *_installedComplications;
    NSMutableDictionary *_syncedComplications;
    CLKDevice *_device;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSMutableDictionary *syncedComplications; // @synthesize syncedComplications=_syncedComplications;
@property(retain, nonatomic) NSDictionary *installedComplications; // @synthesize installedComplications=_installedComplications;
@property(retain, nonatomic) NTKComplicationCollection *remoteComplications; // @synthesize remoteComplications=_remoteComplications;
- (void)complicationCollection:(id)arg1 didRemoveSampleTemplatesForClient:(id)arg2;
- (void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2;
- (void)complicationCollectionDidLoad:(id)arg1;
- (id)localizedAppNameForClientIdentifier:(id)arg1;
- (_Bool)vendorExistsWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
- (void)enumerateEnabledVendorsForComplicationFamily:(long long)arg1 withBlock:(id /* block */)arg2;
- (id)_safeInstalledComplications;
- (id)_safeComplications;
- (void)_reloadApps;
- (void)_queue_reloadApps;
- (void)_fetchInstalledApps;
- (void)_appStartedInstall;
- (void)_activeDeviceChanged;
- (void)_load;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
