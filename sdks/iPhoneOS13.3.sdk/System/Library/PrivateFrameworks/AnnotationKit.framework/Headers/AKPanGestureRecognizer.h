//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

#import <AnnotationKit/AKPenDetectionGestureRecognizerProtocol-Protocol.h>

@class NSMutableArray;

@interface AKPanGestureRecognizer : UIPanGestureRecognizer <AKPenDetectionGestureRecognizerProtocol>
{
    BOOL _penGestureDetected;
    double _currentWeight;
    double _currentMaxWeight;
    NSMutableArray *_currentAccumulatedTouches;
    CGPoint _locationOfFirstTouch;
}

@property(retain, nonatomic) NSMutableArray *currentAccumulatedTouches; // @synthesize currentAccumulatedTouches=_currentAccumulatedTouches;
@property(nonatomic) BOOL penGestureDetected; // @synthesize penGestureDetected=_penGestureDetected;
@property(nonatomic) CGPoint locationOfFirstTouch; // @synthesize locationOfFirstTouch=_locationOfFirstTouch;
@property(nonatomic) double currentMaxWeight; // @synthesize currentMaxWeight=_currentMaxWeight;
@property(nonatomic) double currentWeight; // @synthesize currentWeight=_currentWeight;
// - (void).cxx_destruct;
- (CGPoint)locationOfFirstTouchInView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetAccumulatedTouches;
- (id)accumulatedTouches;
- (void)_checkTouchForStylus:(id)arg1;
- (void)reset;

@end
