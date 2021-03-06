//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;

@interface IDSEndpointTransparencyState : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_pushToken;
    long long _verificationState;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long verificationState; // @synthesize verificationState=_verificationState;
@property(readonly, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToEndpointTransparencyState:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithPushToken:(id)arg1 verificationState:(long long)arg2;

@end

