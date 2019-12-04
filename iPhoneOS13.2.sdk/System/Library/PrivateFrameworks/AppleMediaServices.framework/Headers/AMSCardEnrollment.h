//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMSCardEnrollment : NSObject
{
}

+ (id)_shouldAttemptApplePayWithCountryCode:(id)arg1 paymentNetworks:(id)arg2;
+ (id)_paymentServicesMerchantURLPromise;
+ (id)_currentIdentifier;
+ (id)_cardEligibilityStatusForCountryCode:(id)arg1;
+ (_Bool)shouldAttemptApplePayClassicWithCountryCode:(id)arg1 paymentNetworks:(id)arg2;
+ (void)updateAutoEnrollmentIdentifier;
+ (_Bool)shouldUseAutoEnrollmentWithPercentage:(double)arg1 sessionDuration:(double)arg2;
+ (_Bool)shouldAttemptAutoEnrollmentWithCountryCode:(id)arg1;
+ (_Bool)shouldAttemptApplePayClassicWithCountryCode:(id)arg1 paymentNetworks:(id)arg2 accessControlRef:(struct __SecAccessControl *)arg3;
+ (void)clearAutoEnrollmentIdentifier;
+ (_Bool)shouldAttemptAutoEnrollment;
+ (id)paymentServicesMerchantURL;
+ (_Bool)isBiometricACLUpgradeRequired;

@end
