//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UILabel;
@protocol PXPeopleSummaryDelegate;

@interface PXPeopleConfirmationSummaryViewController : UIViewController
{
    id <PXPeopleSummaryDelegate> _delegate;
    NSLayoutConstraint *_labelSpacingConstraint;
    UILabel *_summaryLabel;
}

@property(retain) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain) NSLayoutConstraint *labelSpacingConstraint; // @synthesize labelSpacingConstraint=_labelSpacingConstraint;
@property __weak id <PXPeopleSummaryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateDynamicTypeSpacing;
- (void)traitCollectionDidChange:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
