//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class PKPaymentWebService;

@protocol PKPaymentWebServiceDelegate 
- (void)paymentWebService:(PKPaymentWebService *)arg1 didCompleteTSMConnectionForTaskID:(unsigned long long)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 didQueueTSMConnectionForTaskID:(unsigned long long)arg2;
@end
