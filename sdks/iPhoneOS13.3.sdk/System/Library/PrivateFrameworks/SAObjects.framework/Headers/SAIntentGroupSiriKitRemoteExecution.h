//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAIntentGroupSiriKitRemoteExecution : AceObject <SAAceSerializable>
{
}

+ (id)siriKitRemoteExecutionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)siriKitRemoteExecution;
@property(copy, nonatomic) NSString *runLocation;
@property(copy, nonatomic) NSString *personalDomainAuthenticationMode;
@property(copy, nonatomic) NSString *invocationDeviceAssistantId;
@property(copy, nonatomic) NSString *executionDeviceAssistantId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
