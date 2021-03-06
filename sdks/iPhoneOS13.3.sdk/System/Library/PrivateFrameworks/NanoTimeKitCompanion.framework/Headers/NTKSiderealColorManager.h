//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NTKAltitudeColorCurve;

@interface NTKSiderealColorManager : NSObject
{
    NSMutableArray *_updateHandlers;
    NTKAltitudeColorCurve *_dialBackground;
    NSArray *_dayGradient;
    NTKAltitudeColorCurve *_civilTwilight;
    NTKAltitudeColorCurve *_nauticalTwilight;
    NTKAltitudeColorCurve *_astronomicalTwilight;
    NTKAltitudeColorCurve *_innerComplication;
    NTKAltitudeColorCurve *_outerComplication;
    NTKAltitudeColorCurve *_dayDiskBloom;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)dayDiskBloomColorCurve;
- (id)outerComplicationColorCurve;
- (id)innerComplicationColorCurve;
- (id)astronomicalTwilightColorCurve;
- (id)nauticalTwilightColorCurve;
- (id)civilTwilightColorCurve;
- (id)dayGradientColorCurves;
- (id)dialBackgroundColorCurve;
- (void)_notifyHandlers;
- (void)addColorUpdateHandler:(id /* CDUnknownBlockType */)arg1;
- (void)setSunAltitude:(double)arg1;
- (void)dealloc;
- (id)_init;

@end

