//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FCPaymentTransactionObserver, NSString, SKPaymentTransaction;

@protocol FCPaymentTransactionObserverDelegate <NSObject>
- (void)paymentTransactionObserver:(FCPaymentTransactionObserver *)arg1 didFailPurchaseTransactionWithTransaction:(SKPaymentTransaction *)arg2;
- (void)paymentTransactionObserver:(FCPaymentTransactionObserver *)arg1 didFinishPurchaseTransactionWithProductID:(NSString *)arg2;
@end
