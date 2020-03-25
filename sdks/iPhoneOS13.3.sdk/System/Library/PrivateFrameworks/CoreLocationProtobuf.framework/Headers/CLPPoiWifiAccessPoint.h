//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface CLPPoiWifiAccessPoint : PBCodable <NSCopying>
{
    double _age;
    double _scanTimestamp;
    int _channel;
    NSString *_mac;
    int _rssi;
    struct {
        unsigned int age:1;
        unsigned int scanTimestamp:1;
    } _has;
}

@property(nonatomic) double scanTimestamp; // @synthesize scanTimestamp=_scanTimestamp;
@property(nonatomic) double age; // @synthesize age=_age;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
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
@property(nonatomic) BOOL hasScanTimestamp;
@property(nonatomic) BOOL hasAge;

@end
