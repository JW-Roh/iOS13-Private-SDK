//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGItemsLayout.h>

#import <PhotosUICore/PXCuratedLibraryAllPhotosBodyLayout-Protocol.h>
#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>
#import <PhotosUICore/PXGItemsGeometry-Protocol.h>

@class NSString;

@interface PXGGridLayout : PXGItemsLayout <PXCuratedLibraryAllPhotosBodyLayout, PXGItemsGeometry, PXGDiagnosticsProvider>
{
    CDStruct_d97c9657 _updateFlags;
    BOOL _isUpdating;
    CGSize _itemSize;
    double _finalInterItemSpacing;
    UIEdgeInsets _finalInsets;
    BOOL _canHandleVisibleRectRejection;
    BOOL _enableBestCropRect;
    unsigned char _mediaFlags;
    BOOL _fillSafeAreaTopInset;
    BOOL _hideIncompleteLastRow;
    BOOL _mediaTargetSizeIgnoresSpacing;
    BOOL _loadItemsOutsideAnchorViewport;
    int _mediaKind;
    int _presentationType;
    long long _style;
    long long _contentMode;
    long long _numberOfColumns;
    double _interItemSpacing;
    double _itemCaptionSpacing;
    double _itemAspectRatio;
    double _aspectRatioLimit;
    long long _visualItemShift;
    id _anchorObjectReference;
    CDStruct_2bd92d94 _itemCornerRadius;
    CDStruct_2bd92d94 _edgeCornerRadius;
    CGPoint _anchorViewportCenter;
    CGPoint _contentOrigin;
    UIEdgeInsets _padding;
}

@property(nonatomic) CGPoint contentOrigin; // @synthesize contentOrigin=_contentOrigin;
@property(nonatomic) BOOL loadItemsOutsideAnchorViewport; // @synthesize loadItemsOutsideAnchorViewport=_loadItemsOutsideAnchorViewport;
@property(nonatomic) CGPoint anchorViewportCenter; // @synthesize anchorViewportCenter=_anchorViewportCenter;
@property(retain, nonatomic) id anchorObjectReference; // @synthesize anchorObjectReference=_anchorObjectReference;
@property(nonatomic) CDStruct_2bd92d94 edgeCornerRadius; // @synthesize edgeCornerRadius=_edgeCornerRadius;
@property(nonatomic) CDStruct_2bd92d94 itemCornerRadius; // @synthesize itemCornerRadius=_itemCornerRadius;
@property(nonatomic) BOOL mediaTargetSizeIgnoresSpacing; // @synthesize mediaTargetSizeIgnoresSpacing=_mediaTargetSizeIgnoresSpacing;
@property(nonatomic) BOOL hideIncompleteLastRow; // @synthesize hideIncompleteLastRow=_hideIncompleteLastRow;
@property(nonatomic) long long visualItemShift; // @synthesize visualItemShift=_visualItemShift;
@property(nonatomic) BOOL fillSafeAreaTopInset; // @synthesize fillSafeAreaTopInset=_fillSafeAreaTopInset;
@property(nonatomic) int presentationType; // @synthesize presentationType=_presentationType;
@property(nonatomic) unsigned char mediaFlags; // @synthesize mediaFlags=_mediaFlags;
@property(nonatomic) int mediaKind; // @synthesize mediaKind=_mediaKind;
@property(nonatomic) double aspectRatioLimit; // @synthesize aspectRatioLimit=_aspectRatioLimit;
@property(nonatomic) BOOL enableBestCropRect; // @synthesize enableBestCropRect=_enableBestCropRect;
@property(nonatomic) double itemAspectRatio; // @synthesize itemAspectRatio=_itemAspectRatio;
@property(nonatomic) double itemCaptionSpacing; // @synthesize itemCaptionSpacing=_itemCaptionSpacing;
@property(nonatomic) double interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) BOOL canHandleVisibleRectRejection; // @synthesize canHandleVisibleRectRejection=_canHandleVisibleRectRejection;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
- (id)itemsInRect:(CGRect)arg1 inLayout:(id)arg2;
- (id)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2;
- (long long)itemClosestToItem:(long long)arg1 inDirection:(NSUInteger)arg2;
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(id /* CDUnknownBlockType */)arg3 modifyState:(id /* CDUnknownBlockType */)arg4;
- (void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)loadedItemsDidChange;
- (void)safeAreaInsetsDidChange;
- (void)visibleRectDidChange;
- (void)alphaDidChange;
- (void)screenScaleDidChange;
- (void)referenceSizeDidChange;
- (BOOL)shouldUpdateDecorationMediaTargetSizes;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(NSUInteger)arg2 updatedObjectReference:(out id )arg3;
- (id)itemsGeometry;
- (NSRange)itemsToLoad;
- (CGRect)_pageAlignedRectForVisibleRect:(CGRect)arg1;
- (NSRange)_itemsToLoadForVisibleRect:(CGRect)arg1;
- (NSRange)itemRangeForSpriteIndexRange:(struct _PXGSpriteIndexRange)arg1;
- (NSRange)itemRangeInRect:(CGRect)arg1;
@property(readonly, nonatomic) CGRect loadedItemsRect;
- (long long)itemClosestTo:(CGPoint)arg1;
- (long long)columnForItem:(long long)arg1;
- (long long)_rowForItem:(long long)arg1;
- (void)_getItemSize:(CGSize )arg1 finalInteritemSpacing:(double )arg2 finalInsets:(UIEdgeInsets )arg3 forDesiredInterItemSpacing:(double)arg4 padding:(UIEdgeInsets)arg5;
- (CGRect)_frameForItem:(long long)arg1 usingInterItemSpacing:(double)arg2 itemSize:(CGSize)arg3 insets:(UIEdgeInsets)arg4;
- (CGRect)frameForItem:(long long)arg1 usingInterItemSpacing:(double)arg2;
- (CGRect)frameForItem:(long long)arg1;
- (struct _PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(CGRect)arg1;
- (CGRect)_contentRectInLayout:(CGRect)arg1;
- (CGRect)_layoutRectInContent:(CGRect)arg1;
- (CGPoint)_contentPointInLayout:(CGPoint)arg1;
- (CGPoint)_layoutPointInContent:(CGPoint)arg1;
@property(readonly, nonatomic) long long numberOfVisualItems;
@property(readonly, nonatomic) long long numberOfVisualRows;
@property(readonly, nonatomic) double rowHeight;
- (void)_updateSpriteStyles;
- (void)_updateSprites;
- (void)_updateContentSize;
- (void)_updateColumnsMetrics;
- (void)update;
@property(readonly, copy) NSString *description;
- (id)init;
- (BOOL)shiftItem:(long long)arg1 toColumn:(long long)arg2 hideIncompleteRows:(BOOL)arg3;
@property(readonly, nonatomic) BOOL itemCaptionsVisible;
@property(readonly, nonatomic) BOOL supportsContentMode;

@end

