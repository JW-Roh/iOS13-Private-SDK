//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMICameraVideoFrame, HMICameraVideoResourceAttributes, NSMutableArray;
@protocol HMICameraVideoFrameSamplerDelegate;

@interface HMICameraVideoFrameSampler : HMFObject <HMFLogging>
{
    BOOL _markedAsFinished;
    id <HMICameraVideoFrameSamplerDelegate> _delegate;
    HMICameraVideoResourceAttributes *_attributes;
    NSMutableArray *_unmatchedSampleFrames;
    HMICameraVideoFrame *_frame;
    CDStruct_1b6d18a9 _targetInterval;
    CDStruct_1b6d18a9 _sampleInterval;
}

+ (id)logCategory;
@property(getter=isMarkedAsFinished) BOOL markedAsFinished; // @synthesize markedAsFinished=_markedAsFinished;
@property(retain) HMICameraVideoFrame *frame; // @synthesize frame=_frame;
@property(readonly) NSMutableArray *unmatchedSampleFrames; // @synthesize unmatchedSampleFrames=_unmatchedSampleFrames;
@property(readonly) CDStruct_1b6d18a9 sampleInterval; // @synthesize sampleInterval=_sampleInterval;
@property(readonly) HMICameraVideoResourceAttributes *attributes; // @synthesize attributes=_attributes;
@property(readonly) CDStruct_1b6d18a9 targetInterval; // @synthesize targetInterval=_targetInterval;
@property __weak id <HMICameraVideoFrameSamplerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)finish;
- (BOOL)appendFrame:(id)arg1 error:(id )arg2;
- (BOOL)isFinishedEarly;
- (BOOL)_appendFrame:(id)arg1 error:(id )arg2;
- (id)initWithResourceAttributes:(id)arg1 sampleRate:(CDStruct_1b6d18a9)arg2 targetInterval:(CDStruct_1b6d18a9)arg3;

@end
