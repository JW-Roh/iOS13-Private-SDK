//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface _TVNavigationCrossfadeAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _fadeOutFromView;
}

+ (void)_beginCrossfadeAnimationFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 delay:(double)arg4 fadeOutFromView:(BOOL)arg5 removeFromView:(BOOL)arg6 completion:(id /* CDUnknownBlockType */)arg7;
@property(nonatomic) BOOL fadeOutFromView; // @synthesize fadeOutFromView=_fadeOutFromView;
- (void)_beginCrossfadeAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end

