//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSURectList : NSObject
{
    vector_a9587b3d mRectList;
}

+ (id)rectListWithDifference:(CGRect)arg1 withRect:(CGRect)arg2;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (CGRect)rectAtIndex:(NSUInteger)arg1;
- (void)insertRect:(CGRect)arg1 atIndex:(NSUInteger)arg2;
- (void)addRect:(CGRect)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (id)initWithRectList:(id)arg1;
- (id)initWithRect:(CGRect)arg1;

@end

