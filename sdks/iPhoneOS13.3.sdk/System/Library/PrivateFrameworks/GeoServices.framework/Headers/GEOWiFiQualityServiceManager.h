//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOWiFiQualityServiceProxy-Protocol.h>

@protocol GEOWiFiQualityServiceProxy;

@interface GEOWiFiQualityServiceManager : NSObject <GEOWiFiQualityServiceProxy>
{
    id <GEOWiFiQualityServiceProxy> _proxy;
}

+ (id)sharedManager;
+ (void)useProxyClass:(Class)arg1;
// - (void).cxx_destruct;
- (void)cancelRequestId:(id)arg1;
- (void)submitWiFiQualityTileLoadForKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3 auditToken:(id)arg4 completionQueue:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)submitWiFiQualityServiceRequest:(id)arg1 requestId:(id)arg2 auditToken:(id)arg3 completionQueue:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (id)init;

@end

