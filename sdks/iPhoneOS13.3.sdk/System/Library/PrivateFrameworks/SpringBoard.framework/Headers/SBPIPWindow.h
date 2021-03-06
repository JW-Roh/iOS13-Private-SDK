//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBWindow.h>

@class NSArray;

@interface SBPIPWindow : SBWindow
{
}

- (BOOL)isActive;
- (id)_pipWindowRootVC;
- (long long)interfaceOrientationForContainerViewController:(id)arg1;
- (void)removeContainerViewController:(id)arg1;
- (void)addContainerViewController:(id)arg1;
@property(readonly, nonatomic) NSArray *containerViewControllers;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setRootViewController:(id)arg1;
- (id)init;

@end

