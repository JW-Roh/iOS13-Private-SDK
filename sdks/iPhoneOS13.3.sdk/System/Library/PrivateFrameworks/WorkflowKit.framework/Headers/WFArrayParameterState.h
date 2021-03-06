//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFParameterState-Protocol.h>

@class NSArray;

@interface WFArrayParameterState : NSObject <WFParameterState>
{
    NSArray *_values;
}

+ (Class)processingValueClass;
@property(readonly, copy, nonatomic) NSArray *values; // @synthesize values=_values;
// - (void).cxx_destruct;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(id /* CDUnknownBlockType */)arg3 valueHandler:(id /* CDUnknownBlockType */)arg4;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(id /* CDUnknownBlockType */)arg3 valueHandler:(id /* CDUnknownBlockType */)arg4 processSingleVariableStringsAsContentItems:(BOOL)arg5;
- (id)containedVariables;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithValues:(id)arg1;

@end

