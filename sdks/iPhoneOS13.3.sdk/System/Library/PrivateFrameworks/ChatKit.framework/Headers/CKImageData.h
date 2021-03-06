//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL, UIImage;

@interface CKImageData : NSObject
{
    CGImageSource _imageSource;
    NSUInteger _count;
    long long _orientation;
    CGSize _pxSize;
    BOOL _initializedProperties;
    NSData *_data;
    NSURL *_url;
    UIImage *_image;
}

+ (BOOL)supportsASTC;
+ (id)UTITypeForData:(id)arg1;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (id)_thumbnailFillToSize:(CGSize)arg1 atIndex:(NSUInteger)arg2;
- (id)_thumbnailFitToSize:(CGSize)arg1 atIndex:(NSUInteger)arg2;
- (void)_initializeProperties;
@property(readonly, nonatomic) NSUInteger count; // @dynamic count;
@property(readonly, nonatomic) long long orientation; // @dynamic orientation;
@property(readonly, nonatomic) CGSize pxSize; // @dynamic pxSize;
@property(readonly, nonatomic) CGSize ptSize; // @dynamic ptSize;
@property(readonly, copy, nonatomic) NSString *UTIType; // @dynamic UTIType;
@property(readonly, copy, nonatomic) NSString *MIMEType; // @dynamic MIMEType;
- (id)durationsWithMaxCount:(NSUInteger)arg1;
- (id)_defaultDurationsWithMaxCount:(NSUInteger)arg1;
- (id)thumbnailsFillToSize:(CGSize)arg1 maxCount:(NSUInteger)arg2;
- (id)thumbnailAtIndex:(NSUInteger)arg1 fillToSize:(CGSize)arg2 maxCount:(NSUInteger)arg3;
- (id)thumbnailsFitToSize:(CGSize)arg1 maxCount:(NSUInteger)arg2;
- (id)thumbnailFillToSizeCropping:(CGSize)arg1;
- (id)thumbnailFillToSize:(CGSize)arg1;
- (id)thumbnailFitToSize:(CGSize)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end

