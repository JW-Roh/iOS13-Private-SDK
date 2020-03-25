//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUAutoCalculator.h>

#import <PhotoImaging/PIFaceObservingAutoCalculator-Protocol.h>

@class PIFaceObservationCache;

@interface PIPortraitAutoCalculator : NUAutoCalculator <PIFaceObservingAutoCalculator>
{
    PIFaceObservationCache *_faceObservationCache;
}

+ (id)portraitInfoDictionaryFromCameraMetadata:(id)arg1;
+ (id)portraitEffectInfoDictionaryFromFaceObservations:(id)arg1 orientation:(long long)arg2 valuesAtCapture:(id)arg3;
+ (id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 focus:(id)arg2 valuesAtCapture:(id)arg3 lumaNoiseScale:(float)arg4 orientation:(long long)arg5;
+ (id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3 valuesAtCapture:(id)arg4;
+ (id)portraitInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3 valuesAtCapture:(id)arg4;
+ (BOOL)canApplyPortraitEffectsWithMetadata:(id)arg1;
+ (BOOL)isStillImageDisparity:(id)arg1;
+ (id)focusRectDictionaryFromRect:(CGRect)arg1;
+ (id)focusRectDictionaryFromMetadata:(id)arg1;
@property(retain, nonatomic) PIFaceObservationCache *faceObservationCache; // @synthesize faceObservationCache=_faceObservationCache;
// - (void).cxx_destruct;
- (void)_calculateWithImageProperties:(id)arg1 valuesAtCapture:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)submit:(id /* CDUnknownBlockType */)arg1;

@end
