//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface HDAWDHealthKitRoutineLocation : PBCodable <NSCopying>
{
    long long _confidenceMillis;
    long long _recentVisitCount;
    long long _uncertaintyMillis;
    int _locationType;
    NSString *_locationUUID;
    struct {
        unsigned int confidenceMillis:1;
        unsigned int recentVisitCount:1;
        unsigned int uncertaintyMillis:1;
        unsigned int locationType:1;
    } _has;
}

@property(nonatomic) long long recentVisitCount; // @synthesize recentVisitCount=_recentVisitCount;
@property(nonatomic) long long confidenceMillis; // @synthesize confidenceMillis=_confidenceMillis;
@property(nonatomic) long long uncertaintyMillis; // @synthesize uncertaintyMillis=_uncertaintyMillis;
@property(retain, nonatomic) NSString *locationUUID; // @synthesize locationUUID=_locationUUID;
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
@property(nonatomic) BOOL hasRecentVisitCount;
@property(nonatomic) BOOL hasConfidenceMillis;
@property(nonatomic) BOOL hasUncertaintyMillis;
- (int)StringAsLocationType:(id)arg1;
- (id)locationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasLocationType;
@property(nonatomic) int locationType; // @synthesize locationType=_locationType;
@property(readonly, nonatomic) BOOL hasLocationUUID;

@end
