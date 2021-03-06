//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol AKCredential, AKCredentialRequestProtocol;

@interface AKAuthorization : NSObject <NSSecureCoding>
{
    id <AKCredentialRequestProtocol> _authorizedRequest;
    id <AKCredential> _credential;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) id <AKCredential> credential; // @synthesize credential=_credential;
@property(retain, nonatomic) id <AKCredentialRequestProtocol> authorizedRequest; // @synthesize authorizedRequest=_authorizedRequest;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

