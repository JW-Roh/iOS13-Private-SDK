//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSAbstractApplicationService.h>

@interface SBSApplicationShortcutService : SBSAbstractApplicationService
{
}

- (void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2;
- (void)fetchDynamicApplicationShortcutItemsForBundleIdentifier:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)updateDynamicApplicationShortcutItems:(id)arg1;
- (void)fetchDynamicApplicationShortcutItemsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)updateDynamicApplicationShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)applicationShortcutItemsOfTypes:(NSUInteger)arg1 forBundleIdentifier:(id)arg2;
- (void)fetchApplicationShortcutItemsOfTypes:(NSUInteger)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;

@end
