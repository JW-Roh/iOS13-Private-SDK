//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSDImageProvider, TSPObjectContext;

@interface TSDImageResamplingOperation : NSObject
{
    TSDImageProvider *mImageProvider;
    CGSize mDesiredSize;
    NSString *mDisplayName;
    CGPath mMaskingPath;
    TSPObjectContext *mObjectContext;
}

@property(nonatomic) CGPath maskingPath; // @synthesize maskingPath=mMaskingPath;
@property(retain, nonatomic) TSPObjectContext *objectContext; // @synthesize objectContext=mObjectContext;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=mDisplayName;
@property(nonatomic) CGSize desiredSize; // @synthesize desiredSize=mDesiredSize;
@property(retain, nonatomic) TSDImageProvider *imageProvider; // @synthesize imageProvider=mImageProvider;
- (id)performResampleOperationWithResampleOptions:(NSUInteger)arg1 bitmapContextOptions:(NSUInteger)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithImageProvider:(id)arg1 desiredSize:(CGSize)arg2;

@end

