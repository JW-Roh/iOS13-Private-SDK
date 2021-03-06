//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface ETModelDefinition : NSObject
{
    NSArray *_layerNames;
    NSArray *_inputs;
    NSArray *_outputs;
    NSURL *_modelURL;
}

@property(readonly) NSURL *modelURL; // @synthesize modelURL=_modelURL;
@property(readonly) NSArray *outputs; // @synthesize outputs=_outputs;
@property(readonly) NSArray *inputs; // @synthesize inputs=_inputs;
@property(readonly) NSArray *layerNames; // @synthesize layerNames=_layerNames;
// - (void).cxx_destruct;
- (id)initWithInferenceNetworkPath:(id)arg1 inferenceInputs:(id)arg2 inferenceOutputs:(id)arg3 error:(id )arg4;
- (id)initWithInferenceNetworkPath:(id)arg1 error:(id )arg2;

@end

