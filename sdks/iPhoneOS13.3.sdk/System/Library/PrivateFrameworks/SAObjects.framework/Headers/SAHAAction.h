//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAHAAttributeValue;

@interface SAHAAction : SADomainObject
{
}

+ (id)actionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)action;
@property(retain, nonatomic) SAHAAttributeValue *value;
@property(nonatomic) BOOL includeCompleteInformation;
@property(nonatomic) long long executionOrder;
@property(copy, nonatomic) NSArray *executionFlags;
@property(copy, nonatomic) NSString *attribute;
@property(copy, nonatomic) NSString *actionType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
