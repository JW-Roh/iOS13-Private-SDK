//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSData, NSDictionary, NSNumber, PBCodable, SISchemaConversationTrace, SISchemaDeviceFixedContext, SISchemaServerEventMetadata, SISchemaSpeechResultSelected, SISchemaTurnInteraction, SISchemaUserSpeechDuration;

@protocol SISchemaServerEvent 
+ (NSNumber *)getTagForEventTypeClass:(Class)arg1;
+ (Class)getEventTypeClassForTag:(int)arg1;
@property(readonly, nonatomic) unsigned long long whichEvent_Type;
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) SISchemaDeviceFixedContext *serverDeviceFixedContext;
@property(retain, nonatomic) SISchemaSpeechResultSelected *speechResultSelected;
@property(retain, nonatomic) SISchemaTurnInteraction *turnInteraction;
@property(retain, nonatomic) SISchemaConversationTrace *serverConversationTrace;
@property(retain, nonatomic) SISchemaUserSpeechDuration *userSpeechDuration;
@property(retain, nonatomic) SISchemaServerEventMetadata *eventMetadata;
- (void)setEventType:(PBCodable *)arg1;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
