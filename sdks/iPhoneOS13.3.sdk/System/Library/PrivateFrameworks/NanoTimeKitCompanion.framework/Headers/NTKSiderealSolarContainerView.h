//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CLKDevice, NTKSiderealColorManager, UIImageView;

@interface NTKSiderealSolarContainerView : UIView
{
    CLKDevice *_device;
    UIImageView *_dayPathGlow;
    UIImageView *_dayDiskBloom;
    CAGradientLayer *_dayDiskGnomon;
    CAGradientLayer *_nightDiskGnomon;
    double _orbitDiameter;
    NTKSiderealColorManager *_colorManager;
    UIView *_dayContainerView;
    UIView *_nightContainerView;
    UIView *_dayDisk;
    UIView *_dayAccessoryContainerView;
    UIView *_nightDisk;
    UIView *_nightRing;
    UIView *_nightAccessoryContainerView;
}

@property(retain, nonatomic) UIView *nightAccessoryContainerView; // @synthesize nightAccessoryContainerView=_nightAccessoryContainerView;
@property(retain, nonatomic) UIView *nightRing; // @synthesize nightRing=_nightRing;
@property(retain, nonatomic) UIView *nightDisk; // @synthesize nightDisk=_nightDisk;
@property(retain, nonatomic) UIView *dayAccessoryContainerView; // @synthesize dayAccessoryContainerView=_dayAccessoryContainerView;
@property(retain, nonatomic) UIView *dayDisk; // @synthesize dayDisk=_dayDisk;
@property(retain, nonatomic) UIView *nightContainerView; // @synthesize nightContainerView=_nightContainerView;
@property(retain, nonatomic) UIView *dayContainerView; // @synthesize dayContainerView=_dayContainerView;
// - (void).cxx_destruct;
- (id)_newGnomonView;
- (void)setSolarDayProgress:(double)arg1;
- (double)poseForNightRingImage;
- (double)poseForNightDiskImage;
- (double)poseForNightGnomonImage;
- (double)poseForDayDiskImage;
- (double)poseForDayDiskBloomImage;
- (double)poseForDayGnomonImage;
- (id)initWithFrame:(CGRect)arg1 orbitDiameter:(double)arg2 device:(id)arg3;

@end
