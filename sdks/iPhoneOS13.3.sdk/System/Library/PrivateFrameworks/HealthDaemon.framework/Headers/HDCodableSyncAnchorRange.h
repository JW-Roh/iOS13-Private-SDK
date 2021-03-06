//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class HDCodableEntityIdentifier;

@interface HDCodableSyncAnchorRange : PBCodable <NSCopying>
{
    long long _endAnchor;
    long long _entityType;
    long long _startAnchor;
    HDCodableEntityIdentifier *_entityIdentifier;
    struct {
        unsigned int endAnchor:1;
        unsigned int entityType:1;
        unsigned int startAnchor:1;
    } _has;
}

@property(retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(nonatomic) long long endAnchor; // @synthesize endAnchor=_endAnchor;
@property(nonatomic) long long startAnchor; // @synthesize startAnchor=_startAnchor;
@property(nonatomic) long long entityType; // @synthesize entityType=_entityType;
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
@property(readonly, nonatomic) BOOL hasEntityIdentifier;
@property(nonatomic) BOOL hasEndAnchor;
@property(nonatomic) BOOL hasStartAnchor;
@property(nonatomic) BOOL hasEntityType;

@end

