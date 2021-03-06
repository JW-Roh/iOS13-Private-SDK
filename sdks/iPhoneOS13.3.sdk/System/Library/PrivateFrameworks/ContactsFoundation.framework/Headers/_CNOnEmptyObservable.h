//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;

@interface _CNOnEmptyObservable : CNObservable
{
    id <CNObservable> _observable;
    id <CNObservable> _nextObservable;
    BOOL _observableIsEmpty;
}

@property(retain, nonatomic) id <CNObservable> observable; // @synthesize observable=_observable;
// - (void).cxx_destruct;
- (id)subscribeNextObservable:(id)arg1;
- (BOOL)isObservableEmpty;
- (void)observableDidSendResult;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 nextObservable:(id)arg2;

@end

