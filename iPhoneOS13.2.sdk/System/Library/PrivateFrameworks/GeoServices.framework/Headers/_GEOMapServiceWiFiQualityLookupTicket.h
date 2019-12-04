//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOAbstractTicket.h>

#import <GeoServices/GEOMapServiceWiFiQualityLocationSearchTicket-Protocol.h>
#import <GeoServices/GEOMapServiceWiFiQualityNetworkSearchTicket-Protocol.h>
#import <GeoServices/GEOMapServiceWiFiQualityTileLoadTicket-Protocol.h>

@class GEOWiFiQualityServiceRequest, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceWiFiQualityLookupTicket : GEOAbstractTicket <GEOMapServiceWiFiQualityNetworkSearchTicket, GEOMapServiceWiFiQualityLocationSearchTicket, GEOMapServiceWiFiQualityTileLoadTicket>
{
    GEOWiFiQualityServiceRequest *_request;
    NSString *_tileKey;
    NSString *_eTag;
    NSString *_requestID;
}

@property(readonly, nonatomic) CDStruct_d1a7ebee dataRequestKind;
- (void)_cancel;
- (void)cancelTileLoad;
- (void)submitTileLoadWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelLocationSearch;
- (void)submitLocationSearchWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelNetworkSearch;
- (void)submitNetworkSearchWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithTileKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3;
- (id)initWithRequest:(id)arg1 requestId:(id)arg2;
- (id)initWithRequestID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
