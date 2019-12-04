//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol MCDErrorViewDelegate;

@interface MCDErrorLoadingView : UIView
{
    _Bool _shouldEnableNetwork;
    id <MCDErrorViewDelegate> _delegate;
}

@property(nonatomic) _Bool shouldEnableNetwork; // @synthesize shouldEnableNetwork=_shouldEnableNetwork;
@property(nonatomic) __weak id <MCDErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)retryButtonPressed:(id)arg1;
- (id)initWithTitle:(id)arg1 buttonText:(id)arg2;

@end
