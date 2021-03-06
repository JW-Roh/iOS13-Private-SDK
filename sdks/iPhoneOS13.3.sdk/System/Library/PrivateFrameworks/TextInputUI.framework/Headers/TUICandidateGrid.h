//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <TextInputUI/TUICandidateLayoutDataSource-Protocol.h>

@class NSArray, NSIndexPath, TIKeyboardCandidate, TUICandidateLayout, UICollectionView;
@protocol TUICandidateGridDelegate, TUICandidateViewStyle;

@interface TUICandidateGrid : UIView <TUICandidateLayoutDataSource, UICollectionViewDelegate>
{
    BOOL _candidateNumberEnabled;
    BOOL _suppressCollectionViewLayout;
    BOOL _collectionViewLayoutWasSkipped;
    BOOL _animating;
    NSArray *_candidateGroups;
    id <TUICandidateViewStyle> _style;
    NSIndexPath *_selectedIndexPath;
    long long _rowType;
    UIView *_customHeader;
    id <TUICandidateGridDelegate> _delegate;
    UICollectionView *_collectionView;
    TUICandidateLayout *_singleRowLayout;
    TUICandidateLayout *_multiRowLayout;
    NSIndexPath *_firstVisibleIndexPath;
    double _lastUserSelectedCursorX;
    double _selectedRowY;
    UIView *_selectedRowHighlightView;
    id <TUICandidateViewStyle> _stylePending;
    double _maximumRowHeight;
    CGSize _arrowButtonSize;
}

+ (BOOL)isSafariPasswordSuggestionCandidate:(id)arg1;
@property(nonatomic) double maximumRowHeight; // @synthesize maximumRowHeight=_maximumRowHeight;
@property(retain, nonatomic) id <TUICandidateViewStyle> stylePending; // @synthesize stylePending=_stylePending;
@property(nonatomic) BOOL animating; // @synthesize animating=_animating;
@property(nonatomic) BOOL collectionViewLayoutWasSkipped; // @synthesize collectionViewLayoutWasSkipped=_collectionViewLayoutWasSkipped;
@property(retain, nonatomic) UIView *selectedRowHighlightView; // @synthesize selectedRowHighlightView=_selectedRowHighlightView;
@property(nonatomic) double selectedRowY; // @synthesize selectedRowY=_selectedRowY;
@property(nonatomic) double lastUserSelectedCursorX; // @synthesize lastUserSelectedCursorX=_lastUserSelectedCursorX;
@property(retain, nonatomic) NSIndexPath *firstVisibleIndexPath; // @synthesize firstVisibleIndexPath=_firstVisibleIndexPath;
@property(retain, nonatomic) TUICandidateLayout *multiRowLayout; // @synthesize multiRowLayout=_multiRowLayout;
@property(retain, nonatomic) TUICandidateLayout *singleRowLayout; // @synthesize singleRowLayout=_singleRowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) BOOL suppressCollectionViewLayout; // @synthesize suppressCollectionViewLayout=_suppressCollectionViewLayout;
@property(nonatomic) CGSize arrowButtonSize; // @synthesize arrowButtonSize=_arrowButtonSize;
@property(nonatomic) __weak id <TUICandidateGridDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *customHeader; // @synthesize customHeader=_customHeader;
@property(nonatomic) BOOL candidateNumberEnabled; // @synthesize candidateNumberEnabled=_candidateNumberEnabled;
@property(nonatomic) long long rowType; // @synthesize rowType=_rowType;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) id <TUICandidateViewStyle> style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *candidateGroups; // @synthesize candidateGroups=_candidateGroups;
// - (void).cxx_destruct;
- (void)addAppCandidatesRenderSignposts;
- (id)_collectionView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)_sectionIndexTitlesForCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)didMoveHighlightFrame;
- (void)setSlottedSeparatorHidden:(BOOL)arg1 inCollectionView:(id)arg2 nearHighlightItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 widthForGroupHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)forceUpdateVisibleCells;
- (void)scrollToCandidateAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)updateSelectedRowHighlightView;
- (BOOL)handleNumberKey:(NSUInteger)arg1;
- (long long)rowForCandidate:(id)arg1;
- (long long)viewOffsetForCandidate:(id)arg1;
- (id)indexPathForCandidate:(id)arg1;
- (id)indexPathsForSelectedRow;
- (id)indexPathsInTheRowThatContainsFrame:(CGRect)arg1;
- (id)indexPathForCandidateNumber:(NSUInteger)arg1;
- (void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
- (BOOL)hasCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
- (BOOL)indexPathIsFullyVisible:(id)arg1;
- (id)indexPathInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
@property(readonly, nonatomic) TIKeyboardCandidate *selectedCandidate;
- (BOOL)indexPathIsValid:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(NSUInteger)arg3;
- (id)lastIndexPath;
- (id)firstIndexPath;
@property(readonly, nonatomic) CGSize contentSize;
- (NSUInteger)autofillExtraCandidatesCount;
- (NSUInteger)slottedCandidatesCount;
- (BOOL)showingSlottedCandidates;
- (id)candidateAtIndexPath:(id)arg1;
- (void)scrollToTop;
@property(readonly, nonatomic) double rowHeight;
- (void)updateContentInset;
- (UIEdgeInsets)safeAreaInsets;
- (void)setRowType:(long long)arg1 options:(NSUInteger)arg2 style:(id)arg3 animated:(BOOL)arg4 animator:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)setRowType:(long long)arg1 options:(NSUInteger)arg2 animated:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)setRowType:(long long)arg1 animated:(BOOL)arg2;
- (void)setStyle:(id)arg1 reload:(BOOL)arg2;
- (void)updateIndex;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSArray *visibleCandidates;
- (void)scrollToFirstCandidate;
- (id)collectionViewLayout;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;

@end

