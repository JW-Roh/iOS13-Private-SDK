//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString, UIImage;

@interface PKExpressPassCategory : NSObject <NSCopying>
{
    UIImage *_categoryImage;
    NSString *_categoryTitle;
    long long _categoryState;
    NSArray *_passes;
    long long _selectedPassIndex;
    id _categoryIdentifier;
}

@property(retain, nonatomic) id categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(nonatomic) long long selectedPassIndex; // @synthesize selectedPassIndex=_selectedPassIndex;
@property(retain, nonatomic) NSArray *passes; // @synthesize passes=_passes;
@property(nonatomic) long long categoryState; // @synthesize categoryState=_categoryState;
@property(retain, nonatomic) NSString *categoryTitle; // @synthesize categoryTitle=_categoryTitle;
@property(retain, nonatomic) UIImage *categoryImage; // @synthesize categoryImage=_categoryImage;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

