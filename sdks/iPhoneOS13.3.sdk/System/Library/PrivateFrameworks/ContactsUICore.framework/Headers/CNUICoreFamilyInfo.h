//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSArray;

@interface CNUICoreFamilyInfo : NSObject
{
    CNContact *_meContact;
    NSArray *_elements;
}

@property(readonly, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithMeContact:(id)arg1 elements:(id)arg2;
- (id)init;

@end

