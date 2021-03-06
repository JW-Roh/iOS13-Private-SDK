//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIReviewConfiguration : NSObject
{
    NSString *_allVersionsURLString;
    NSString *_currentVersionURLString;
    NSString *_pageNumberQueryParameter;
    NSString *_ratingURLString;
}

@property(readonly, nonatomic) NSString *ratingURLString; // @synthesize ratingURLString=_ratingURLString;
@property(readonly, nonatomic) NSString *pageNumberQueryParameter; // @synthesize pageNumberQueryParameter=_pageNumberQueryParameter;
@property(readonly, nonatomic) NSString *currentVersionURLString; // @synthesize currentVersionURLString=_currentVersionURLString;
@property(readonly, nonatomic) NSString *allVersionsURLString; // @synthesize allVersionsURLString=_allVersionsURLString;
// - (void).cxx_destruct;
- (id)initWithConfigurationDictionary:(id)arg1;

@end

