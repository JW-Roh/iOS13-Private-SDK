//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/SGDSuggestManagerAllProtocol-Protocol.h>

@class SGDaemonConnection;

@interface SGRemoteObjectProxy : NSObject <SGDSuggestManagerAllProtocol>
{
    SGDaemonConnection *_connection;
    BOOL _queuesRequestsIfBusy;
}

// - (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithConnection:(id)arg1 queuesRequestsIfBusy:(BOOL)arg2;

@end
