//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/CBPeripheralDelegate-Protocol.h>

@class CBPeripheral, HDHealthServiceManager, HDProfile, HKDevice, NSMutableDictionary, NSString, NSUUID, _HKExpiringCompletionTimer;
@protocol OS_dispatch_queue;

@interface HDHealthPeripheral : NSObject <CBPeripheralDelegate>
{
    BOOL _privateMode;
    BOOL _discoveredServices;
    CBPeripheral *_cbPeripheral;
    NSString *_name;
    HKDevice *_deviceInformation;
    NSMutableDictionary *_healthServices;
    HDHealthServiceManager *_serviceManager;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_servicesQueue;
    _HKExpiringCompletionTimer *_privateModeTimer;
    NSMutableDictionary *_serviceForProperty;
    NSMutableDictionary *_propertiesAwaiting;
}

+ (id)implementedProperties;
@property(retain, nonatomic) NSMutableDictionary *propertiesAwaiting; // @synthesize propertiesAwaiting=_propertiesAwaiting;
@property(retain, nonatomic) NSMutableDictionary *serviceForProperty; // @synthesize serviceForProperty=_serviceForProperty;
@property(nonatomic) BOOL discoveredServices; // @synthesize discoveredServices=_discoveredServices;
@property(retain, nonatomic) _HKExpiringCompletionTimer *privateModeTimer; // @synthesize privateModeTimer=_privateModeTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *servicesQueue; // @synthesize servicesQueue=_servicesQueue;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) __weak HDHealthServiceManager *serviceManager; // @synthesize serviceManager=_serviceManager;
@property(retain, nonatomic) NSMutableDictionary *healthServices; // @synthesize healthServices=_healthServices;
@property(readonly, nonatomic) HKDevice *deviceInformation; // @synthesize deviceInformation=_deviceInformation;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CBPeripheral *cbPeripheral; // @synthesize cbPeripheral=_cbPeripheral;
// - (void).cxx_destruct;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)_queue_setDeviceInformation:(id)arg1;
- (void)extendPrivateModeLease;
- (void)_queue_handleTimerExpiration;
- (void)_queue_setupTimer;
@property(nonatomic) BOOL privateMode;
- (void)_queue_respond:(id)arg1 forProperty:(id)arg2 withError:(id)arg3;
- (BOOL)_queue_addPropertyHandler:(id /* CDUnknownBlockType */)arg1 forProperty:(id)arg2;
- (void)service:(id)arg1 didReadProperty:(id)arg2 value:(id)arg3 error:(id)arg4;
- (void)_queue_startReadProperty:(id)arg1;
- (void)getProperty:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)writeCharacteristic:(id)arg1 expectResponse:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)performOperation:(id)arg1 withParameters:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)disconnectServices;
- (id)healthServiceForType:(long long)arg1;
- (BOOL)hasServiceWithUUID:(id)arg1;
- (void)addHealthService:(id)arg1;
- (void)discoverServices;
- (BOOL)updateCBPeripheral:(id)arg1;
@property(readonly) NSString *stateDescription;
@property(readonly) long long state;
@property(readonly, nonatomic) NSUUID *identifier;
- (id)initWithCBPeripheral:(id)arg1 name:(id)arg2 serviceManager:(id)arg3 profile:(id)arg4;

@end

