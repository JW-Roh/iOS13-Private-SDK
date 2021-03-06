//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/VSLoadingViewController-Protocol.h>

@class UIActivityIndicatorView;
@protocol VSLoadingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSLoadingViewController_iOS : UIViewController <VSLoadingViewController>
{
    BOOL _cancellationAllowed;
    id <VSLoadingViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_loadingIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
@property(nonatomic) __weak id <VSLoadingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

