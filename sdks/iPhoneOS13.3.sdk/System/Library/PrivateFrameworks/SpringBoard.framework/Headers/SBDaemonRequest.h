//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBDaemonRequest : NSObject
{
    id /* CDUnknownBlockType */ _enabler;
    id /* CDUnknownBlockType */ _disabler;
}

+ (id)requestWithEnabler:(id /* CDUnknownBlockType */)arg1 disabler:(id /* CDUnknownBlockType */)arg2;
@property(copy, nonatomic) id /* CDUnknownBlockType */ disabler; // @synthesize disabler=_disabler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ enabler; // @synthesize enabler=_enabler;
// - (void).cxx_destruct;
- (void)dispatchDisablerOnQueue:(id)arg1;
- (void)dispatchEnablerOnQueue:(id)arg1;

@end
