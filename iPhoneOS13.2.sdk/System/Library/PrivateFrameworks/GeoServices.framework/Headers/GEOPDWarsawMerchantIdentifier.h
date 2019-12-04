//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWarsawMerchantIdentifier : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_merchantDomain;
    NSString *_merchantId;
    NSString *_merchantName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_merchantDomain:1;
        unsigned int read_merchantId:1;
        unsigned int read_merchantName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_merchantDomain:1;
        unsigned int wrote_merchantId:1;
        unsigned int wrote_merchantName:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(retain, nonatomic) NSString *merchantId;
@property(readonly, nonatomic) _Bool hasMerchantId;
- (void)_readMerchantId;
@property(retain, nonatomic) NSString *merchantName;
@property(readonly, nonatomic) _Bool hasMerchantName;
- (void)_readMerchantName;
@property(retain, nonatomic) NSString *merchantDomain;
@property(readonly, nonatomic) _Bool hasMerchantDomain;
- (void)_readMerchantDomain;
- (id)initWithData:(id)arg1;
- (id)init;

@end
