//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKSecurityCapabilitiesController : NSObject
{
    unsigned long long _feature;
    unsigned long long _securityRequirements;
    long long _context;
}

+ (id)displayableErrorForErrorCode:(unsigned long long)arg1;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned long long securityRequirements; // @synthesize securityRequirements=_securityRequirements;
@property(readonly, nonatomic) unsigned long long feature; // @synthesize feature=_feature;
- (void)presentSecurityRepairFlowWithPresentingViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)isEnabledForSecuirtyRequirementsWithCompletion:(id /* block */)arg1;
- (_Bool)isHSA2Enabled;
- (id)initWithRequirements:(unsigned long long)arg1 feature:(unsigned long long)arg2 context:(long long)arg3;
- (id)initWithRequirements:(unsigned long long)arg1 context:(long long)arg2;

@end
