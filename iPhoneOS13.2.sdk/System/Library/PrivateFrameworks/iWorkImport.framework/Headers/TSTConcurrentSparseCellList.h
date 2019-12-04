//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTConcurrentCellList.h>

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface TSTConcurrentSparseCellList : TSTConcurrentCellList
{
    NSMutableIndexSet *_validCells;
}

@property(retain, nonatomic) NSMutableIndexSet *validCells; // @synthesize validCells=_validCells;
- (void)p_pruneCellsAtColumn:(unsigned long long)arg1 rowsSize:(unsigned long long)arg2 columnsSize:(unsigned long long)arg3;
- (void)p_pruneCellsAtRow:(unsigned long long)arg1 rowsSize:(unsigned long long)arg2 columnsSize:(unsigned long long)arg3;
- (void)p_enumerateRowsOfCellsConcurrentlyUsingBlock:(id /* block */)arg1;
- (void)p_accumulateCurrentCellsConcurrentlyUsingBlock:(id /* block */)arg1;
- (void)p_invokeBlock:(id /* block */)arg1;
- (unsigned long long)cellCount;
- (_Bool)hasCells;
- (void)addCell:(id)arg1 atViewCellCoord:(struct TSUViewCellCoord)arg2;
- (id)initWithContext:(id)arg1 viewCellRect:(struct TSUViewCellRect)arg2 cellUIDRange:(UUIDRect_d701734b)arg3;

@end
