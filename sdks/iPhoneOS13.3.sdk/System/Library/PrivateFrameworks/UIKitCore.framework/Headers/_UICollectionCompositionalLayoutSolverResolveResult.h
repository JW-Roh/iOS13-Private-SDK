//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionCompositionalLayoutSolverResolveResult-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverResolveResult : NSObject <_UICollectionCompositionalLayoutSolverResolveResult>
{
    NSMutableDictionary *_insertedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_insertedDecorationElementKindIndexPathsDict;
    NSMutableDictionary *_deletedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_deletedDecorationElementKindIndexPathsDict;
    CGPoint _contentOffsetAdjustment;
    CGSize _contentSizeAdjustment;
}

@property(nonatomic) CGSize contentSizeAdjustment; // @synthesize contentSizeAdjustment=_contentSizeAdjustment;
@property(nonatomic) CGPoint contentOffsetAdjustment; // @synthesize contentOffsetAdjustment=_contentOffsetAdjustment;
// - (void).cxx_destruct;
- (id)indexPathsForInsertedDecorationsForElementKind:(id)arg1;
- (id)indexPathsForInsertedSupplememtariesForElementKind:(id)arg1;
- (id)indexPathsForDeletedDecorationsForElementKind:(id)arg1;
- (id)indexPathsForDeletedSupplememtariesForElementKind:(id)arg1;
- (void)addInsertedAuxillaryOfElementKind:(id)arg1 atIndexPath:(id)arg2 isSupplementary:(BOOL)arg3;
- (void)addDeletedAuxillaryOfElementKind:(id)arg1 atIndexPath:(id)arg2 isSupplementary:(BOOL)arg3;
- (id)init;

@end

