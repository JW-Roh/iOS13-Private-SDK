//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PDIterate : NSObject
{
    int mType;
    BOOL mIsBackwards;
    BOOL mIsPercentage;
    double mValue;
}

- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setValue:(double)arg1;
- (double)value;
- (void)setIsValuePercentage:(BOOL)arg1;
- (BOOL)isValuePercentage;
- (void)setIsBackwards:(BOOL)arg1;
- (BOOL)isBackwards;
- (void)setType:(int)arg1;
- (int)type;

@end

