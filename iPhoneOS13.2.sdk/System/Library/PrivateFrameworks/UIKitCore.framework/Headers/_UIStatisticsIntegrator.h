//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIStatisticsIntegrator : NSObject
{
    NSObject<OS_dispatch_queue> *_reportingQueue;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
+ (void)createSharedInstanceIfNecessary;
// - (void).cxx_destruct;
- (void)batchRecord:(CDUnknownBlockType)arg1;
- (void)recordDistributionTime:(NSUInteger)arg1 forKey:(id)arg2;
- (void)recordDistributionValue:(double)arg1 forKey:(id)arg2;
- (void)resetDistributionToValue:(double)arg1 forKey:(id)arg2;
- (void)resetDistributionForKey:(id)arg1;
- (void)incrementValueBy:(long long)arg1 forKey:(id)arg2;
- (void)setValue:(long long)arg1 forKey:(id)arg2;
- (void)resetValueForKey:(id)arg1;
- (id)init;

@end
