//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class CNObservableContractTerminationContext;

@interface CNObservableContractEnforcement : NSObject <CNObserver>
{
    NSUInteger _state;
    CNObservableContractTerminationContext *_terminationContext;
}

+ (id)os_log;
+ (BOOL)shouldSwizzleNilResults;
+ (BOOL)shouldEnforceRxProtocols;
// - (void).cxx_destruct;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;

@end

