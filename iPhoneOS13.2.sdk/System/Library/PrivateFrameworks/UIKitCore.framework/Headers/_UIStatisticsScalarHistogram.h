//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatisticsScalarHistogram : NSObject
{
    NSString *_baseKey;
    long long _recordCount;
    unsigned long long _values[22];
    NSString *_keys[22];
    NSMutableSet *_children;
}

- (void)recordValue:(double)arg1;
- (void)clearValues;
- (void)reportValues;
- (void)_addChildStatistic:(id)arg1;
- (id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2;

@end
