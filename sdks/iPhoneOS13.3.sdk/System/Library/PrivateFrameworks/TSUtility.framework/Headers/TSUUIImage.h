//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/TSUImage.h>

@class UIImage;

@interface TSUUIImage : TSUImage
{
    UIImage *mUIImage;
}

+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
- (long long)imageOrientation;
- (CGImage )CGImageForSize:(CGSize)arg1;
- (CGImage )CGImage;
- (double)scale;
- (CGSize)size;
- (id)UIImage;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithUIImage:(id)arg1;

@end

