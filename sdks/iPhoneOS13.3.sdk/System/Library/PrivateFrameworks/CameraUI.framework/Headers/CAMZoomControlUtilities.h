//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMZoomControlUtilities : NSObject
{
}

+ (double)linearMappingForX:(double)arg1 x1:(double)arg2 y1:(double)arg3 x2:(double)arg4 y2:(double)arg5 clamp:(BOOL)arg6;
+ (double)piecewiseLinearMappingForX:(double)arg1 fromXValues:(id)arg2 toYValues:(id)arg3;
+ (double)zoomControlDisplayValueForZoomFactor:(double)arg1 mode:(long long)arg2 device:(long long)arg3 videoConfiguration:(long long)arg4;
+ (void)layoutZoomControl:(id)arg1 forLayoutStyle:(long long)arg2 bottomBarAlignmentRect:(CGRect)arg3 bottomBarTransparent:(BOOL)arg4 shutterButtonAlignmentRect:(CGRect)arg5 previewViewAlignmentRect:(CGRect)arg6;
+ (void)layoutZoomControl:(id)arg1 forLayoutStyle:(long long)arg2 bottomBar:(id)arg3 previewView:(id)arg4;

@end

