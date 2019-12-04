//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTAvatar, SCNMaterial, SCNNode, SCNScene;

@interface AVTAvatarEnvironment : NSObject
{
    SCNScene *_scene;
    AVTAvatar *_avatar;
    SCNNode *_trackingLostIndicator;
    _Bool _trackingLostIndicatorVisible;
    SCNMaterial *_shadowPlaneMaterial;
    SCNNode *_whitePlane;
    SCNNode *_environmentNode;
    SCNNode *_defaultPointOfView;
    SCNNode *_specializedLightingNode;
    SCNNode *_defaultLightingNode;
}

+ (void)triggerCrossFadeFromImage:(id)arg1 withScene:(id)arg2 pointOfView:(id)arg3 device:(id)arg4 completionHandler:(id /* block */)arg5;
@property(readonly, nonatomic) _Bool faceIsFullyVisible;
- (id)transitionTextureWithSize:(struct CGSize)arg1 renderer:(id)arg2;
@property(nonatomic) float fadeFactor;
- (void)didSnapshot;
- (void)willSnapshot;
- (void)hideTrackingLossIndicator;
- (void)showTrackingLossIndicator;
- (void)hideReticle;
@property(nonatomic) _Bool showReticle;
- (void)updateARMode:(_Bool)arg1;
- (void)updateSpecializedLighting;
- (void)avatarDidChange:(id)arg1 arMode:(_Bool)arg2;
@property(readonly, nonatomic) SCNNode *defaultPointOfView;
@property(readonly, nonatomic) SCNNode *environmentNode;
- (id)initAndInstallInScene:(id)arg1;
- (id)defaultEnvironmentNode;

@end
