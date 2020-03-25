//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface DNDState : NSObject <NSCopying, NSSecureCoding>
{
    NSUInteger _suppressionState;
    NSArray *_activeModeAssertionMetadata;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *activeModeAssertionMetadata; // @synthesize activeModeAssertionMetadata=_activeModeAssertionMetadata;
@property(readonly, nonatomic) NSUInteger suppressionState; // @synthesize suppressionState=_suppressionState;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
@property(readonly, nonatomic, getter=isActive) BOOL active; // @dynamic active;
- (id)initWithSuppressionState:(NSUInteger)arg1 activeModeAssertionMetadata:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *activeModeIdentifiers; // @dynamic activeModeIdentifiers;
@property(readonly, nonatomic) BOOL willSuppressInterruptions; // @dynamic willSuppressInterruptions;

@end
