//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, _UIContextMenuCommitContainerView, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuCommitAnimation : NSObject
{
    double _sourceRadius;
    double _destinationRadius;
    UIView *_source;
    UIView *_destination;
    UIView *_container;
    UIView *_morphContainer;
    UIView *_sourceSnapshotView;
    UIView *_sourceTransformView;
    UIView *_destinationTransformView;
    UIView *_originalContentSnapshotView;
    _UIPortalView *_destinationContentPortalView;
    _UIContextMenuCommitContainerView *_animationContainer;
    NSUInteger _animationCount;
}

@property(nonatomic) NSUInteger animationCount; // @synthesize animationCount=_animationCount;
@property(retain, nonatomic) _UIContextMenuCommitContainerView *animationContainer; // @synthesize animationContainer=_animationContainer;
@property(retain, nonatomic) _UIPortalView *destinationContentPortalView; // @synthesize destinationContentPortalView=_destinationContentPortalView;
@property(retain, nonatomic) UIView *originalContentSnapshotView; // @synthesize originalContentSnapshotView=_originalContentSnapshotView;
@property(retain, nonatomic) UIView *destinationTransformView; // @synthesize destinationTransformView=_destinationTransformView;
@property(retain, nonatomic) UIView *sourceTransformView; // @synthesize sourceTransformView=_sourceTransformView;
@property(retain, nonatomic) UIView *sourceSnapshotView; // @synthesize sourceSnapshotView=_sourceSnapshotView;
@property(retain, nonatomic) UIView *morphContainer; // @synthesize morphContainer=_morphContainer;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) UIView *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) UIView *source; // @synthesize source=_source;
@property(nonatomic) double destinationRadius; // @synthesize destinationRadius=_destinationRadius;
@property(nonatomic) double sourceRadius; // @synthesize sourceRadius=_sourceRadius;
// - (void).cxx_destruct;
- (void)_prepareAnimationViews;
- (void)_prepareSnapshots;
- (void)animateWithAlongsideActions:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSource:(id)arg1 container:(id)arg2;

@end
