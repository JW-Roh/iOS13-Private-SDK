//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class _UIFocusRegion;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionContentAttributes : NSObject <NSCopying>
{
    BOOL _requiresIntersectionWithFocusMapSearchArea;
    _UIFocusRegion *_contentRegion;
}

+ (id)attributesForFocusRegionContentInContainer:(id)arg1 coordinateSpace:(id)arg2;
@property(nonatomic) BOOL requiresIntersectionWithFocusMapSearchArea; // @synthesize requiresIntersectionWithFocusMapSearchArea=_requiresIntersectionWithFocusMapSearchArea;
@property(copy, nonatomic) _UIFocusRegion *contentRegion; // @synthesize contentRegion=_contentRegion;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

