//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface PKBillPaymentRingGradientState : NSObject
{
    UIColor *_startColor;
    UIColor *_endColor;
}

@property(readonly, copy, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property(readonly, copy, nonatomic) UIColor *startColor; // @synthesize startColor=_startColor;
// - (void).cxx_destruct;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;

@end

