//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FIIntervalDefinition, HKQuantity, HKQuantityType, NSDate;

@interface FIQuantityInterval : NSObject
{
    FIIntervalDefinition *_definition;
    NSDate *_startDate;
    HKQuantityType *_trackedQuantityType;
    HKQuantity *_threshold;
}

@property(readonly, nonatomic) HKQuantity *threshold; // @synthesize threshold=_threshold;
@property(readonly, nonatomic) HKQuantityType *trackedQuantityType; // @synthesize trackedQuantityType=_trackedQuantityType;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) FIIntervalDefinition *definition; // @synthesize definition=_definition;
// - (void).cxx_destruct;
- (id)initWithIntervalDefinition:(id)arg1 activityType:(NSUInteger)arg2 startDate:(id)arg3;

@end

