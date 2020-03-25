//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPTextHostRep.h>

#import <iWorkImport/CALayerDelegate-Protocol.h>
#import <iWorkImport/TSTTableRepInternal-Protocol.h>

@class CALayer, CAShapeLayer, NSMutableArray, NSMutableDictionary, NSSet, TSDTilingLayer, TSTAnimation, TSTCellSelection, TSTLayout, TSTMasterLayout, TSTSelectionDragController, TSTTableInfo, TSTTableReferences;
@protocol TSTCanvasReferenceController, TSTTableAnimationController, TSTTableChromeProvider, TSTTableRepDelegate;

__attribute__((visibility("hidden")))
@interface TSTTableRep : TSWPTextHostRep <TSTTableRepInternal, UITextFieldDelegate, CALayerDelegate>
{
    BOOL _tableRepIsBeingRemovedFromBackgroundLayout;
    BOOL _selectionDragAbortedOnNewSelection;
    BOOL _selectionUsesBezierPath;
    BOOL _selectsCellOnInitialTap;
    BOOL _usesWholeChromeResizer;
    BOOL _isZoomToEditOperationInProgress;
    BOOL _tableNameValid;
    BOOL _shouldRepositionStockPopover;
    BOOL _zoomToEditOperationIsInProgress;
    BOOL _aspectOperationIsInProgress;
    BOOL _zoomOperationIsInProgress;
    BOOL _recursivelyDrawingInContext;
    BOOL _dragByHandleOnly;
    NSMutableDictionary *_childTextReps;
    struct TSUCellCoord _ratingsDragCellID;
    TSTTableReferences *_references;
    TSTSelectionDragController *_cellDragController;
    NSSet *_visibleFillKnobs;
    id <TSTTableAnimationController> _animationController;
    id <TSTTableRepDelegate> _delegate;
    id <TSTTableChromeProvider> _tableChrome;
    id <TSTCanvasReferenceController> _canvasReferenceController;
    TSDTilingLayer *_overlayTableName;
    TSDTilingLayer *_overlayFrozenHeaderCorner;
    TSDTilingLayer *_overlayFrozenHeaderRows;
    TSDTilingLayer *_overlayFrozenHeaderColumns;
    CALayer *_overlayFrozenHeaderRowsMask;
    CALayer *_overlayFrozenHeaderColumnsMask;
    CALayer *_overlayFrozenHeaderTableBodyMask;
    CALayer *_overlayFrozenHeaderTableNameMask;
    double _currentScreenScale;
    NSMutableArray *_animationStack;
    CAShapeLayer *_cellEditingMaskLayer;
    CAShapeLayer *_findSelectionHighlightLayer;
    struct TSUCellRect _dirtyCellRange;
    struct TSUCellRect _zoomToEditVisibleCellRange;
    CGRect _searchSelectionBounds;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
+ (NSUInteger)p_countOfIdenticalCellsBetweenOutgoingTableInfo:(id)arg1 incomingTableInfo:(id)arg2;
+ (Class)tableRepDelegateClass;
@property(retain, nonatomic) CAShapeLayer *findSelectionHighlightLayer; // @synthesize findSelectionHighlightLayer=_findSelectionHighlightLayer;
@property(retain, nonatomic) CAShapeLayer *cellEditingMaskLayer; // @synthesize cellEditingMaskLayer=_cellEditingMaskLayer;
@property(readonly, nonatomic) BOOL dragByHandleOnly; // @synthesize dragByHandleOnly=_dragByHandleOnly;
@property(nonatomic) struct TSUCellRect zoomToEditVisibleCellRange; // @synthesize zoomToEditVisibleCellRange=_zoomToEditVisibleCellRange;
@property(readonly, nonatomic) NSMutableArray *animationStack; // @synthesize animationStack=_animationStack;
@property(nonatomic, getter=isRecursivelyDrawingInContext) BOOL recursivelyDrawingInContext; // @synthesize recursivelyDrawingInContext=_recursivelyDrawingInContext;
@property(nonatomic) struct TSUCellRect dirtyCellRange; // @synthesize dirtyCellRange=_dirtyCellRange;
@property(nonatomic) double currentScreenScale; // @synthesize currentScreenScale=_currentScreenScale;
@property(retain, nonatomic) CALayer *overlayFrozenHeaderTableNameMask; // @synthesize overlayFrozenHeaderTableNameMask=_overlayFrozenHeaderTableNameMask;
@property(retain, nonatomic) CALayer *overlayFrozenHeaderTableBodyMask; // @synthesize overlayFrozenHeaderTableBodyMask=_overlayFrozenHeaderTableBodyMask;
@property(retain, nonatomic) CALayer *overlayFrozenHeaderColumnsMask; // @synthesize overlayFrozenHeaderColumnsMask=_overlayFrozenHeaderColumnsMask;
@property(retain, nonatomic) CALayer *overlayFrozenHeaderRowsMask; // @synthesize overlayFrozenHeaderRowsMask=_overlayFrozenHeaderRowsMask;
@property(retain, nonatomic) TSDTilingLayer *overlayFrozenHeaderColumns; // @synthesize overlayFrozenHeaderColumns=_overlayFrozenHeaderColumns;
@property(retain, nonatomic) TSDTilingLayer *overlayFrozenHeaderRows; // @synthesize overlayFrozenHeaderRows=_overlayFrozenHeaderRows;
@property(retain, nonatomic) TSDTilingLayer *overlayFrozenHeaderCorner; // @synthesize overlayFrozenHeaderCorner=_overlayFrozenHeaderCorner;
@property(retain, nonatomic) TSDTilingLayer *overlayTableName; // @synthesize overlayTableName=_overlayTableName;
@property(nonatomic) BOOL zoomOperationIsInProgress; // @synthesize zoomOperationIsInProgress=_zoomOperationIsInProgress;
@property(nonatomic) BOOL aspectOperationIsInProgress; // @synthesize aspectOperationIsInProgress=_aspectOperationIsInProgress;
@property(nonatomic) BOOL zoomToEditOperationIsInProgress; // @synthesize zoomToEditOperationIsInProgress=_zoomToEditOperationIsInProgress;
@property(nonatomic) BOOL shouldRepositionStockPopover; // @synthesize shouldRepositionStockPopover=_shouldRepositionStockPopover;
@property(nonatomic, getter=isTableNameValid) BOOL tableNameValid; // @synthesize tableNameValid=_tableNameValid;
@property(readonly, nonatomic) BOOL isZoomToEditOperationInProgress; // @synthesize isZoomToEditOperationInProgress=_isZoomToEditOperationInProgress;
@property(readonly, nonatomic) __weak id <TSTCanvasReferenceController> canvasReferenceController; // @synthesize canvasReferenceController=_canvasReferenceController;
@property(readonly, nonatomic) id <TSTTableChromeProvider> tableChrome; // @synthesize tableChrome=_tableChrome;
@property(readonly, nonatomic) id <TSTTableRepDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TSTTableAnimationController> animationController; // @synthesize animationController=_animationController;
@property(copy, nonatomic) NSSet *visibleFillKnobs; // @synthesize visibleFillKnobs=_visibleFillKnobs;
@property(readonly, nonatomic) BOOL usesWholeChromeResizer; // @synthesize usesWholeChromeResizer=_usesWholeChromeResizer;
@property(readonly, nonatomic) BOOL selectsCellOnInitialTap; // @synthesize selectsCellOnInitialTap=_selectsCellOnInitialTap;
@property(readonly, nonatomic) BOOL selectionUsesBezierPath; // @synthesize selectionUsesBezierPath=_selectionUsesBezierPath;
@property(nonatomic) BOOL selectionDragAbortedOnNewSelection; // @synthesize selectionDragAbortedOnNewSelection=_selectionDragAbortedOnNewSelection;
@property(nonatomic) __weak TSTSelectionDragController *cellDragController; // @synthesize cellDragController=_cellDragController;
@property(readonly, nonatomic) TSTTableReferences *references; // @synthesize references=_references;
@property(nonatomic) struct TSUCellCoord ratingsDragCellID; // @synthesize ratingsDragCellID=_ratingsDragCellID;
@property(nonatomic) CGRect searchSelectionBounds; // @synthesize searchSelectionBounds=_searchSelectionBounds;
@property BOOL tableRepIsBeingRemovedFromBackgroundLayout; // @synthesize tableRepIsBeingRemovedFromBackgroundLayout=_tableRepIsBeingRemovedFromBackgroundLayout;
@property(readonly, nonatomic) NSMutableDictionary *childTextReps; // @synthesize childTextReps=_childTextReps;
// - (void).cxx_destruct;
- (void)drawInContext:(CGContext )arg1;
- (void)recursivelyDrawInContext:(CGContext )arg1 keepingChildrenPassingTest:(id /* CDUnknownBlockType */)arg2;
- (BOOL)canDrawInParallel;
- (BOOL)mustDrawOnMainThreadForInteractiveCanvas;
- (BOOL)canDrawInBackgroundDuringScroll;
- (void)invalidateFrozenHeaders;
- (void)validateFrozenHeaderTableBodyMask;
- (void)validateFrozenHeaderColumns;
- (void)validateFrozenHeaderRows;
- (void)validateFrozenHeaderCorner;
- (CGRect)p_alignedLayerFrameForLayoutSpace:(id)arg1 transform:(CGAffineTransform)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(CGContext )arg2;
- (id)textureForDescription:(id)arg1;
- (void)popAnimation;
- (void)pushAnimation:(id)arg1;
@property(readonly, nonatomic) TSTAnimation *currentAnimation;
- (void)didDrawCellImageFill:(id)arg1 inCellRange:(struct TSUCellRect)arg2;
- (BOOL)wantsActivityLine;
- (void)p_resetDynamicModePropertiesForContainedTextEditing;
- (void)p_updateDynamicModePropertiesForContainedTextEditingWithSpillingTextRange:(struct TSUCellRect)arg1;
- (void)p_updateDynamicModePropertiesForContainedTextEditing;
- (BOOL)isFullyVisibleWithBorder:(int)arg1;
- (void)validateVisibleRect;
- (void)validateStrokesInEditingSpillingTextRange;
- (void)updateFromLayout;
- (id)hyperlinkRegions;
- (id)hyperlinkContainerRep;
- (CGRect)naturalBoundsRectForHyperlinkField:(id)arg1;
- (CGAffineTransform)p_horizontalAlignmentTransformForHyperlinkWithBounds:(CGRect)arg1 inCell:(struct TSUCellCoord)arg2;
- (struct TSUCellCoord)p_cellIDForHyperlinkField:(id)arg1;
- (id)p_columnForCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)logicalCellIDForUnscaledCanvasPoint:(CGPoint)arg1;
- (id)editorSelection;
- (void)contentsRectForCellRangeAcrossSpaces:(struct TSUCellRect)arg1 contentsCenterInfo:(CDStruct_7bd98050 )arg2 canvasFrame:(CGRect )arg3 contentsRect:(CGRect )arg4;
- (CGRect)boundsForCellSelection:(struct TSUCellCoord)arg1;
- (CGRect)canvasBoundsForCellRange:(struct TSUCellRect)arg1;
- (CGRect)deviceBoundsForCellRange:(struct TSUCellRect)arg1;
- (BOOL)isDraggable;
- (BOOL)p_shouldPerformOnChildTextReps:(SEL)arg1;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (id)childReps;
- (void)updateChildrenFromLayout;
- (void)willBeRemoved;
- (void)invalidateEditingCell;
- (void)asyncPostTextChangedInRange:(struct TSUCellRect)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)p_addObservers;
- (void)p_removeObservers;
- (void)dealloc;
- (CGRect)layerFrameInScaledCanvas;
- (BOOL)p_isTableRenderingRotated;
- (id)hitRepChrome:(CGPoint)arg1;
- (id)hitRep:(CGPoint)arg1 withPrecision:(BOOL)arg2;
@property(readonly, nonatomic) long long selectionType;
@property(readonly, nonatomic) TSTCellSelection *selection;
@property(readonly, nonatomic) CGRect canvasVisibleRect;
@property(readonly, nonatomic) CGAffineTransform transformFromCanvas;
@property(readonly, nonatomic) CGAffineTransform transformToCanvas;
@property(readonly, nonatomic) TSTMasterLayout *masterLayout;
@property(readonly, nonatomic) BOOL layoutDirectionIsLeftToRight;
@property(readonly, nonatomic) TSTLayout *tableLayout;
@property(readonly, nonatomic) TSTTableInfo *tableModel;
@property(readonly, nonatomic) TSTTableInfo *tableInfo;

@end
