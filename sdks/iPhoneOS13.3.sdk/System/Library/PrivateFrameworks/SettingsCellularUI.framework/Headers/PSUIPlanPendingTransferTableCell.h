//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SettingsCellularUI/PSUIDanglingPlanTableCell.h>

@class CTCellularPlanPendingTransfer, UIImageView;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferTableCell : PSUIDanglingPlanTableCell
{
    UIImageView *_view;
    CTCellularPlanPendingTransfer *_planPendingTransfer;
}

@property(retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // @synthesize planPendingTransfer=_planPendingTransfer;
@property(retain, nonatomic) UIImageView *view; // @synthesize view=_view;
// - (void).cxx_destruct;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)_setView;

@end

