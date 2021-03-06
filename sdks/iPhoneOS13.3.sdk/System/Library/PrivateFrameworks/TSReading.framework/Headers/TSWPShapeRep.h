//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDShapeRep.h>

#import <TSReading/CALayerDelegate-Protocol.h>
#import <TSReading/TSDContainerRep-Protocol.h>
#import <TSReading/TSWPShapeLayoutDelegate-Protocol.h>

@class CALayer, NSObject, TSWPRep;
@protocol TSDContainerInfo;

@interface TSWPShapeRep : TSDShapeRep <CALayerDelegate, TSDContainerRep, TSWPShapeLayoutDelegate>
{
    BOOL _editingContainedRep;
    CALayer *_overflowGlyphLayer;
    TSWPRep *_containedRep;
}

@property(readonly, nonatomic) TSWPRep *containedRep; // @synthesize containedRep=_containedRep;
- (void)shapeLayoutDidChangeContainedStorage:(id)arg1;
- (BOOL)shapeLayoutShouldUpdateInstructionalText:(id)arg1;
- (BOOL)isEditingChildRep;
- (double)pParagraphAlignmentOffset;
- (NSUInteger)enabledKnobMask;
- (id)p_overflowKnobImage;
- (void)processChangedProperty:(int)arg1;
- (BOOL)isInvisible;
- (BOOL)isDraggable;
- (id)additionalLayersOverLayer;
- (id)overlayLayers;
- (void)p_resetOverflowGlyphLayerIfNecessary;
- (BOOL)canBeginEditingChildRepOnDoubleTap:(id)arg1;
- (void)selectChildRep:(id)arg1;
- (BOOL)canSelectChildRep:(id)arg1;
- (BOOL)mustDrawTilingLayerOnMainThread:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)childReps;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (BOOL)p_shouldShowTextOverflowGlyph;
- (BOOL)shouldShowKnobs;
- (BOOL)shouldShowSelectionHighlight;
- (id)hyperlinkRegions;
- (void)willBeRemoved;
- (BOOL)wantsToHandleTapsWhenLocked;
- (BOOL)wantsToHandleTapsOnContainingGroup;
- (BOOL)handleSingleTapAtPoint:(CGPoint)arg1;
- (BOOL)shouldIgnoreEditMenuTapAtPoint:(CGPoint)arg1 withRecognizer:(id)arg2;
- (int)dragTypeAtCanvasPoint:(CGPoint)arg1;
- (id)hitReps:(CGPoint)arg1 withSlop:(CGSize)arg2;
- (id)hitRep:(CGPoint)arg1;
- (void)willEndEditingContainedRep;
- (void)willBeginEditingContainedRep;
- (void)updateChildrenFromLayout;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

