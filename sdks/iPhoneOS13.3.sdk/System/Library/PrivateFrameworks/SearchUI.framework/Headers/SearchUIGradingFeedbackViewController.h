//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import <SearchUI/MFMailComposeViewControllerDelegate-Protocol.h>

@class SFSearchResult, UIViewController;
@protocol SFFeedbackListener;

@interface SearchUIGradingFeedbackViewController : UIAlertController <MFMailComposeViewControllerDelegate>
{
    SFSearchResult *_result;
    UIViewController *_viewControllerForPresenting;
    id <SFFeedbackListener> _feedbackDelegate;
}

@property(nonatomic) __weak id <SFFeedbackListener> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
@property(retain, nonatomic) UIViewController *viewControllerForPresenting; // @synthesize viewControllerForPresenting=_viewControllerForPresenting;
@property(retain, nonatomic) SFSearchResult *result; // @synthesize result=_result;
// - (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)addActionForGrade:(NSUInteger)arg1 title:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithResult:(id)arg1 feedbackDelegate:(id)arg2;

@end
