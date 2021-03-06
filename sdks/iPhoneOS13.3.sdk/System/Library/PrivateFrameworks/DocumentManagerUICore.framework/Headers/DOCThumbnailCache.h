//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMapTable;

@interface DOCThumbnailCache : NSObject
{
    NSMapTable *_cachedThumbnailItems;
    NSCache *_recentlyUsedItems;
}

@property(readonly, nonatomic) NSCache *recentlyUsedItems; // @synthesize recentlyUsedItems=_recentlyUsedItems;
@property(readonly, nonatomic) NSMapTable *cachedThumbnailItems; // @synthesize cachedThumbnailItems=_cachedThumbnailItems;
// - (void).cxx_destruct;
- (void)clear;
- (id)init;

@end

