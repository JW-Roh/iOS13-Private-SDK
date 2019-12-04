//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <NanoTimeKitCompanion/NTKAVListing-Protocol.h>

@class CLKDevice, CLKVideo, NSString, NTKPhotoAnalysis, UIImage;

@interface NTKTimelapseListing : NSObject <NSCopying, NTKAVListing>
{
    CLKDevice *_device;
    CLKVideo *_video;
    UIImage *_image;
    NSString *_videoName;
    NSString *_imageName;
    NTKPhotoAnalysis *_photoAnalysis;
    unsigned long long _theme;
    long long _videoIndex;
}

@property(readonly, nonatomic) NTKPhotoAnalysis *photoAnalysis; // @synthesize photoAnalysis=_photoAnalysis;
@property(readonly, nonatomic) long long videoIndex; // @synthesize videoIndex=_videoIndex;
@property(readonly, nonatomic) unsigned long long theme; // @synthesize theme=_theme;
- (void)discardAssets;
- (_Bool)snapshotDiffers:(id)arg1;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) CLKVideo *video;
- (void)_setHasAssets;
- (_Bool)isSimilarTo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initForDevice:(id)arg1 withTheme:(unsigned long long)arg2 videoIndex:(long long)arg3 photoAnalysis:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
