//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

@class HFUserNotificationServiceTopic, HMHome, HUUserNotificationTopicServiceListModuleController;

@interface HUUserNotificationTopicServiceListViewController : HUItemTableViewController
{
    HMHome *_home;
    HFUserNotificationServiceTopic *_topic;
    HUUserNotificationTopicServiceListModuleController *_moduleController;
}

@property(retain, nonatomic) HUUserNotificationTopicServiceListModuleController *moduleController; // @synthesize moduleController=_moduleController;
@property(readonly, nonatomic) HFUserNotificationServiceTopic *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)showNotificationSettingsForHomeKitObject:(id)arg1 animated:(_Bool)arg2;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)initWithHome:(id)arg1 topic:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;

@end
