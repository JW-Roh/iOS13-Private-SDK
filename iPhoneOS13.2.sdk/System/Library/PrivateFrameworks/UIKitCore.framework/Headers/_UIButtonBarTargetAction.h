//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface _UIButtonBarTargetAction : NSObject
{
    UIBarButtonItem *_barButtonItem;
    id /* block */ _actionFilter;
}

@property(copy, nonatomic) id /* block */ actionFilter; // @synthesize actionFilter=_actionFilter;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
- (void)_invoke:(id)arg1 forEvent:(id)arg2;
@property(readonly, nonatomic) SEL proxyAction;
- (id)initWithBarButtonItem:(id)arg1;
- (id)init;

@end
