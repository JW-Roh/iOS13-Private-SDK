//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISCompositorRecipe-Protocol.h>

__attribute__((visibility("hidden")))
@interface ISiOSAppRecipe : NSObject <ISCompositorRecipe>
{
    BOOL _shouldDrawBorder;
    NSUInteger _options;
}

@property BOOL shouldDrawBorder; // @synthesize shouldDrawBorder=_shouldDrawBorder;
@property(nonatomic) NSUInteger options; // @synthesize options=_options;
@property BOOL shouldApplyMask;
- (id)layerTreeForSize:(CGSize)arg1 scale:(double)arg2;

@end

