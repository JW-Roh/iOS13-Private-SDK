//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/EQKitLayout-Protocol.h>

@class EQKitBox, EQKitEnvironmentInstance, NSString;
@protocol EQKitRootNode;

@interface EQKitLayout : NSObject <EQKitLayout>
{
    id <EQKitRootNode> mRoot;
    EQKitBox *mBox;
    double mAscent;
    double mDescent;
    double mLeading;
    double mNaturalAlignmentOffset;
    double mScale;
    BOOL mSingleLineHeight;
    EQKitEnvironmentInstance *mEnvironment;
}

@property(readonly, nonatomic) EQKitBox *box; // @synthesize box=mBox;
@property(readonly, copy) NSString *description;
- (void)renderIntoContext:(CGContext )arg1 offset:(CGPoint)arg2;
- (CGRect)erasableBounds;
- (double)naturalAlignmentOffset;
- (double)vsize;
- (double)width;
- (double)depth;
- (double)height;
- (BOOL)layoutWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithRoot:(id)arg1 environment:(id)arg2;
- (id)init;

@end

