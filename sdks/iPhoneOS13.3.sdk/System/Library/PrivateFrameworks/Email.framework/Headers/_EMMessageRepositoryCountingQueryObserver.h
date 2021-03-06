//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EMMessageRepositoryCountQueryObserver_xpc-Protocol.h>
#import <Email/EMRecoverableObserver-Protocol.h>

@class EFCancelationToken, EFPair, EFQuery, EMMailboxScope, EMMessageRepository;
@protocol EMMessageRepositoryCountQueryObserver;

__attribute__((visibility("hidden")))
@interface _EMMessageRepositoryCountingQueryObserver : NSObject <EMMessageRepositoryCountQueryObserver_xpc, EMRecoverableObserver>
{
    EMMessageRepository *_repository;
    EFQuery *_query;
    EMMailboxScope *_serverCountMailboxScope;
    id <EMMessageRepositoryCountQueryObserver> _observer;
    EFCancelationToken *_token;
    EFPair *_queryIdentifier;
}

@property(readonly) EFPair *queryIdentifier; // @synthesize queryIdentifier=_queryIdentifier;
// - (void).cxx_destruct;
- (void)countDidChange:(long long)arg1 acknowledgementToken:(id)arg2;
- (void)_performQueryWithRemoteConnection:(id)arg1 forRecovery:(BOOL)arg2;
- (void)recoverQueryWithRemoteConnection:(id)arg1;
- (void)performQueryWithRemoteConnection:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithRepository:(id)arg1 queryIdentifier:(id)arg2 includingServerCountsForMailboxScope:(id)arg3 observer:(id)arg4;

@end

