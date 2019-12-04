//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection, NSXPCInterface;

@interface MSXPCService : NSObject
{
    NSLock *_lock;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCConnection *_connection;
    _Bool _shouldLaunchMobileMail;
}

+ (id)remoteProxyForXPCInterface:(id)arg1 shouldLaunchMobileMail:(_Bool)arg2 connectionErrorHandler:(id /* block */)arg3;
+ (id)remoteProxyForXPCInterface:(id)arg1 connectionErrorHandler:(id /* block */)arg2;
@property(nonatomic) _Bool shouldLaunchMobileMail; // @synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)remoteObjectProxy;
- (id)newConnectionForInterface:(id)arg1;
- (id)connection;
- (void)dealloc;
- (id)initWithRemoteObjectInterface:(id)arg1;
- (id)init;

@end
