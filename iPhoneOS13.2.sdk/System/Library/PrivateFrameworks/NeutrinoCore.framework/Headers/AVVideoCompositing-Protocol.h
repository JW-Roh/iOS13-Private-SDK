//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class AVAsynchronousVideoCompositionRequest, AVVideoCompositionRenderContext, AVVideoCompositionRenderHint, NSDictionary;

@protocol AVVideoCompositing 
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property(readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
- (void)startVideoCompositionRequest:(AVAsynchronousVideoCompositionRequest *)arg1;
- (void)renderContextChanged:(AVVideoCompositionRenderContext *)arg1;

@optional
@property(readonly, nonatomic) _Bool supportsWideColorSourceFrames;
- (void)prerollForRenderingUsingHint:(AVVideoCompositionRenderHint *)arg1;
- (void)anticipateRenderingUsingHint:(AVVideoCompositionRenderHint *)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
@end
