//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class NSArray, NSDictionary, UISegmentedControl, UITableView;

@interface PXDebugDictionaryViewController : UIViewController <UITableViewDataSource>
{
    NSDictionary *_debugDictionary;
    UISegmentedControl *_segmentedControl;
    UITableView *_tableView;
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
}

@property(retain, nonatomic) NSDictionary *tableContent; // @synthesize tableContent=_tableContent;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(readonly, nonatomic) NSDictionary *debugDictionary; // @synthesize debugDictionary=_debugDictionary;
// - (void).cxx_destruct;
- (void)_closeAction:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_sanitizedTextForTitle:(id)arg1 value:(id)arg2;
- (id)_flattenDictionary:(id)arg1;
- (void)_updateWithSegmentedTitle:(id)arg1;
- (void)_switchLogsAction:(id)arg1;
- (id)segmentedTitles;
- (void)viewDidLoad;
- (id)initWithDebugDictionary:(id)arg1;

@end

