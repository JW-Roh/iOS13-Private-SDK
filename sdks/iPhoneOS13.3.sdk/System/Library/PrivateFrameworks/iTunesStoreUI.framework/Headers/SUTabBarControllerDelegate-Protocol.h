//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SUSection, SUTabBarController, SUViewController, SUViewControllerContext;

@protocol SUTabBarControllerDelegate <UITabBarControllerDelegate>

@optional
- (SUViewController *)tabBarController:(SUTabBarController *)arg1 viewControllerForContext:(SUViewControllerContext *)arg2;
- (BOOL)tabBarController:(SUTabBarController *)arg1 shouldShowSection:(SUSection *)arg2;
- (SUViewController *)tabBarController:(SUTabBarController *)arg1 rootViewControllerForSection:(SUSection *)arg2;
@end

