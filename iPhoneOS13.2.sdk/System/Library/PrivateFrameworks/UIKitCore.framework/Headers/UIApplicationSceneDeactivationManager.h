//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDescriptionProviding-Protocol.h>

@class FBScene, NSHashTable, NSMutableSet, NSString;

@interface UIApplicationSceneDeactivationManager : NSObject <BSDescriptionProviding>
{
    NSHashTable *_assertions;
    NSMutableSet *_eligibleScenes;
    FBScene *_updatingScene;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_untrackScene:(id)arg1;
- (void)_trackScene:(id)arg1;
- (unsigned long long)_deactivationReasonsForScene:(id)arg1 withSettings:(id)arg2;
- (void)_updateScenesWithTransitionContext:(id)arg1 reason:(id)arg2;
- (void)_setDeactivationReasons:(unsigned long long)arg1 onScene:(id)arg2 withSettings:(id)arg3 reason:(id)arg4;
- (_Bool)_isEligibleScene:(id)arg1 withSettings:(id)arg2;
- (_Bool)_areEligibleSettings:(id)arg1;
- (_Bool)_isEligibleScene:(id)arg1;
- (_Bool)_isEligibleProcess:(id)arg1;
- (void)removeAssertion:(id)arg1;
- (void)addAssertion:(id)arg1 withTransitionContext:(id)arg2;
- (id)assertions;
- (id)eligibleScenes;
- (void)amendSceneSettings:(id)arg1 forScene:(id)arg2;
- (void)endTrackingScene:(id)arg1;
- (void)beginTrackingScene:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)newAssertionWithReason:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
