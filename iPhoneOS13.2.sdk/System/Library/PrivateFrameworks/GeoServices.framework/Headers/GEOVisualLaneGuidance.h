//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOVisualLaneGuidance : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_instructions;
    NSMutableArray *_laneInfos;
    NSMutableArray *_titles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_instructions:1;
        unsigned int read_laneInfos:1;
        unsigned int read_titles:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_instructions:1;
        unsigned int wrote_laneInfos:1;
        unsigned int wrote_titles:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)titleType;
+ (Class)instructionType;
+ (Class)laneInfoType;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)titleAtIndex:(unsigned long long)arg1;
- (unsigned long long)titlesCount;
- (void)_addNoFlagsTitle:(id)arg1;
- (void)addTitle:(id)arg1;
- (void)clearTitles;
@property(retain, nonatomic) NSMutableArray *titles;
- (void)_readTitles;
- (id)instructionAtIndex:(unsigned long long)arg1;
- (unsigned long long)instructionsCount;
- (void)_addNoFlagsInstruction:(id)arg1;
- (void)addInstruction:(id)arg1;
- (void)clearInstructions;
@property(retain, nonatomic) NSMutableArray *instructions;
- (void)_readInstructions;
- (id)laneInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)laneInfosCount;
- (void)_addNoFlagsLaneInfo:(id)arg1;
- (void)addLaneInfo:(id)arg1;
- (void)clearLaneInfos;
@property(retain, nonatomic) NSMutableArray *laneInfos;
- (void)_readLaneInfos;
- (id)initWithData:(id)arg1;
- (id)init;

@end
