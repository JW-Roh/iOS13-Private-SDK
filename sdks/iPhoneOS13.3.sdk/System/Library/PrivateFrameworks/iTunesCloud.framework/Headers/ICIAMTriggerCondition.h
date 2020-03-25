//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface ICIAMTriggerCondition : PBCodable <NSCopying>
{
    int _comparisonType;
    int _dataType;
    NSString *_identifier;
    NSString *_triggerValue;
    struct {
        unsigned int comparisonType:1;
        unsigned int dataType:1;
    } _has;
}

@property(retain, nonatomic) NSString *triggerValue; // @synthesize triggerValue=_triggerValue;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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
@property(readonly, nonatomic) BOOL hasTriggerValue;
- (int)StringAsComparisonType:(id)arg1;
- (id)comparisonTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasComparisonType;
@property(nonatomic) int comparisonType; // @synthesize comparisonType=_comparisonType;
- (int)StringAsDataType:(id)arg1;
- (id)dataTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasDataType;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) BOOL hasIdentifier;

@end
