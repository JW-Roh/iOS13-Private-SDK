//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CALayer, ISLivePhotoUIView;

@protocol PXMutableImageLayerModulator <NSObject>
@property(nonatomic) BOOL displayingVideoComplement;
@property(retain, nonatomic) ISLivePhotoUIView *livePhotoView;
@property(retain, nonatomic) CALayer *layer;
- (void)removeFilterFromUnownedLayer:(CALayer *)arg1;
- (void)animateChangesWithDuration:(double)arg1;
@end

