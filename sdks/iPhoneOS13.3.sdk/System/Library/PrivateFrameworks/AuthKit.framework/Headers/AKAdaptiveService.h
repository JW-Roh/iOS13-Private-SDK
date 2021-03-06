//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSXPCInterface, NSXPCListener;

@interface AKAdaptiveService : NSObject <NSXPCListenerDelegate>
{
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    NSXPCListener *_listener;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
}

@property(copy) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
// - (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerEndpoint;
- (void)resume;
- (void)dealloc;
- (id)initWithInterface:(id)arg1 weakObject:(id)arg2;
- (id)initWithInterface:(id)arg1 strongObject:(id)arg2;
- (id)_initWithInterface:(id)arg1 object:(id)arg2;

@end

