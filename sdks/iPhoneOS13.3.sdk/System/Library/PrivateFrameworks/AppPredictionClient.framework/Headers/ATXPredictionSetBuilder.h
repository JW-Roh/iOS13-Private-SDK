//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface ATXPredictionSetBuilder : NSObject
{
    NSMutableData *_data;
    int _predictionCount;
    BOOL _finished;
}

// - (void).cxx_destruct;
- (id)finish;
- (void)recordPrediction:(id)arg1 score:(float)arg2;
- (id)init;

@end
