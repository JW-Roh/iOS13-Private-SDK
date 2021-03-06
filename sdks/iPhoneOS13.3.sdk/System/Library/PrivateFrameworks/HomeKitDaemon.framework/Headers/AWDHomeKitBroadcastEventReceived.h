//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class AWDHomeKitVendorInformation;

@interface AWDHomeKitBroadcastEventReceived : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    int _certified;
    AWDHomeKitVendorInformation *_vendorDetails;
    BOOL _isExpectedGSN;
    struct {
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int isExpectedGSN:1;
    } _has;
}

@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
@property(nonatomic) BOOL isExpectedGSN; // @synthesize isExpectedGSN=_isExpectedGSN;
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
- (int)StringAsCertified:(id)arg1;
- (id)certifiedAsString:(int)arg1;
@property(nonatomic) BOOL hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
@property(readonly, nonatomic) BOOL hasVendorDetails;
@property(nonatomic) BOOL hasIsExpectedGSN;
@property(nonatomic) BOOL hasTimestamp;

@end

