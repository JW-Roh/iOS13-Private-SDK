//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSTAccumulator, TSTAggregator, TSTGroupNode;

__attribute__((visibility("hidden")))
@interface TSTAggNode : NSObject
{
    struct TSUCellCoord _formulaCoord;
    TSTAccumulator *_accumulator;
    NSMutableArray *_children;
    TSTGroupNode *_groupNode;
    TSTAggregator *_aggregator;
    unsigned char _groupLevel;
}

@property(readonly, nonatomic) unsigned char groupLevel; // @synthesize groupLevel=_groupLevel;
@property(readonly, nonatomic) __weak TSTAggregator *aggregator; // @synthesize aggregator=_aggregator;
@property(nonatomic) __weak TSTGroupNode *groupNode; // @synthesize groupNode=_groupNode;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(retain, nonatomic) TSTAccumulator *accumulator; // @synthesize accumulator=_accumulator;
@property(readonly, nonatomic) struct TSUCellCoord formulaCoord; // @synthesize formulaCoord=_formulaCoord;
-     // Error parsing type: v24@0:8^{CategoryOwnerArchive_GroupByArchive_AggNodeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::CategoryOwnerArchive_GroupByArchive_AggNodeArchive>=^{Arena}ii^{Rep}}^{CellCoordinateArchive}^{AccumulatorArchive}}16, name: encodeToArchive:
-     // Error parsing type: @32@0:8r^{CategoryOwnerArchive_GroupByArchive_AggNodeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::CategoryOwnerArchive_GroupByArchive_AggNodeArchive>=^{Arena}ii^{Rep}}^{CellCoordinateArchive}^{AccumulatorArchive}}16@24, name: initWithArchive:aggregator:
- (void)enumerateDirectChildren:(id /* block */)arg1;
- (id)descriptionWithCategoryOwner:(id)arg1;
- (id)description;
- (void)clearAggFormulas:(id)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (void)addChild:(id)arg1;
- (id)initWithFormulaCoord:(struct TSUCellCoord)arg1 groupNode:(id)arg2 aggregator:(id)arg3;

@end
