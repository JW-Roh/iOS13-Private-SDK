//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, SAUIColor, SAUIImageResource;

@interface SAUISash : AceObject <SAAceSerializable>
{
}

+ (id)sashWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sash;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SAUIColor *textColor;
@property(retain, nonatomic) SAUIImageResource *image;
@property(copy, nonatomic) NSArray *commands;
@property(retain, nonatomic) SAUIColor *backgroundColor;
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

