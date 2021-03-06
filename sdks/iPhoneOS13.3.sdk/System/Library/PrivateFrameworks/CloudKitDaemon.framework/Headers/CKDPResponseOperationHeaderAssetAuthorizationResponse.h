//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPResponseOperationHeaderAssetAuthorizationResponse : PBCodable <NSCopying>
{
    NSData *_authGetResponseBody;
    NSMutableArray *_responseHeaders;
    NSString *_responseUUID;
}

+ (Class)responseHeadersType;
@property(retain, nonatomic) NSMutableArray *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSData *authGetResponseBody; // @synthesize authGetResponseBody=_authGetResponseBody;
@property(retain, nonatomic) NSString *responseUUID; // @synthesize responseUUID=_responseUUID;
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
- (id)responseHeadersAtIndex:(NSUInteger)arg1;
- (NSUInteger)responseHeadersCount;
- (void)addResponseHeaders:(id)arg1;
- (void)clearResponseHeaders;
@property(readonly, nonatomic) BOOL hasAuthGetResponseBody;
@property(readonly, nonatomic) BOOL hasResponseUUID;

@end

