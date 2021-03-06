//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SKUIStorePageSectionContext, SKUIViewElementLayoutContext, UIColor;
@protocol SKUIGridViewElementPageSectionConfigurationDataSource;

__attribute__((visibility("hidden")))
@interface SKUIGridViewElementPageSectionConfiguration : NSObject
{
    long long _cardVerticalSpacingStyle;
    double _cellContentWidth;
    BOOL _cellPaddingNeedsReloading;
    double _cellPaddingInteriorHorizontal;
    double _cellPaddingLeftEdgeHorizontal;
    double _cellPaddingRightEdgeHorizontal;
    UIEdgeInsets _gridViewElementStyleElementPadding;
    double _gridViewElementStyleItemWidth;
    BOOL _gridViewElementStyleItemWidthIsPercentage;
    BOOL _gridIsEdgeToEdge;
    BOOL _hasGridViewElementStyle;
    BOOL _hasHeader;
    UIEdgeInsets _separatorMargins;
    long long _lockupType;
    double _minimumCellHeight;
    NSUInteger _numberOfGridItems;
    NSArray *_positions;
    UIColor *_separatorColor;
    long long _separatorStyle;
    UIEdgeInsets _separatorWidths;
    BOOL _showsEditMode;
    NSArray *_viewElements;
    struct {
        unsigned int configurePositionForItemAtIndexPath:1;
    } _dataSourceRespondsToSelectorFlags;
    BOOL _rendersWithPerspective;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    long long _numberOfColumns;
    SKUIStorePageSectionContext *_pageSectionContext;
    id <SKUIGridViewElementPageSectionConfigurationDataSource> _dataSource;
}

@property(nonatomic) __weak id <SKUIGridViewElementPageSectionConfigurationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) BOOL showsEditMode; // @synthesize showsEditMode=_showsEditMode;
@property(nonatomic) BOOL rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property(retain, nonatomic) SKUIStorePageSectionContext *pageSectionContext; // @synthesize pageSectionContext=_pageSectionContext;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(retain, nonatomic) SKUIViewElementLayoutContext *cellLayoutContext; // @synthesize cellLayoutContext=_cellLayoutContext;
// - (void).cxx_destruct;
- (BOOL)_useOrdinalPadding;
- (void)_reloadCellPaddingIfNeeded;
- (long long)_numberOfColumnsForWidth:(double)arg1 style:(id)arg2;
- (UIEdgeInsets)_normalizedContentInsetForViewElement:(id)arg1 indexPath:(id)arg2;
- (long long)_lockupTypeForLockup:(id)arg1;
- (id)_lockupCellReuseIdentifierWithLockup:(id)arg1;
- (BOOL)_isContainedWithinExploreTemplateWithGridViewElement:(id)arg1;
- (void)_enumerateViewElementsForRowOfIndexPath:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (double)_columnContentWidthPaddingForWidth:(double)arg1;
- (double)_cellPaddingRightEdgeHorizontal;
- (double)_cellPaddingLeftEdgeHorizontal;
- (double)_cellPaddingInteriorHorizontal;
- (UIEdgeInsets)_cellInsetsForViewElement:(id)arg1 indexPath:(id)arg2;
- (double)_cellHeightForViewElement:(id)arg1 width:(double)arg2;
- (double)_cellContentWidth;
- (Class)_cardCellClassForCard:(id)arg1;
- (id)_cardArtworkBoundingSizeForIndexPath:(id)arg1;
- (BOOL)viewElementIsStandardCard:(id)arg1;
- (void)updateStylePropertiesForGridViewElement:(id)arg1 gridItemViewElements:(id)arg2 numberOfGridItems:(NSUInteger)arg3;
- (void)updateLayoutPropertiesForGridViewElement:(id)arg1;
- (UIEdgeInsets)sectionContentInsetAdjustedFromValue:(UIEdgeInsets)arg1 forGridViewElement:(id)arg2;
- (void)requestCellLayoutForViewElement:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 forViewElement:(id)arg2 reason:(long long)arg3;
- (void)registerReusableClassesForCollectionView:(id)arg1;
- (long long)positionForIndexPath:(id)arg1;
- (Class)lockupCellClassWithLockup:(id)arg1;
- (void)configureCell:(id)arg1 forViewElement:(id)arg2 indexPath:(id)arg3;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (CGSize)cellSizeForViewElement:(id)arg1 indexPath:(id)arg2;
- (id)cellForViewElement:(id)arg1 indexPath:(id)arg2;
- (Class)cellClassForViewElement:(id)arg1;
- (id)backgroundColorForViewElement:(id)arg1;
@property(readonly, nonatomic) double columnWidth;
@property(readonly, nonatomic) double columnContentWidth;

@end

