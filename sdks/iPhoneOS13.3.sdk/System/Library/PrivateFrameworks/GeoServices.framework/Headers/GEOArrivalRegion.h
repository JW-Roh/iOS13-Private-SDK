//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOMapRegion, PBUnknownFields;

@interface GEOArrivalRegion : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_arrivalRegion;
    int _arrivalRegionAction;
    unsigned int _endNavigationTimeoutThreshold;
    struct {
        unsigned int has_arrivalRegionAction:1;
        unsigned int has_endNavigationTimeoutThreshold:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasEndNavigationTimeoutThreshold;
@property(nonatomic) unsigned int endNavigationTimeoutThreshold;
- (int)StringAsArrivalRegionAction:(id)arg1;
- (id)arrivalRegionActionAsString:(int)arg1;
@property(nonatomic) BOOL hasArrivalRegionAction;
@property(nonatomic) int arrivalRegionAction;
@property(retain, nonatomic) GEOMapRegion *arrivalRegion;
@property(readonly, nonatomic) BOOL hasArrivalRegion;

@end

