//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NTPBNetworkSessionList : PBCodable <NSCopying>
{
    NSMutableArray *_networkEvents;
    NSMutableArray *_networkSessions;
}

+ (Class)networkEventsType;
+ (Class)networkSessionsType;
@property(retain, nonatomic) NSMutableArray *networkEvents; // @synthesize networkEvents=_networkEvents;
@property(retain, nonatomic) NSMutableArray *networkSessions; // @synthesize networkSessions=_networkSessions;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)networkEventsAtIndex:(NSUInteger)arg1;
- (NSUInteger)networkEventsCount;
- (void)addNetworkEvents:(id)arg1;
- (void)clearNetworkEvents;
- (id)networkSessionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)networkSessionsCount;
- (void)addNetworkSessions:(id)arg1;
- (void)clearNetworkSessions;
- (void)dealloc;

@end
