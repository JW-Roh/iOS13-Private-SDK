//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TXRTextureInfo;

__attribute__((visibility("hidden")))
@interface TXRDeferredTextureInfo : NSObject
{
    TXRTextureInfo *_info;
    NSMutableArray *_mipmaps;
}

@property(readonly, nonatomic) NSMutableArray *mipmaps; // @synthesize mipmaps=_mipmaps;
@property(retain, nonatomic) TXRTextureInfo *info; // @synthesize info=_info;
- (id)initWithMipmapLevelCount:(unsigned long long)arg1 arrayLength:(unsigned long long)arg2 cubemap:(_Bool)arg3;

@end
