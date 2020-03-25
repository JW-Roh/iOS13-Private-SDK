//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, NSMutableArray;

@interface AWDProactiveModelFittingEvaluation : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    AWDProactiveModelFittingEvalMetrics *_evaluationMetrics;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    NSMutableArray *_precisionAtKs;
    CDStruct_b5306035 _has;
}

+ (Class)precisionAtKType;
@property(retain, nonatomic) NSMutableArray *precisionAtKs; // @synthesize precisionAtKs=_precisionAtKs;
@property(retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics; // @synthesize evaluationMetrics=_evaluationMetrics;
@property(retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // @synthesize minibatchStats=_minibatchStats;
@property(retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)precisionAtKAtIndex:(NSUInteger)arg1;
- (NSUInteger)precisionAtKsCount;
- (void)addPrecisionAtK:(id)arg1;
- (void)clearPrecisionAtKs;
@property(readonly, nonatomic) BOOL hasEvaluationMetrics;
@property(readonly, nonatomic) BOOL hasMinibatchStats;
@property(readonly, nonatomic) BOOL hasModelInfo;
@property(nonatomic) BOOL hasTimestamp;
- (float)precisionAtK:(NSUInteger)arg1;

@end
