//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WFSystemContentWhitelist : NSObject
{
    NSArray *_whitelistItems;
}

+ (id)defaultSystemWhitelist;
+ (id)newWhitelistItemFromPlistEntry:(id)arg1;
- (_Bool)isURLWhitelisted:(id)arg1;
- (void)dealloc;
- (id)initWithWhitelistURL:(id)arg1;

@end
