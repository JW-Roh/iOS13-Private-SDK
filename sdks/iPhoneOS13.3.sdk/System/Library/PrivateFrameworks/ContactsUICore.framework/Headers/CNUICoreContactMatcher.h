//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNUICoreContactMatcher : NSObject
{
}

+ (BOOL)doesNameOfContact:(id)arg1 matchNameOfFamilyMember:(id)arg2;
+ (BOOL)doesContact:(id)arg1 matchAnyParentOrGuardianInFamily:(id)arg2;
+ (BOOL)doesNameOfContact:(id)arg1 matchNameOfContact:(id)arg2;
+ (BOOL)doesContact:(id)arg1 matchContact:(id)arg2;
+ (id)nameFromFammilyMember:(id)arg1;

@end

