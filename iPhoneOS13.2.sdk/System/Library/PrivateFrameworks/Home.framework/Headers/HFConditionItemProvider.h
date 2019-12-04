//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet, NSSet;

@interface HFConditionItemProvider : HFItemProvider
{
    NSSet *_conditions;
    HMHome *_home;
    NSMutableSet *_conditionItems;
}

@property(readonly, nonatomic) NSMutableSet *conditionItems; // @synthesize conditionItems=_conditionItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSSet *conditions; // @synthesize conditions=_conditions;
- (id)reloadItems;
- (id)items;
- (id)initWithConditions:(id)arg1 home:(id)arg2;
- (id)init;

@end
