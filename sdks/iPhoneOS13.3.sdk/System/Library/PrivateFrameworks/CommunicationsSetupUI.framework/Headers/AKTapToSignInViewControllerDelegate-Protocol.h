//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommunicationsSetupUI/AKSignInViewControllerDelegate-Protocol.h>

@class AKTapToSignInViewController, NSDictionary, NSError;

@protocol AKTapToSignInViewControllerDelegate <AKSignInViewControllerDelegate>
- (void)tapToSignInViewController:(AKTapToSignInViewController *)arg1 didAuthenticateWithResults:(NSDictionary *)arg2 error:(NSError *)arg3;
@end

