//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray, NSString;

@interface NNMKProtoMessagesFilteredOutWarning : PBCodable <NSCopying>
{
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    NSMutableArray *_removedMessageIds;
    CDStruct_a125a100 _has;
}

+ (Class)removedMessageIdType;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(retain, nonatomic) NSMutableArray *removedMessageIds; // @synthesize removedMessageIds=_removedMessageIds;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMailboxId;
- (id)removedMessageIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)removedMessageIdsCount;
- (void)addRemovedMessageId:(id)arg1;
- (void)clearRemovedMessageIds;
@property(nonatomic) _Bool hasFullSyncVersion;

@end
