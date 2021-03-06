//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVCSessionConfiguration : NSObject
{
    NSUInteger _maxRemoteParticipants;
    long long _sessionMode;
    id _reportingHierarchyToken;
}

+ (long long)sessionModeWithClientSessionMode:(long long)arg1;
+ (long long)clientSessionModeWithSessionMode:(long long)arg1;
@property(copy, nonatomic) id reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
@property(nonatomic) long long sessionMode; // @synthesize sessionMode=_sessionMode;
@property(nonatomic) NSUInteger maxRemoteParticipants; // @synthesize maxRemoteParticipants=_maxRemoteParticipants;
- (id)dictionary;
- (void)setUpWithDictionary:(id)arg1;
- (void)dealloc;

@end

