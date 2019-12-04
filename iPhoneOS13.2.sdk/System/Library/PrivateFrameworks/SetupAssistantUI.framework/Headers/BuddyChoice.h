//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIAlertController, UIViewController;

__attribute__((visibility("hidden")))
@interface BuddyChoice : NSObject
{
    UIViewController *_nextController;
    NSString *_title;
    Class _nextControllerClass;
    UIViewController *_choiceController;
    id /* block */ _condition;
    UIAlertController *_alertController;
    id /* block */ _confirmationCompletion;
}

@property(copy, nonatomic) id /* block */ confirmationCompletion; // @synthesize confirmationCompletion=_confirmationCompletion;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(copy, nonatomic) id /* block */ condition; // @synthesize condition=_condition;
@property(nonatomic) __weak UIViewController *choiceController; // @synthesize choiceController=_choiceController;
@property(retain, nonatomic) Class nextControllerClass; // @synthesize nextControllerClass=_nextControllerClass;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_choiceConfirmed:(_Bool)arg1;
- (void)runConfirmationIfNeededCompletion:(id /* block */)arg1;
- (void)setConfirmationAlert:(id)arg1 condition:(id /* block */)arg2;
- (id)confirmationCancelActionWithTitle:(id)arg1 style:(long long)arg2 action:(id /* block */)arg3;
- (id)confirmationAcceptActionWithTitle:(id)arg1 style:(long long)arg2 action:(id /* block */)arg3;
- (id)initWithTitle:(id)arg1 nextItemClass:(Class)arg2;

@end
