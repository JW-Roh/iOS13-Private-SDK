//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPCPlayerPathCache : NSObject
{
    NSMutableDictionary *_playerPathResolutions;
    NSMutableDictionary *_playerPathObservers;
    NSMutableDictionary *_endpointObservers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

+ (id)sharedCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) NSMutableDictionary *endpointObservers; // @synthesize endpointObservers=_endpointObservers;
@property(readonly, nonatomic) NSMutableDictionary *playerPathObservers; // @synthesize playerPathObservers=_playerPathObservers;
@property(readonly, nonatomic) NSMutableDictionary *playerPathResolutions; // @synthesize playerPathResolutions=_playerPathResolutions;
- (void)_onQueue_registerForEndpointChangeWithUnresolvedPlayerPath:(id)arg1;
- (void)_onQueue_registerForInvalidationWithUnresolvedPlayerPath:(id)arg1 invalidationPlayerPath:(void *)arg2;
- (id)resolvedPlayerPathForPlayerPath:(id)arg1;
- (id)observationTokenDescriptionForPlayerPath:(id)arg1;
- (void)dealloc;
- (id)_init;

@end
