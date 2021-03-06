//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection, NSXPCInterface;
@protocol OS_dispatch_queue;

@interface SGDaemonConnection : NSObject
{
    NSString *_machServiceName;
    NSXPCInterface *_xpcInterface;
    NSObject<OS_dispatch_queue> *_connectLock;
    NSMutableArray *_abortBlocks;
    struct _opaque_pthread_mutex_t _abortLock;
    NSXPCConnection *_xpcConnection;
}

+ (void)_useSyncXPCWithBlock:(id /* CDUnknownBlockType */)arg1;
+ (BOOL)usingSyncXPC;
// - (void).cxx_destruct;
- (void)addConnectionInterruptedHandler:(id /* CDUnknownBlockType */)arg1;
- (id)waitUntilReturn:(id /* CDUnknownBlockType */)arg1 withTimeout:(double)arg2 error:(id )arg3;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)xpcConnection;
- (void)_callAbortBlocks;
- (void)_connectToServer;
- (void)disconnect;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1 xpcInterface:(id)arg2;

@end

