//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSAction, NSString;

@interface SBLockScreenPluginAction : NSObject
{
    BSAction *_action;
    NSString *_label;
    long long _authenticationPolicy;
    id /* CDUnknownBlockType */ _completion;
}

+ (id)actionWithCompletion:(id /* CDUnknownBlockType */)arg1;
+ (id)action;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(nonatomic) long long authenticationPolicy; // @synthesize authenticationPolicy=_authenticationPolicy;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
// - (void).cxx_destruct;
- (void)sendResponseWithSuccess:(BOOL)arg1;
- (id)initWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)init;
- (BOOL)isCallAction;
- (BOOL)isInCallAction;
- (BOOL)isApplicationAction;
- (BOOL)isEmergencyDialerAction;

@end

