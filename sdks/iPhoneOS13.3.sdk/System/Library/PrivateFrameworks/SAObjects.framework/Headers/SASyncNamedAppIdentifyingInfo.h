//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASyncAppIdentifyingInfo.h>

@class NSString;

@interface SASyncNamedAppIdentifyingInfo : SASyncAppIdentifyingInfo
{
}

+ (id)namedAppIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)namedAppIdentifyingInfo;
@property(copy, nonatomic) NSString *localizedBundleDisplayName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

