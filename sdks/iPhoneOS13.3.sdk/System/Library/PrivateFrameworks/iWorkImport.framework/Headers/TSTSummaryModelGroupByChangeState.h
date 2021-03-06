//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>

@class TSTCellMap;

__attribute__((visibility("hidden")))
@interface TSTSummaryModelGroupByChangeState : TSKSosBase
{
    vector_b67dfe3a _summaryRowHeightList;
    vector_b67dfe3a _labelRowHeightList;
    vector_12bd641b _labelRowVisibilityList;
    TSTCellMap *_cellMap;
    BOOL _definedCellMap;
}

@property(readonly, nonatomic) vector_12bd641b labelRowVisibilityList; // @synthesize labelRowVisibilityList=_labelRowVisibilityList;
@property(readonly, nonatomic) vector_b67dfe3a labelRowHeightList; // @synthesize labelRowHeightList=_labelRowHeightList;
@property(readonly, nonatomic) vector_b67dfe3a summaryRowHeightList; // @synthesize summaryRowHeightList=_summaryRowHeightList;
@property(retain, nonatomic) TSTCellMap *cellMap; // @synthesize cellMap=_cellMap;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)initWithMessage:(const struct SummaryModelGroupByChangeStateArchive )arg1 unarchiver:(id)arg2;
- (void)saveToMessage:(struct SummaryModelGroupByChangeStateArchive )arg1 archiver:(id)arg2;

@end

