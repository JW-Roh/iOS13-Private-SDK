//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSDictionary, NSSet, NSUUID, TUConversation, TUConversationMember;
@protocol TUConversationManagerDataSourceDelegate, TUConversationMediaControllerDataSourceDelegate;

@protocol TUConversationManagerDataSource 
@property(nonatomic) __weak id <TUConversationMediaControllerDataSourceDelegate> mediaDelegate;
@property(nonatomic) __weak id <TUConversationManagerDataSourceDelegate> delegate;
@property(readonly, copy, nonatomic) NSDictionary *conversationsByGroupUUID;
- (void)invalidate;
- (void)registerWithCompletionHandler:(void (^)(void))arg1;
- (void)updateConversationWithUUID:(NSUUID *)arg1 participantPresentationContexts:(NSArray *)arg2;
- (void)setDownlinkMuted:(_Bool)arg1 forRemoteParticipantsInConversation:(TUConversation *)arg2;
- (void)buzzMember:(TUConversationMember *)arg1 conversation:(TUConversation *)arg2;
- (void)addRemoteMembers:(NSSet *)arg1 toConversation:(TUConversation *)arg2;
@end
