//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DFramebufferGaussianBlurPipeline.h>

@class TSCH3DFramebuffer;

__attribute__((visibility("hidden")))
@interface TSCH3DFramebufferGaussianBlurAndBlendPipeline : TSCH3DFramebufferGaussianBlurPipeline
{
    float mBlendFactor;
    TSCH3DFramebuffer *mBlendTexture;
}

+ (id)effectsArray;
@property(retain, nonatomic) TSCH3DFramebuffer *blendTexture; // @synthesize blendTexture=mBlendTexture;
@property(nonatomic) float blendFactor; // @synthesize blendFactor=mBlendFactor;
- (void)updateShaderEffectsStates;
- (void)dealloc;

@end
