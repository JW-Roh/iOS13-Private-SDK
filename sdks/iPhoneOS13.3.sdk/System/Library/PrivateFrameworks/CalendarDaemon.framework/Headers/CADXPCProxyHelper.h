//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADDatabaseInitializationOptions, NSXPCConnection, Protocol;

@interface CADXPCProxyHelper : NSObject
{
    NSXPCConnection *_connection;
    Protocol *_protocol;
    BOOL _synchronous;
    CADDatabaseInitializationOptions *_initializationOptions;
}

@property(retain) CADDatabaseInitializationOptions *initializationOptions; // @synthesize initializationOptions=_initializationOptions;
// - (void).cxx_destruct;
- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withErrorCode:(long long)arg3;
- (long long)replyBlockArgumentIndex:(id)arg1;
- (id)_getReplyBlockFromInvocation:(id)arg1;
- (id)_replaceReplyBlockInInvocation:(id)arg1 retryingAfterInitializationWithContextHolder:(id)arg2;
- (BOOL)_shouldResendInitializationOptionsForInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithXPCConnection:(id)arg1 protocol:(id)arg2 synchronous:(BOOL)arg3;

@end

