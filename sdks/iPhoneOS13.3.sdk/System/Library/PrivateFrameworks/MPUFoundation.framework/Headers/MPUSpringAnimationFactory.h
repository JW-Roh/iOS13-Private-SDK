//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/MPUAnimationFactory.h>

@interface MPUSpringAnimationFactory : MPUAnimationFactory
{
    double _damping;
    double _mass;
    double _stiffness;
    double _velocity;
}

+ (void)animateUsingSpringWithDamping:(double)arg1 mass:(double)arg2 stiffness:(double)arg3 velocity:(double)arg4 animations:(id /* CDUnknownBlockType */)arg5 options:(NSUInteger)arg6 completion:(id /* CDUnknownBlockType */)arg7;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(nonatomic) double damping; // @synthesize damping=_damping;
- (id)_newSpringAnimationForKeyPath:(id)arg1;
- (double)durationForEpsilon:(double)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;

@end

