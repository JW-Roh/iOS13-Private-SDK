//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFBaseMessage-Protocol.h>

@class MFMailboxUid, MFMessageLibrary, NSString;

@interface MFMessageDetails : NSObject <MFBaseMessage>
{
    MFMessageLibrary *library;
    long long libraryID;
    NSUInteger messageFlags;
    unsigned int uid;
    long long mailboxID;
    long long conversationHash;
    long long messageIDHash;
    unsigned int dateReceived;
    unsigned int dateSent;
    NSString *externalID;
}

@property(readonly, nonatomic) NSString *externalID; // @synthesize externalID;
@property(readonly, nonatomic) long long conversationHash; // @synthesize conversationHash;
@property(readonly, nonatomic) unsigned int dateSentInterval; // @synthesize dateSentInterval=dateSent;
@property(readonly, nonatomic) unsigned int dateReceivedInterval; // @synthesize dateReceivedInterval=dateReceived;
@property(readonly, nonatomic) NSUInteger messageFlags; // @synthesize messageFlags;
@property(readonly, nonatomic) long long messageIDHash; // @synthesize messageIDHash;
@property(readonly, nonatomic) long long mailboxID; // @synthesize mailboxID;
@property(readonly, nonatomic) long long libraryID; // @synthesize libraryID;
@property(readonly, nonatomic) unsigned int uid; // @synthesize uid;
// - (void).cxx_destruct;
- (id)copyMessageInfo;
@property(readonly, nonatomic) BOOL senderVIP;
@property(readonly, nonatomic) BOOL flagged;
@property(readonly, nonatomic, getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property(readonly, nonatomic) BOOL read;
@property(readonly, nonatomic) BOOL deleted;
@property(readonly, nonatomic) __weak MFMailboxUid *mailbox;
- (id)messageID;
- (id)remoteID;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic, getter=isLibraryMessage) BOOL libraryMessage;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;

@end

