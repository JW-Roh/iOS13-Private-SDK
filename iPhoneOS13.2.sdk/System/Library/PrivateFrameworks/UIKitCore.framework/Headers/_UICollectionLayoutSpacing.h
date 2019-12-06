//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionLayoutAPIRespresenting-Protocol.h>

@interface _UICollectionLayoutSpacing : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>
{
    double _spacing;
    BOOL _isFlexible;
}

+ (id)fixedSpacing:(double)arg1;
+ (id)flexibleSpacing:(double)arg1;
+ (id)defaultSpacing;
- (id)_apiRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) BOOL isFixedSpacing;
@property(readonly, nonatomic) BOOL isFlexibleSpacing;
@property(readonly, nonatomic) double spacing;
- (id)initWithSpacing:(double)arg1 flexible:(BOOL)arg2;

@end
