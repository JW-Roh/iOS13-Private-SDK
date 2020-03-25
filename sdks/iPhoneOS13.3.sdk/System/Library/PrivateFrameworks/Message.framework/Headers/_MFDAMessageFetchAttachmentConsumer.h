//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFDAMailAccountConsumer.h>

#import <Message/DAMessageFetchAttachmentConsumer-Protocol.h>

@class MFActivityMonitor, MFProgressFilterDataConsumer;

@interface _MFDAMessageFetchAttachmentConsumer : MFDAMailAccountConsumer <DAMessageFetchAttachmentConsumer>
{
    MFProgressFilterDataConsumer *_progressFilter;
    NSUInteger _expectedLength;
    NSUInteger _accumulatedLength;
    MFActivityMonitor *_monitor;
    BOOL _dataWasBase64;
    BOOL _fetchSucceeded;
}

@property(readonly) BOOL fetchSucceeded; // @synthesize fetchSucceeded=_fetchSucceeded;
@property(readonly) BOOL dataWasBase64; // @synthesize dataWasBase64=_dataWasBase64;
@property(nonatomic) NSUInteger expectedLength; // @synthesize expectedLength=_expectedLength;
@property(retain, nonatomic) MFProgressFilterDataConsumer *progressFilter; // @synthesize progressFilter=_progressFilter;
// - (void).cxx_destruct;
- (id)initWithActivityMonitor:(id)arg1;
- (void)attachmentFetchCompletedWithStatus:(long long)arg1 forAttachmentNamed:(id)arg2 ofMessageWithServerID:(id)arg3 dataWasBase64:(BOOL)arg4 sentBytesCount:(NSUInteger)arg5 receivedBytesCount:(NSUInteger)arg6;
- (void)consumeData:(id)arg1 ofContentType:(id)arg2 forAttachmentNamed:(id)arg3 ofMessageWithServerID:(id)arg4;

@end
