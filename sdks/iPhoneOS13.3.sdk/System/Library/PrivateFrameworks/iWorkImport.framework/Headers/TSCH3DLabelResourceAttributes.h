//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, TSCH3DLabelBitmapContextInfo, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSCH3DLabelResourceAttributes : NSObject <NSCopying>
{
    TSWPParagraphStyle *mParagraphStyle;
    NSString *mString;
    TSCH3DLabelBitmapContextInfo *mBitmapContextInfo;
    double mLabelWidth;
    double mRenderSamples;
}

+ (id)labelAttributesWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4 renderSamples:(double)arg5;
@property(readonly, nonatomic) double renderSamples; // @synthesize renderSamples=mRenderSamples;
@property(readonly, nonatomic) double labelWidth; // @synthesize labelWidth=mLabelWidth;
@property(readonly, nonatomic) TSCH3DLabelBitmapContextInfo *bitmapContextInfo; // @synthesize bitmapContextInfo=mBitmapContextInfo;
@property(readonly, nonatomic) NSString *string; // @synthesize string=mString;
@property(readonly, nonatomic) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;
- (NSUInteger)hash;
- (id)description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4 renderSamples:(double)arg5;

@end

