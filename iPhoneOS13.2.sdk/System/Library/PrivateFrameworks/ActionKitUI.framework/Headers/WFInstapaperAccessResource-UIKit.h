//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/WFInstapaperAccessResource.h>

#import <ActionKitUI/WFInstapaperLoginViewControllerDelegate-Protocol.h>

@class NSString;

@interface WFInstapaperAccessResource (UIKit) <WFInstapaperLoginViewControllerDelegate>
- (void)instapaperLoginViewControllerDidCancel:(id)arg1;
- (void)instapaperLoginViewController:(id)arg1 authenticatedWithUsername:(id)arg2 token:(id)arg3 tokenSecret:(id)arg4;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
@property(copy, nonatomic) id /* block */ completionHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end
