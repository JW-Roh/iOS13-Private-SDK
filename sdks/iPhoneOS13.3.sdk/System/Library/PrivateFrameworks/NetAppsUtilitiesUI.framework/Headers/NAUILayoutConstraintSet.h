//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIView;

@interface NAUILayoutConstraintSet : NSObject
{
    UIView *_owningView;
    id /* CDUnknownBlockType */ _builder;
    NSArray *_constraints;
}

@property(copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ builder; // @synthesize builder=_builder;
@property(readonly, nonatomic) __weak UIView *owningView; // @synthesize owningView=_owningView;
// - (void).cxx_destruct;
- (void)updateConstraintConstants;
- (void)invalidate;
- (void)activateIfNeeded;
@property(readonly, nonatomic, getter=isActive) BOOL active;
- (id)initWithOwningView:(id)arg1 constraintBuilder:(id /* CDUnknownBlockType */)arg2;

@end

