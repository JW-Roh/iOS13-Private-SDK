//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIDynamicBehavior.h>

@class NSCollectionLayoutVisibleItem;
@protocol _NSCollectionLayoutVisibleItem;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutDynamicBehavior : UIDynamicBehavior
{
    id <_NSCollectionLayoutVisibleItem> _visibleItem;
}

@property(readonly, nonatomic) NSCollectionLayoutVisibleItem *visibleItem; // @synthesize visibleItem=_visibleItem;
- (id)item;
- (id)initWithVisibleItem:(id)arg1;

@end
