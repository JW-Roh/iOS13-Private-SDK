//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SASTTemplatePercentageRating;

@interface SASTMovieStatItem : AceObject <SASTTemplateItem>
{
}

+ (id)movieStatItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)movieStatItem;
@property(retain, nonatomic) SASTTemplatePercentageRating *reviewerRating;
@property(copy, nonatomic) NSString *contentRating;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

