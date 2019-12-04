//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMSystemAirPlaySecurityDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadSecurityType;
    NSString *_payloadAccessType;
    NSString *_payloadPassword;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withSecurityType:(id)arg2 withAccessType:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withSecurityType:(id)arg2 withAccessType:(id)arg3 withPassword:(id)arg4;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadPassword; // @synthesize payloadPassword=_payloadPassword;
@property(copy, nonatomic) NSString *payloadAccessType; // @synthesize payloadAccessType=_payloadAccessType;
@property(copy, nonatomic) NSString *payloadSecurityType; // @synthesize payloadSecurityType=_payloadSecurityType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
