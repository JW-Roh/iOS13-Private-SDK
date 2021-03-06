//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>

@class NSDateFormatter, PKObjectDownloader, UICollectionViewCell, UIImage;

@interface PKTransactionHistoryHeaderPresenter : NSObject <PKDashboardItemPresenter>
{
    PKObjectDownloader *_fileDownloader;
    UICollectionViewCell *_templateCell;
    UIImage *_logoImage;
    UIImage *_logoBackgroundImage;
    UIImage *_heroImage;
    NSDateFormatter *_formatterMonth;
}

// - (void).cxx_destruct;
- (void)_configureCategoryHeaderCell:(id)arg1 forITem:(id)arg2;
- (void)_configureTransactionTypeHeaderCell:(id)arg1 forItem:(id)arg2;
- (id)_transactionTypeHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)_transactionGroupHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)_configurePeerPaymentHeaderCell:(id)arg1 forITem:(id)arg2;
- (id)_peerPaymentHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)_backgroundImageFromLogoImage:(id)arg1;
- (void)_updateMerchantHeaderImagesOnCell:(id)arg1 item:(id)arg2;
- (void)_configureMerchantHeaderCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (id)_merchantHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (Class)itemClass;
- (BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (id)init;

@end

