//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKBrowserViewControllerSendDelegate-Protocol.h>

@class NSData, NSString, NSURL, UIViewController;
@protocol CKPluginEntryViewController;

@protocol CKPhotoBrowserViewControllerSendDelegate <CKBrowserViewControllerSendDelegate>
- (void)stageAssetArchive:(NSData *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (NSURL *)workingDraftDirForPluginIdentifier:(NSString *)arg1;
- (NSURL *)workingDirForDraft;
- (void)showPhotosBrowser;
- (void)dismissEntryViewShelf;
- (void)showModalViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)showEntryViewShelf:(UIViewController<CKPluginEntryViewController> *)arg1 forPlugin:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (void)showEntryViewShelf:(UIViewController<CKPluginEntryViewController> *)arg1;
@end
