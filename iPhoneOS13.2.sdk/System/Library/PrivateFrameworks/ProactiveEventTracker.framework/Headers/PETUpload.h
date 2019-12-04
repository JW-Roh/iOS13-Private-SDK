//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray, PETMetadata;

@interface PETUpload : PBCodable <NSCopying>
{
    NSMutableArray *_aggregatedMessages;
    PETMetadata *_metadata;
    NSMutableArray *_trialMessages;
    NSMutableArray *_unaggregatedMessages;
}

+ (Class)trialMessagesType;
+ (Class)unaggregatedMessagesType;
+ (Class)aggregatedMessagesType;
@property(retain, nonatomic) NSMutableArray *trialMessages; // @synthesize trialMessages=_trialMessages;
@property(retain, nonatomic) NSMutableArray *unaggregatedMessages; // @synthesize unaggregatedMessages=_unaggregatedMessages;
@property(retain, nonatomic) NSMutableArray *aggregatedMessages; // @synthesize aggregatedMessages=_aggregatedMessages;
@property(retain, nonatomic) PETMetadata *metadata; // @synthesize metadata=_metadata;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)trialMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)trialMessagesCount;
- (void)addTrialMessages:(id)arg1;
- (void)clearTrialMessages;
- (id)unaggregatedMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)unaggregatedMessagesCount;
- (void)addUnaggregatedMessages:(id)arg1;
- (void)clearUnaggregatedMessages;
- (id)aggregatedMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)aggregatedMessagesCount;
- (void)addAggregatedMessages:(id)arg1;
- (void)clearAggregatedMessages;
@property(readonly, nonatomic) _Bool hasMetadata;

@end
