//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DigitalTouchShared/ETMessage.h>

@class NSArray, NSMutableArray;

@interface ETSketchMessage : ETMessage
{
    NSMutableArray *_strokes;
    NSMutableArray *_colorsInMessage;
    BOOL _hasMultipleColors;
    BOOL _didEndWisping;
    BOOL _didDrawPoints;
    BOOL _hideComet;
}

+ (unsigned short)messageType;
@property(nonatomic) BOOL hideComet; // @synthesize hideComet=_hideComet;
@property(nonatomic) BOOL didDrawPoints; // @synthesize didDrawPoints=_didDrawPoints;
@property(nonatomic) BOOL didEndWisping; // @synthesize didEndWisping=_didEndWisping;
@property(nonatomic) BOOL hasMultipleColors; // @synthesize hasMultipleColors=_hasMultipleColors;
// - (void).cxx_destruct;
- (double)messageDuration;
- (void)convertToSimulatedPlaybackSpeed;
- (void)setParentMessage:(id)arg1;
- (void)didEndWisp;
- (void)willBeginWisp;
- (id)messageTypeAsString;
- (id)archiveData;
- (id)initWithArchiveData:(id)arg1;
- (BOOL)_decodeWithDoodle:(id)arg1;
- (void)addSketchPoint:(CGPoint)arg1;
- (void)addSketchPoint:(CGPoint)arg1 atTime:(double)arg2;
- (void)addStrokeWithColor:(id)arg1;
- (void)didReachRendererLimit;
@property(readonly, nonatomic) NSUInteger numberOfColors;
@property(readonly, nonatomic) NSArray *colorsInMessage;
@property(readonly, nonatomic) NSArray *strokes;
- (id)init;

@end

