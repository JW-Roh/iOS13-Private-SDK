//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFMessagePolicy.h>



@interface HMDRemoteMessagePolicy : HMFMessagePolicy <NSMutableCopying>
{
    _Bool _requiresSecureMessage;
    _Bool _allowsAnonymousMessage;
    _Bool _requiresAccountMessage;
    unsigned long long _transportRestriction;
    unsigned long long _roles;
}

+ (id)defaultSecurePolicy;
@property(readonly) unsigned long long roles; // @synthesize roles=_roles;
@property(readonly) unsigned long long transportRestriction; // @synthesize transportRestriction=_transportRestriction;
@property(readonly) _Bool requiresAccountMessage; // @synthesize requiresAccountMessage=_requiresAccountMessage;
@property(readonly) _Bool allowsAnonymousMessage; // @synthesize allowsAnonymousMessage=_allowsAnonymousMessage;
@property(readonly) _Bool requiresSecureMessage; // @synthesize requiresSecureMessage=_requiresSecureMessage;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end
