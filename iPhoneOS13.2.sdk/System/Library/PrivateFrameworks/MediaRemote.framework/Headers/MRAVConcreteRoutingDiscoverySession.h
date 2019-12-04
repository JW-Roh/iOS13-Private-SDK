//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRAVRoutingDiscoverySession.h>

@class AVOutputDeviceDiscoverySession, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    unsigned int _targetAudioSessionID;
    NSString *_routingContextUID;
    NSArray *_availableOutputDevices;
    _Bool _scheduledAvailableEndpointsAndOutputDevicesReload;
    int _airplayActiveNotificationToken;
    _Bool _isLocalDeviceBeingAirplayedTo;
}

- (void)_scheduleAvailableEndpointsAndOutputDevicesReload;
- (void)_onQueue_reloadAvailableOutputDevices;
- (void)_availableOutputDevicesDidChangeNotification:(id)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (id)routingContextUID;
- (void)setTargetAudioSessionID:(unsigned int)arg1;
- (unsigned int)targetAudioSessionID;
- (void)setDiscoveryMode:(unsigned int)arg1;
- (unsigned int)discoveryMode;
@property(readonly, nonatomic) NSArray *availableOutputDevices; // @dynamic availableOutputDevices;
@property(readonly, nonatomic) NSArray *availableEndpoints; // @dynamic availableEndpoints;
- (_Bool)devicePresenceDetected;
- (unsigned int)endpointFeatures;
- (void)dealloc;
- (id)initWithEndpointFeatures:(unsigned int)arg1;

@end
