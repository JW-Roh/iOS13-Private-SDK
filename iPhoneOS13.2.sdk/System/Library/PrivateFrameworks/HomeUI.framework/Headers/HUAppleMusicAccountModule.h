//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemModule.h>

#import <HomeUI/HFAppleMusicAccountObserver-Protocol.h>

@class HFStaticItemProvider, HUAppleMusicAccountItemProvider, HUAppleMusicItem, NSString;
@protocol HFMediaProfileContainer;

@interface HUAppleMusicAccountModule : HFItemModule <HFAppleMusicAccountObserver>
{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HUAppleMusicAccountItemProvider *_appleMusicAccountItemProvider;
    HUAppleMusicItem *_loggedInUsernameItem;
    HUAppleMusicItem *_logoutItem;
    HUAppleMusicItem *_loginItem;
    unsigned long long _state;
    id /* block */ _stateChangeObserver;
    HFStaticItemProvider *_appleMusicAccountActionItemProvider;
}

@property(readonly, nonatomic) HFStaticItemProvider *appleMusicAccountActionItemProvider; // @synthesize appleMusicAccountActionItemProvider=_appleMusicAccountActionItemProvider;
@property(copy, nonatomic) id /* block */ stateChangeObserver; // @synthesize stateChangeObserver=_stateChangeObserver;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) HUAppleMusicItem *loginItem; // @synthesize loginItem=_loginItem;
@property(readonly, nonatomic) HUAppleMusicItem *logoutItem; // @synthesize logoutItem=_logoutItem;
@property(readonly, nonatomic) HUAppleMusicItem *loggedInUsernameItem; // @synthesize loggedInUsernameItem=_loggedInUsernameItem;
@property(readonly, nonatomic) HUAppleMusicAccountItemProvider *appleMusicAccountItemProvider; // @synthesize appleMusicAccountItemProvider=_appleMusicAccountItemProvider;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (void)dispatcher:(id)arg1 appleMusicAccountsDidUpdate:(id)arg2;
@property(readonly, nonatomic) NSString *explicitAccountSignedInMessage;
- (id)signInMessage:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long numberOfKnownAccounts;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
- (id)initWithMediaProfileContainer:(id)arg1 itemUpdater:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
