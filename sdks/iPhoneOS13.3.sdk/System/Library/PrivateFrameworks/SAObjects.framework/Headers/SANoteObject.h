//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SANoteObject : SADomainObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) BOOL restricted;
@property(copy, nonatomic) NSDate *lastModifiedDate;
@property(copy, nonatomic) NSDate *createdDate;
@property(copy, nonatomic) NSString *contents;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

