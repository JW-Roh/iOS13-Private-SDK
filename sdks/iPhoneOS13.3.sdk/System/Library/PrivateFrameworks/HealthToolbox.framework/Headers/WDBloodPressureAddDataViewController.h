//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDAddDataViewController.h>

#import <HealthToolbox/WDAddDataManualEntryItemDelegate-Protocol.h>

@class WDAddDataManualEntryItem;

__attribute__((visibility("hidden")))
@interface WDBloodPressureAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate>
{
    WDAddDataManualEntryItem *_dateTimeEntryItem;
    WDAddDataManualEntryItem *_systolicEntryItem;
    WDAddDataManualEntryItem *_diastolicEntryItem;
}

// - (void).cxx_destruct;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (BOOL)_systolicAndDiastolicHaveValues;
- (id)generateHKObjects;
- (void)validateDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)defaultEditingItem;
- (long long)numberOfSections;
- (id)manualEntryItemsForSection:(long long)arg1;
- (void)viewDidLoad;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;

@end

