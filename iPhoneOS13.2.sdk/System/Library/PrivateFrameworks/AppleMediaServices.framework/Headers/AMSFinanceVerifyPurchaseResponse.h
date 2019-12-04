//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSFinanceDialogResponse.h>

@class AMSURLTaskInfo, NSDictionary;

__attribute__((visibility("hidden")))
@interface AMSFinanceVerifyPurchaseResponse : AMSFinanceDialogResponse
{
    NSDictionary *_responseDictionary;
    AMSURLTaskInfo *_taskInfo;
    long long _verifyType;
}

+ (long long)_verifyTypeFromPayload:(id)arg1;
+ (id)_dialogRequestForCVVFromPayload:(id)arg1 verifyType:(long long)arg2;
+ (id)_dialogRequestForCarrierFromPayload:(id)arg1 verifyType:(long long)arg2;
+ (_Bool)isVerifyPurchasePayload:(id)arg1;
@property(nonatomic) long long verifyType; // @synthesize verifyType=_verifyType;
@property(retain, nonatomic) AMSURLTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (id)_runCVVRequestForCode:(id)arg1 error:(id *)arg2;
- (id)_runCarrierVerifyCode:(id)arg1 error:(id *)arg2;
- (id)_runCarrierNewCodeWithError:(id *)arg1;
- (id)_handleCVVDialogResult:(id)arg1 shouldReattempt:(_Bool *)arg2;
- (id)_handleCarrierDialogResult:(id)arg1 shouldReattempt:(_Bool *)arg2;
- (id)performWithTaskInfo:(id)arg1;
- (id)initWithPayload:(id)arg1 taskInfo:(id)arg2;

@end
