//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKCompactNavigationContainerController.h>

@class LAUIHorizontalArrowView, LAUIPhysicalButtonView;

@interface PKPaymentAuthorizationServiceCompactNavigationContainerController : PKCompactNavigationContainerController
{
    unsigned char _rotationCount;
    BOOL _cameraOrientationSupported;
    BOOL _attemptedFaceIDViewCreation;
    LAUIPhysicalButtonView *_physicalButtonView;
    LAUIHorizontalArrowView *_cameraArrowView;
    BOOL _showPhysicalButtonIndicator;
    BOOL _showCameraIndicator;
}

@property(nonatomic) BOOL showCameraIndicator; // @synthesize showCameraIndicator=_showCameraIndicator;
@property(nonatomic) BOOL showPhysicalButtonIndicator; // @synthesize showPhysicalButtonIndicator=_showPhysicalButtonIndicator;
// - (void).cxx_destruct;
- (BOOL)_effectiveShowCameraIndicator;
- (BOOL)_effectiveShowPhysicalButtonIndicator;
@property(readonly, nonatomic) LAUIPhysicalButtonView *physicalButtonView;
- (void)_createFaceIDViewsIfNecessary;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

