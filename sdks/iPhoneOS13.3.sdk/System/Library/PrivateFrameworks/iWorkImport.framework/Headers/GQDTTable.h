//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDGraphic.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDSStyle, GQDTTableModel;

__attribute__((visibility("hidden")))
@interface GQDTTable : GQDGraphic <GQDNameMappable>
{
    GQDTTableModel *mModel;
    GQDSStyle *mStyle;
    BOOL mIsStreamed;
}

+ (const struct StateSpec )stateForReading;
- (int)walkTableWithGenerator:(Class)arg1 state:(id)arg2;
- (id)defaultVectorStyleForVectorType:(int)arg1;
- (BOOL)isStreamed;
- (void)setTableStyle:(id)arg1;
- (id)tableStyle;
- (void)setModel:(id)arg1;
- (id)model;
- (void)dealloc;

@end

