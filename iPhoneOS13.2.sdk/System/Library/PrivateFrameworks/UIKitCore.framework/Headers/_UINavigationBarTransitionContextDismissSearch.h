//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UINavigationBarTransitionContext.h>

@class UISearchBar;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextDismissSearch : _UINavigationBarTransitionContext
{
    UISearchBar *_transitioningSearchBar;
}

- (void)cancel;
- (void)complete;
- (void)animate;
- (void)prepare;
- (int)transition;

@end
