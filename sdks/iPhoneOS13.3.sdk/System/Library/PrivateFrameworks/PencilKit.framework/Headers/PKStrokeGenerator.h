//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKInputProvider-Protocol.h>

@class PKStroke;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PKStrokeGenerator : NSObject <PKInputProvider>
{
    double _latestNonPredictedTimestamp;
    vector_58517711 _drawPoints;
    vector_03cfcf00 _outputPoints;
    long long _outputImmutableCount;
    BOOL _inputHasChanged;
    struct _PKStrokePoint _baseValues;
    NSObject<OS_dispatch_queue> *_inputQueue;
    PKStroke *_currentStroke;
    long long _currentInputType;
    long long _immutableCount;
    long long _missedUpdates;
    vector_58517711 _updatedDrawPoints;
    BOOL _drawingEndedButNotFinished;
    NSObject<OS_dispatch_semaphore> *_drawingWaitForFinishSemaphore;
    BOOL _useRuler;
    BOOL _isSnappedToRulerTopSide;
    BOOL _canSnapToRuler;
    BOOL _isSnappedToRuler;
    double _rulerWidth;
    double _strokeMaxForce;
    NSObject<OS_dispatch_queue> *_outputQueue;
    double _touchSensitivity;
    struct PKInputProviderInitial _inputProvider;
    struct PKPixelSmoothingFilter _pixelSmoothingFilter;
    struct PKPointReductionFilter _pointReductionFilter;
    struct PKStartHookFilter _startHookFilter;
    struct PKEndHookFilter _endHookFilter;
    struct PKVelocityCalculationFilter _velocityFilter;
    struct PKInputSmoother _inputSmoother;
    struct PKInputToOutputFilter _inputToOutputFilter;
    struct PKStartCapsFilter _startCapFilter;
    struct PKAzimuthFilter _azimuthFilter;
    struct PKEndCapsFilter _endCapFilter;
    struct PKRulerExtremaFilter _rulerExtremaFilter;
    struct PKEstimatedAltitudeAndAzimuthFilter _estimatedAltitudeAndAzimuthFilter;
    struct PKCompressionFilter _compressionFilter;
    struct PKDecompressionFilter _decompressionFilter;
    double _eraserIndicatorAlpha;
    double _inputScale;
    CGPoint _lastPoint;
    CGAffineTransform _rulerTransform;
}

+ (vector_58517711)inputPointsFromPath:(CGPath )arg1 velocityForDistanceFunction:(id /* CDUnknownBlockType */)arg2;
+ (vector_58517711)inputPointsFromPoints:(vector_e1abc270)arg1 velocityForDistanceFunction:(id /* CDUnknownBlockType */)arg2;
+ (void)initialize;
@property(nonatomic) double inputScale; // @synthesize inputScale=_inputScale;
@property double eraserIndicatorAlpha; // @synthesize eraserIndicatorAlpha=_eraserIndicatorAlpha;
@property BOOL isSnappedToRuler; // @synthesize isSnappedToRuler=_isSnappedToRuler;
@property(nonatomic) struct PKDecompressionFilter decompressionFilter; // @synthesize decompressionFilter=_decompressionFilter;
@property(nonatomic) struct PKCompressionFilter compressionFilter; // @synthesize compressionFilter=_compressionFilter;
@property(nonatomic) struct PKEstimatedAltitudeAndAzimuthFilter estimatedAltitudeAndAzimuthFilter; // @synthesize estimatedAltitudeAndAzimuthFilter=_estimatedAltitudeAndAzimuthFilter;
@property(nonatomic) struct PKRulerExtremaFilter rulerExtremaFilter; // @synthesize rulerExtremaFilter=_rulerExtremaFilter;
@property(nonatomic) struct PKEndCapsFilter endCapFilter; // @synthesize endCapFilter=_endCapFilter;
@property(nonatomic) struct PKAzimuthFilter azimuthFilter; // @synthesize azimuthFilter=_azimuthFilter;
@property(nonatomic) struct PKStartCapsFilter startCapFilter; // @synthesize startCapFilter=_startCapFilter;
@property(nonatomic) struct PKInputToOutputFilter inputToOutputFilter; // @synthesize inputToOutputFilter=_inputToOutputFilter;
@property(nonatomic) struct PKInputSmoother inputSmoother; // @synthesize inputSmoother=_inputSmoother;
@property(nonatomic) struct PKVelocityCalculationFilter velocityFilter; // @synthesize velocityFilter=_velocityFilter;
@property(nonatomic) struct PKEndHookFilter endHookFilter; // @synthesize endHookFilter=_endHookFilter;
@property(nonatomic) struct PKStartHookFilter startHookFilter; // @synthesize startHookFilter=_startHookFilter;
@property(nonatomic) struct PKPointReductionFilter pointReductionFilter; // @synthesize pointReductionFilter=_pointReductionFilter;
@property(nonatomic) struct PKPixelSmoothingFilter pixelSmoothingFilter; // @synthesize pixelSmoothingFilter=_pixelSmoothingFilter;
@property(nonatomic) struct PKInputProviderInitial inputProvider; // @synthesize inputProvider=_inputProvider;
@property(nonatomic) double touchSensitivity; // @synthesize touchSensitivity=_touchSensitivity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputQueue; // @synthesize outputQueue=_outputQueue;
@property CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(nonatomic) double strokeMaxForce; // @synthesize strokeMaxForce=_strokeMaxForce;
@property(nonatomic) BOOL canSnapToRuler; // @synthesize canSnapToRuler=_canSnapToRuler;
@property(nonatomic) BOOL isSnappedToRulerTopSide; // @synthesize isSnappedToRulerTopSide=_isSnappedToRulerTopSide;
@property(nonatomic) double rulerWidth; // @synthesize rulerWidth=_rulerWidth;
@property(nonatomic) BOOL useRuler; // @synthesize useRuler=_useRuler;
@property(nonatomic) CGAffineTransform rulerTransform; // @synthesize rulerTransform=_rulerTransform;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)strokeFromPoints:(CGPoint )arg1 count:(NSUInteger)arg2 ink:(id)arg3 inputScale:(double)arg4;
- (id)strokeFromPath:(CGPath )arg1 ink:(id)arg2 inputScale:(double)arg3 velocityForDistanceFunction:(id /* CDUnknownBlockType */)arg4;
- (id)strokeFromInputPoints:(vector_58517711 )arg1 inputType:(long long)arg2 ink:(id)arg3 inputScale:(double)arg4;
- (void)drawingCancelledWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)drawingEndedWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_drawingAddPoint:(CDStruct_f17e9403)arg1;
- (void)closeStroke;
- (void)addPoint:(CDStruct_f17e9403)arg1;
- (void)addPoints:(vector_58517711)arg1;
- (double)latestNonPredictedTimestamp;
- (void)removePredictedTouches;
- (void)updateImmutableCount;
- (void)drawingUpdateAllPointsDidTimeoutWithStrokeUUID:(id)arg1;
- (void)drawingUpdateAllPoints;
- (void)drawingUpdatePoint:(CDStruct_f17e9403)arg1;
- (id)_newStrokeWithCurrentData;
- (id)newStrokeWithCurrentData;
- (long long)fetchFilteredPointsFromIndex:(long long)arg1 accessBlock:(id /* CDUnknownBlockType */)arg2;
- (struct _PKStrokePoint)outputPoint:(CDStruct_f17e9403)arg1 baseValues:(struct _PKStrokePoint)arg2;
- (struct _PKStrokePoint)outputCurrentStrokePoint:(CDStruct_f17e9403)arg1;
- (void)reset;
- (NSUInteger)copyInputUpdatedRangeFromIndex:(NSUInteger)arg1 into:(vector_58517711 )arg2;
- (vector_58517711 )getInputUpdatedRangeFromIndex:(inout NSUInteger )arg1;
- (vector_03cfcf00 )getUpdatedRangeFromIndex:(inout NSUInteger )arg1;
- (PKInputProvider_28cf270a )outputFilter;
@property(readonly) BOOL lastPointIsMasked;
- (void)updateRulerSnapping;
- (CGPoint)snapPointToRuler:(CGPoint)arg1;
- (void)maskToRuler;
- (void)snapToRuler;
- (BOOL)shouldSnapPointToRuler:(CGPoint)arg1;
- (double)distanceToRulerCenter:(CGPoint)arg1;
- (CGPoint)getRulerSnapLineOriginAndTangent:(CGPoint )arg1 andNormal:(CGPoint )arg2;
- (void)allowSnappingToRuler:(CGAffineTransform)arg1 width:(double)arg2;
- (void)drawingBeganWithStroke:(id)arg1 inputType:(long long)arg2 inputScale:(double)arg3 start:(id /* CDUnknownBlockType */)arg4;
@property(readonly, nonatomic) long long inputType; // @dynamic inputType;
- (void)dealloc;
- (id)init;

@end

