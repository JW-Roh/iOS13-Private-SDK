//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SIMToolkitUI/STKTextSessionAction.h>

@class STKListItemsSessionData;

@interface STKListItemsSessionAction : STKTextSessionAction
{
}

- (void)sendSuccessWithSelectedItemIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) STKListItemsSessionData *sessionData;
- (id)initWithBehavior:(id)arg1 inputData:(id)arg2 response:(id /* block */)arg3;

@end
