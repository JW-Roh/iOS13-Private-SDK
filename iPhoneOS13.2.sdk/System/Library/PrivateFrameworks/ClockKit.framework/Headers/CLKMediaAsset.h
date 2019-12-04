//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class CLKDevice, CLKVideo, UIImage;

@interface CLKMediaAsset : NSObject <NSCopying>
{
    CLKDevice *_device;
    CLKVideo *_video;
    UIImage *_image;
    double _videoDuration;
    double _stillDisplayTime;
}

+ (id)mediaAssetWithVideoAndImageNamed:(id)arg1 forDevice:(id)arg2;
+ (id)mediaAssetWithVideo:(id)arg1 image:(id)arg2 videoDuration:(double)arg3 stillDisplayTime:(double)arg4 forDevice:(id)arg5;
+ (id)mediaAssetWithVideo:(id)arg1 image:(id)arg2 forDevice:(id)arg3;
+ (id)mediaAssetWithImage:(id)arg1 forDevice:(id)arg2;
@property(readonly, nonatomic) double stillDisplayTime; // @synthesize stillDisplayTime=_stillDisplayTime;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) CLKVideo *video; // @synthesize video=_video;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideo:(id)arg1 image:(id)arg2 videoDuration:(double)arg3 stillDisplayTime:(double)arg4 forDevice:(id)arg5;
- (id)initWithVideo:(id)arg1 image:(id)arg2 forDevice:(id)arg3;
- (id)initWithImage:(id)arg1 forDevice:(id)arg2;

@end
