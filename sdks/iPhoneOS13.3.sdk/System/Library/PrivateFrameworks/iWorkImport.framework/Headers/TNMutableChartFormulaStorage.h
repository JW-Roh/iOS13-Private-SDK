//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TNChartFormulaStorage.h>

__attribute__((visibility("hidden")))
@interface TNMutableChartFormulaStorage : TNChartFormulaStorage
{
}

- (NSUInteger)numberOfGroupsWithCalcEngine:(id)arg1 inEntity:(const UUIDData_5fbc143e )arg2;
- (void)addFormula:(id)arg1 withFormulaID:(struct TSUCellCoord)arg2;
- (void)setFormulaList:(id)arg1 forKey:(NSUInteger)arg2;
- (id)mutableFormulaListForType:(NSUInteger)arg1;
- (void)clearFormulaListForKey:(NSUInteger)arg1;
- (void)setDirection:(int)arg1;
- (id)initWithChartFormulaStorage:(id)arg1;

@end

