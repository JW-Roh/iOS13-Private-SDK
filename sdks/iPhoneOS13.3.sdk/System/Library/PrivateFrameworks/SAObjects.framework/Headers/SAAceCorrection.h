//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSData, NSString;

@interface SAAceCorrection : SADomainObject
{
}

+ (id)aceCorrectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceCorrection;
@property(copy, nonatomic) NSString *debugString;
@property(copy, nonatomic) NSData *correctionEntryData;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

