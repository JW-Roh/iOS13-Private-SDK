//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, NSURL;

@interface SAAnswerLinkedAnswer : AceObject <SAAceSerializable>
{
}

+ (id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)linkedAnswer;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSURL *link;
@property(copy, nonatomic) NSURL *image;
@property(copy, nonatomic) NSString *descriptionText;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
