//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDecimalNumber;

@interface PKPaymentBalanceReminder : NSObject <NSSecureCoding>
{
    _Bool _enabled;
    NSDecimalNumber *_threshold;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSDecimalNumber *threshold; // @synthesize threshold=_threshold;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithThreshold:(id)arg1 isEnabled:(_Bool)arg2;

@end
