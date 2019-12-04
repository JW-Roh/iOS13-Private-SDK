//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSDate;

@interface SearchUICellCache : NSObject
{
    NSCache *_cellCache;
    NSDate *_lastCacheClearTime;
}

+ (id)sharedCache;
@property(retain, nonatomic) NSDate *lastCacheClearTime; // @synthesize lastCacheClearTime=_lastCacheClearTime;
@property(retain, nonatomic) NSCache *cellCache; // @synthesize cellCache=_cellCache;
- (id)identifierForResults:(id)arg1;
- (void)setCells:(id)arg1 forResults:(id)arg2;
- (id)cellViewsForResults:(id)arg1;
- (id)init;

@end
