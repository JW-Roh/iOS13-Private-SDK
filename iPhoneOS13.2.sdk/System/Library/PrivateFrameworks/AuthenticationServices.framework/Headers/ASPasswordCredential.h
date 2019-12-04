//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/ASAuthorizationCredential-Protocol.h>

@class NSString;

@interface ASPasswordCredential : NSObject <ASAuthorizationCredential>
{
    NSString *_user;
    NSString *_password;
}

+ (id)credentialWithUser:(id)arg1 password:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *user; // @synthesize user=_user;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
