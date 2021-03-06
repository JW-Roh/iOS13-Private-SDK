//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/CALayerDelegate-Protocol.h>
#import <PhotosUICore/PXMutableCALayerPromise-Protocol.h>

@class CALayer;

@interface PXCALayerPromise : PXObservable <PXMutableCALayerPromise, CALayerDelegate>
{
    BOOL _startedLayerRealization;
    BOOL _rendersAsynchronously;
    BOOL _shouldCancel;
    double _contentsScale;
    CALayer *_layer;
    CGRect _bounds;
}

@property(readonly, nonatomic) BOOL shouldCancel; // @synthesize shouldCancel=_shouldCancel;
@property(retain, nonatomic, setter=_setLayer:) CALayer *layer; // @synthesize layer=_layer;
@property(readonly, nonatomic) BOOL rendersAsynchronously; // @synthesize rendersAsynchronously=_rendersAsynchronously;
@property(readonly, nonatomic) double contentsScale; // @synthesize contentsScale=_contentsScale;
@property(readonly, nonatomic) CGRect bounds; // @synthesize bounds=_bounds;
// - (void).cxx_destruct;
- (void)drawLayer:(id)arg1 inContext:(CGContext )arg2;
- (void)invalidateLayer;
- (id)mutableChangeObject;
- (void)performChanges:(id /* CDUnknownBlockType */)arg1;
- (void)drawLayerContentInContext:(CGContext )arg1;
- (id)createCustomLayer;
- (void)cancelLayerRealization;
- (void)_handlePreparedLayer:(id)arg1;
- (void)_realizeLayer;
- (void)startLayerRealization;
- (void)dealloc;
- (id)init;

@end

