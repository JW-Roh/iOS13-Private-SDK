//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDAction.h>

#import <DataDetectorsUI/MFMailComposeViewControllerDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface DDSendMailAction : DDAction <MFMailComposeViewControllerDelegate>
{
}

- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)viewController;
- (BOOL)canBePerformedByOpeningURL;
- (void)performFromView:(id)arg1;
- (int)interactionType;
- (id)notificationURL;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)icon;
- (id)localizedName;
- (id)initWithURL:(id)arg1 result:(struct __DDResult )arg2 context:(id)arg3;

@end

