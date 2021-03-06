//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <iMessageApps/CKBrowserSwitcherFooterViewDelegate-Protocol.h>

@class CKBrowserSwitcherFooterView, CKBrowserSwitcherFooterViewDataSource, IMAAppPresenter;
@protocol IMADockViewControllerDelegate;

@interface IMADockViewController : UIViewController <CKBrowserSwitcherFooterViewDelegate>
{
    CKBrowserSwitcherFooterView *_appStrip;
    CKBrowserSwitcherFooterViewDataSource *_appStripDataSource;
    IMAAppPresenter *_appPresenter;
    BOOL _showIconBorders;
    id <IMADockViewControllerDelegate> _delegate;
}

@property(nonatomic) BOOL showIconBorders; // @synthesize showIconBorders=_showIconBorders;
@property(nonatomic) __weak id <IMADockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)appStrip;
- (void)switcherView:(id)arg1 didMagnify:(BOOL)arg2;
- (void)switcherView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
- (void)updateAppStripFrame;
- (void)cleanupRunningApps;
- (void)hideAppViewControllerAnimated:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)imageViewForSticker:(id)arg1;
@property(nonatomic) BOOL hidesCompactAppForStickerDrag;
@property(readonly, nonatomic) UIViewController *currentAppViewController;
@property(readonly, nonatomic) double minimizedDockHeight;
@property(nonatomic) BOOL alwaysPresentAppsExpanded;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

@end

