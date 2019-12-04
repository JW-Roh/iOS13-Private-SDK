//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSScene.h>

#import <FrontBoard/FBSSceneDelegate-Protocol.h>
#import <FrontBoard/FBSSceneUpdaterDelegate-Protocol.h>

@class FBSSceneImpl, NSString;
@protocol FBSSceneDelegate;

@interface _FBSImplicitWindowScene : FBSScene <FBSSceneDelegate, FBSSceneUpdaterDelegate>
{
    FBSSceneImpl *_scene;
    id <FBSSceneDelegate> _delegate;
}

- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
@property(readonly, copy) NSString *description;
- (_Bool)invalidateSnapshotWithContext:(id)arg1;
- (_Bool)performSnapshotWithContext:(id)arg1;
- (id)snapshotRequest;
- (void)detachSceneContext:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)updateClientSettingsWithTransitionBlock:(id /* block */)arg1;
- (void)updateClientSettingsWithBlock:(id /* block */)arg1;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (id)layers;
- (id)clientSettings;
- (id)settings;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)specification;
- (id)identityToken;
- (id)identifier;
- (id)_initWithSceneImpl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
