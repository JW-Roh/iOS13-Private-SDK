//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionUI/APUIWFLIntentControllerDelegate-Protocol.h>
#import <AppPredictionUI/ATXTVIntentHandler-Protocol.h>

@class APUIWFLIntentController, ATXAction;

@interface APUITVIntentHandler : NSObject <APUIWFLIntentControllerDelegate, ATXTVIntentHandler>
{
    ATXAction *_action;
    APUIWFLIntentController *_intentController;
}

// - (void).cxx_destruct;
- (void)intentControllerDidFailAuthorizationCheck:(id)arg1;
- (void)intentController:(id)arg1 requiresContinuingInAppForIntent:(id)arg2 proceedHandler:(id /* CDUnknownBlockType */)arg3;
- (void)intentController:(id)arg1 requiresConfirmationForIntent:(id)arg2 intentResponse:(id)arg3;
- (void)intentController:(id)arg1 didHandleInteraction:(id)arg2;
- (void)intentController:(id)arg1 didFailWithError:(id)arg2 forInteraction:(id)arg3;
- (void)_punchToAppWithIntent:(id)arg1;
- (void)executeTVActionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithTVAction:(id)arg1 context:(long long)arg2;

@end

