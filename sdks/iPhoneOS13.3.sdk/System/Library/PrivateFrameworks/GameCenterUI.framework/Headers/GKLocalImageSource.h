//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKImageSource.h>

@class NSMapTable;

@interface GKLocalImageSource : GKImageSource
{
    NSMapTable *_keysForSizes;
}

@property(retain, nonatomic) NSMapTable *keysForSizes; // @synthesize keysForSizes=_keysForSizes;
// - (void).cxx_destruct;
- (void)deleteImageUsingGamedWithSubdirectory:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)cacheImageUsingGamed:(id)arg1 cacheSubdirectory:(id)arg2 withHandler:(id /* CDUnknownBlockType */)arg3;
- (void)cachedImageFromGamedWithSubdirectory:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (id)imageForImageSize:(CGSize)arg1;
- (id)keyForImageSize:(CGSize)arg1;

@end
