//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSUserDefaults, SGContentAdmissionKVOObserver;

@interface SGContentAdmission : NSObject
{
    NSSet *_disabledBundleIdentifiers;
    NSUserDefaults *_defaults;
    SGContentAdmissionKVOObserver *_kvoObserver;
}

+ (void)migrateForTests;
+ (void)clearTestSettings;
+ (_Bool)isSupportedSearchableItemBundleIdentifier:(id)arg1;
+ (_Bool)shouldAdmitContentFromBundleIdentifier:(id)arg1;
+ (void)disableBundleIdentifier:(id)arg1;
+ (id)sharedInstance;
+ (void)initialize;
- (void)_clearTestSettings;
- (void)_migrateIfNeededWithCompletion:(id /* block */)arg1;
- (_Bool)_shouldAdmitContentFromBundleIdentifier:(id)arg1;
- (void)_disableBundleIdentifier:(id)arg1;
- (void)_refreshDisabledBundleIds;
- (id)init;

@end
