//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentNotificationListener-Protocol.h>

@protocol MTAgentDiagnosticDelegate;

@interface MTAgentDiagnosticListener : NSObject <MTAgentNotificationListener>
{
    id <MTAgentDiagnosticDelegate> _delegate;
}

@property(nonatomic) __weak id <MTAgentDiagnosticDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_addStateHandler;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (id)initWithDelegate:(id)arg1;

@end

