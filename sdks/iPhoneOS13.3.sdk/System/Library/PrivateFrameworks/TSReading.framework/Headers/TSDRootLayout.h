//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDAbstractLayout.h>

#import <TSReading/TSDAdaptiveLayout-Protocol.h>

@class TSDLayoutController, TSUPointerKeyDictionary;

@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout>
{
    TSDLayoutController *mLayoutController;
    BOOL mSupportsAdaptiveLayout;
    TSUPointerKeyDictionary *mShiftedObjects;
}

- (CGPoint)applyAdaptiveLayoutTo:(id)arg1 info:(id)arg2 offset:(CGPoint)arg3;
- (void)endDynamicAdaptiveLayout;
- (void)beginDynamicAdaptiveLayout;
- (id)p_shiftedObjects;
- (BOOL)isRootLayoutForInspectorGeometry;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (BOOL)providesGuidesForChildLayouts;
- (id)childLayoutsInRect:(CGRect)arg1;
- (id)layoutController;
- (void)dealloc;
- (id)initWithLayoutController:(id)arg1;

@end
