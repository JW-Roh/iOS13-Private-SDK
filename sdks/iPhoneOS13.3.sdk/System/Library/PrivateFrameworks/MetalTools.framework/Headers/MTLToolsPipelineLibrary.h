//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLPipelineLibrarySPI-Protocol.h>

@class MTLToolsPointerArray, NSArray, NSString;
@protocol MTLDevice, MTLPipelineCache;

@interface MTLToolsPipelineLibrary : MTLToolsObject <MTLPipelineLibrarySPI>
{
    MTLToolsPointerArray *_pipelineStates;
    MTLToolsPointerArray *_computePipelineStates;
}

@property(readonly, nonatomic) MTLToolsPointerArray *computePipelineStates; // @synthesize computePipelineStates=_computePipelineStates;
@property(readonly, nonatomic) MTLToolsPointerArray *pipelineStates; // @synthesize pipelineStates=_pipelineStates;
@property(readonly, nonatomic) id <MTLPipelineCache> functionCache;
@property(readonly, nonatomic) id <MTLPipelineCache> pipelineCache;
- (id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id )arg2;
- (id)newComputePipelineDescriptorWithName:(id)arg1 error:(id )arg2;
- (id)newRenderPipelineStateWithName:(id)arg1 options:(NSUInteger)arg2 reflection:(id )arg3 error:(id )arg4;
- (id)newComputePipelineStateWithName:(id)arg1 options:(NSUInteger)arg2 reflection:(id )arg3 error:(id )arg4;
@property BOOL disableRunTimeCompilation;
@property(readonly) NSArray *pipelineNames;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (void)acceptVisitor:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)dealloc;

@end
