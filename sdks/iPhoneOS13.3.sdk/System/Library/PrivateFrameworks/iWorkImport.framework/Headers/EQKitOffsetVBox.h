//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitVBox.h>

__attribute__((visibility("hidden")))
@interface EQKitOffsetVBox : EQKitVBox
{
    double mOffset;
}

@property(readonly, nonatomic) double offset; // @synthesize offset=mOffset;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)p_cacheDimensionsForHeight:(double )arg1 depth:(double )arg2 width:(double )arg3;
- (id)initWithChildBoxes:(id)arg1 pivotIndex:(NSUInteger)arg2 offset:(double)arg3;
- (id)initWithChildBoxes:(id)arg1 pivotIndex:(NSUInteger)arg2;
- (id)initWithChildBoxes:(id)arg1;
- (id)init;

@end
