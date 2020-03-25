//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, SBDisplayItem, SBFluidSwitcherGesture, SBMainDisplaySceneLayoutDragAndDropInteractionManager, UIGestureRecognizer;
@protocol SBAppPlatterDragSourceViewProviding;

@protocol SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate <NSObject>
- (void)dragAndDropInteractionManager:(SBMainDisplaySceneLayoutDragAndDropInteractionManager *)arg1 didEndGesture:(SBFluidSwitcherGesture *)arg2;
- (void)dragAndDropInteractionManager:(SBMainDisplaySceneLayoutDragAndDropInteractionManager *)arg1 didUpdateGesture:(SBFluidSwitcherGesture *)arg2;
- (void)dragAndDropInteractionManager:(SBMainDisplaySceneLayoutDragAndDropInteractionManager *)arg1 didBeginGesture:(SBFluidSwitcherGesture *)arg2;
- (void)dragAndDropInteractionManager:(SBMainDisplaySceneLayoutDragAndDropInteractionManager *)arg1 willEndDraggingWindowWithSceneIdentifier:(NSString *)arg2;
- (void)dragAndDropInteractionManager:(SBMainDisplaySceneLayoutDragAndDropInteractionManager *)arg1 didBeginDraggingWindowWithSceneIdentifier:(NSString *)arg2;
- (id <SBAppPlatterDragSourceViewProviding>)dragAndDropInteractionManager:(SBMainDisplaySceneLayoutDragAndDropInteractionManager *)arg1 sourceViewProviderForDraggingWindowWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (SBDisplayItem *)dragAndDropInteractionManager:(SBMainDisplaySceneLayoutDragAndDropInteractionManager *)arg1 displayItemForDraggingWindowWithGestureRecognizer:(UIGestureRecognizer *)arg2;
@end
