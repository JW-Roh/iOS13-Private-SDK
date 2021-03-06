//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarActionsViewControllerDelegate-Protocol.h>
#import <AvatarUI/AVTAvatarPicker-Protocol.h>
#import <AvatarUI/AVTNotifyingContainerViewDelegate-Protocol.h>
#import <AvatarUI/AVTObjectViewController-Protocol.h>
#import <AvatarUI/AVTStickerSheetControllerDelegate-Protocol.h>

@class AVTAvatarRecordDataSource, AVTUIEnvironment, AVTUIStickerGeneratorPool, NSArray, NSIndexPath, NSMutableDictionary, UICollectionView, UIView, _AVTAvatarRecordImageProvider;
@protocol AVTAvatarPickerDelegate, AVTPresenterDelegate, AVTResourceCache, AVTStickerDisclosureValidationDelegate, AVTStickerPagingControllerDelegate, AVTTaskScheduler, OS_dispatch_queue;

@interface AVTStickerPagingController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTStickerSheetControllerDelegate, AVTNotifyingContainerViewDelegate, AVTAvatarActionsViewControllerDelegate, AVTObjectViewController, AVTAvatarPicker>
{
    BOOL _allowsPeel;
    id <AVTPresenterDelegate> presenterDelegate;
    id <AVTAvatarPickerDelegate> avatarPickerDelegate;
    id <AVTStickerPagingControllerDelegate> _delegate;
    id <AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSObject<OS_dispatch_queue> *_encodingQueue;
    AVTAvatarRecordDataSource *_dataSource;
    AVTUIStickerGeneratorPool *_stickerGeneratorPool;
    AVTUIEnvironment *_environment;
    NSMutableDictionary *_pageForRecords;
    id <AVTTaskScheduler> _taskScheduler;
    id <AVTResourceCache> _cache;
    _AVTAvatarRecordImageProvider *_imageProvider;
    NSArray *_memojiStickerConfigurations;
    UIView *_view;
    UICollectionView *_collectionView;
    NSIndexPath *_pageIndexBeforeSizeChange;
    CGPoint _pageContentOffset;
    CGPoint _endDraggingTargetContentOffset;
    UIEdgeInsets _pageContentInsets;
}

+ (id)stickerCacheWithEnvironment:(id)arg1;
@property(retain, nonatomic) NSIndexPath *pageIndexBeforeSizeChange; // @synthesize pageIndexBeforeSizeChange=_pageIndexBeforeSizeChange;
@property(nonatomic) CGPoint endDraggingTargetContentOffset; // @synthesize endDraggingTargetContentOffset=_endDraggingTargetContentOffset;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSArray *memojiStickerConfigurations; // @synthesize memojiStickerConfigurations=_memojiStickerConfigurations;
@property(readonly, nonatomic) _AVTAvatarRecordImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(readonly, nonatomic) id <AVTResourceCache> cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) id <AVTTaskScheduler> taskScheduler; // @synthesize taskScheduler=_taskScheduler;
@property(readonly, nonatomic) BOOL allowsPeel; // @synthesize allowsPeel=_allowsPeel;
@property(retain, nonatomic) NSMutableDictionary *pageForRecords; // @synthesize pageForRecords=_pageForRecords;
@property(retain, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) AVTUIStickerGeneratorPool *stickerGeneratorPool; // @synthesize stickerGeneratorPool=_stickerGeneratorPool;
@property(retain, nonatomic) AVTAvatarRecordDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue; // @synthesize encodingQueue=_encodingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue; // @synthesize renderingQueue=_renderingQueue;
@property(nonatomic) __weak id <AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate; // @synthesize disclosureValidationDelegate=_disclosureValidationDelegate;
@property(nonatomic) __weak id <AVTStickerPagingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CGPoint pageContentOffset; // @synthesize pageContentOffset=_pageContentOffset;
@property(nonatomic) UIEdgeInsets pageContentInsets; // @synthesize pageContentInsets=_pageContentInsets;
@property(nonatomic) __weak id <AVTAvatarPickerDelegate> avatarPickerDelegate; // @synthesize avatarPickerDelegate;
@property(nonatomic) __weak id <AVTPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate;
// - (void).cxx_destruct;
- (CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2;
- (void)notifyingContainerViewDidChangeSize:(CGSize)arg1;
- (void)notifyingContainerViewWillChangeSize:(CGSize)arg1;
- (id)avatarActionsViewController:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
- (void)avatarActionsViewControllerDidFinish:(id)arg1;
- (void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)stickerSheetController:(id)arg1 didInteractWithStickerAtIndex:(long long)arg2 byPeeling:(BOOL)arg3;
- (void)stickerSheetController:(id)arg1 didFinishRenderingStickersForRecord:(id)arg2;
- (void)stickerSheetController:(id)arg1 scrollView:(id)arg2 willEndDraggingWithTargetContentOffset:(inout CGPoint )arg3;
- (void)stickerSheetController:(id)arg1 didScrollToContentOffset:(CGPoint)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)firstPageItemView;
- (void)willEndDisplaying;
- (void)willStartDisplaying;
- (void)wrapAndPresentViewController:(id)arg1 animated:(BOOL)arg2;
- (long long)pageIndexForAvatarRecordIdentifier:(id)arg1;
- (void)updateForEndingScrollWithTargetContentOffset:(CGPoint)arg1;
- (void)scrollToPageAtIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)scrollToAvatarWithIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)centeredPageWithOffset:(CGPoint)arg1;
- (void)reloadPageForRecord:(id)arg1 atIndex:(long long)arg2;
- (void)deletePageForRecord:(id)arg1 atIndex:(long long)arg2;
- (void)insertPageForRecord:(id)arg1 atIndex:(long long)arg2;
- (id)sheetControllerAtIndex:(long long)arg1;
- (id)reloadSheetControllerForRecord:(id)arg1;
- (id)sheetControllerForRecord:(id)arg1;
- (void)reloadData;
- (void)loadView;
- (id)initWithRecordDataSource:(id)arg1 recordImageProvider:(id)arg2 environment:(id)arg3 allowsPeel:(BOOL)arg4;
- (long long)pageIndexForAvatarRecordIdentifierForPPT:(id)arg1;
- (id)collectionViewForPPT;

@end

