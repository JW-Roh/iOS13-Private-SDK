//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDictionary, NSError, NSNumber, NSProgress, PLLivePhotoEditSource;

@interface PXAutoloopAnalysisOperation : NSOperation
{
    NSDictionary *_recipesByVariationType;
    BOOL _succeeded;
    PLLivePhotoEditSource *_editSource;
    NSProgress *_progress;
    NSError *_error;
    NSNumber *_duration;
    NSDictionary *_analysisResult;
}

@property(readonly, nonatomic) NSDictionary *analysisResult; // @synthesize analysisResult=_analysisResult;
@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) BOOL succeeded; // @synthesize succeeded=_succeeded;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) PLLivePhotoEditSource *editSource; // @synthesize editSource=_editSource;
// - (void).cxx_destruct;
- (void)main;
- (void)cancel;
- (void)_timeout;
- (id)recipeForVariationType:(long long)arg1;
- (id)initWithEditSource:(id)arg1;
- (id)init;

@end

