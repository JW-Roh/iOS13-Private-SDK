//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AMSAuthenticateRequest, AMSDialogRequest, NSArray;

@protocol ASDNotificationServiceProtocol
- (void)deliverProgress:(NSArray *)arg1;
- (void)deliverNotifications:(NSArray *)arg1;
- (void)deliverDialogRequest:(AMSDialogRequest *)arg1 withResultHandler:(void (^)(AMSDialogResult *, NSError *))arg2;
- (void)deliverAuthenticateRequest:(AMSAuthenticateRequest *)arg1 withResultHandler:(void (^)(AMSAuthenticateResult *, NSError *))arg2;
@end

