//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActivityRingsUI/ARUIRingsRenderPipelineFactory.h>

@class ARUIRingsAlphaReductionState, ARUIRingsEmptyState, ARUIRingsEndCapShadowState, ARUIRingsFillState;

__attribute__((visibility("hidden")))
@interface ARUIOverlappingRingsRenderPipelineFactory : ARUIRingsRenderPipelineFactory
{
    ARUIRingsEmptyState *_emptyState;
    ARUIRingsFillState *_fillState;
    ARUIRingsEndCapShadowState *_endCapShadowState;
    ARUIRingsAlphaReductionState *_alphaReductionState;
}

- (id)pipelineForConfiguration:(id)arg1;
- (id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

@end
