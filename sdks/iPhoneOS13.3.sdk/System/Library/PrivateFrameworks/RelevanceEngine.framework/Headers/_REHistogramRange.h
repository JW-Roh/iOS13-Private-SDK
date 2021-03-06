//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REComparable-Protocol.h>

@class NSString;

@interface _REHistogramRange : NSObject <NSCopying, REComparable>
{
    NSUInteger _min;
    NSUInteger _max;
    NSUInteger _mid;
}

@property(readonly, nonatomic) NSUInteger mid; // @synthesize mid=_mid;
@property(readonly, nonatomic) NSUInteger max; // @synthesize max=_max;
@property(readonly, nonatomic) NSUInteger min; // @synthesize min=_min;
- (long long)compare:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (void)dealloc;
- (id)initWithMin:(NSUInteger)arg1 max:(NSUInteger)arg2;
- (id)initWithValue:(NSUInteger)arg1 binningSize:(NSUInteger)arg2;

@end

