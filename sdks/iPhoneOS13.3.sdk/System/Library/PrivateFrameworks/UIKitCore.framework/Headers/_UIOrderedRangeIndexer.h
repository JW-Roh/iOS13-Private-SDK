//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIOrderedRangeIndexer : NSObject
{
    struct shared_ptr<_UIOrderedRangeIndexerImpl> _orderedRangeIndexerImpl;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSRange containingRange;
@property(readonly, nonatomic) long long numberOfRanges;
- (NSRange)rangeAtIndex:(long long)arg1;
- (long long)indexOfRangeContainingLocation:(long long)arg1;
- (NSRange)rangeContainingLocation:(long long)arg1;
- (void)appendRange:(NSRange)arg1;
@property(readonly, nonatomic) NSArray *orderedRanges;
- (id)description;
- (id)init;

@end

