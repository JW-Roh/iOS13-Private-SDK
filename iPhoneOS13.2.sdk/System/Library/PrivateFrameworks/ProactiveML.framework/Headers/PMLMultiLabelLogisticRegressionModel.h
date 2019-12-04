//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLMultiLabelClassifierModelProtocol-Protocol.h>
#import <ProactiveML/PMLMultiLabelRegressionModelProtocol-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSArray, NSString, PMLModelFullyConnectedLayer;

@interface PMLMultiLabelLogisticRegressionModel : NSObject <PMLMultiLabelRegressionModelProtocol, PMLMultiLabelClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol>
{
    NSArray *_models;
    PMLModelFullyConnectedLayer *_layer;
}

+ (Class)pyClass;
- (id)serialize;
- (void)convertToLayerWithDataType:(int)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)classify:(id)arg1;
- (id)predict:(id)arg1;
- (unsigned long long)count;
- (id)initWithLayer:(id)arg1;
- (id)initWithModels:(id)arg1;
- (id)initWithWeightsArray:(id)arg1 andIntercept:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
