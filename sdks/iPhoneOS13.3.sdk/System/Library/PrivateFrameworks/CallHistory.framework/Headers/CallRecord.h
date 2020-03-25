//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface CallRecord : NSManagedObject
{
}

+ (id)fetchRequest;
@property(readonly, nonatomic) BOOL supportsVerificationStatus;
@property(readonly, nonatomic) BOOL supportsServiceProvider;
@property(readonly, nonatomic) BOOL supportsRemoteParticipantHandles;
@property(readonly, nonatomic) BOOL supportsOutgoingLocalParticipantUUID;
@property(readonly, nonatomic) BOOL supportsLocalParticipantUUID;
@property(readonly, nonatomic) BOOL supportsHandleType;
@property(readonly, nonatomic) BOOL supportsCallCategory;
- (id)compositeVerificationStatusForContext:(id)arg1;
- (id)compositeServiceProviderForContext:(id)arg1;
- (id)compositeRemoteParticipantHandlesForContext:(id)arg1;
- (id)compositeOutgoingLocalParticipantUUIDForContext:(id)arg1;
- (id)compositeLocalParticipantUUIDForContext:(id)arg1;
- (id)compositeHandleTypeForContext:(id)arg1;
- (id)compositeCallCategoryForContext:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *chRemoteParticipantHandles;
@property(readonly, nonatomic) long long chHandleType;

@end
