//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet;

@interface SGHistorySharedData : NSObject
{
    NSMutableSet *confirmedEventHashes;
    NSMutableSet *rejectedEventHashes;
    NSMutableSet *confirmedReminderHashes;
    NSMutableSet *rejectedReminderHashes;
    NSMutableSet *contactHashes;
    NSMutableSet *confirmedEventFieldHashes;
    NSMutableSet *storageDetailHashes;
    NSMutableSet *dontUpdate;
    NSArray *resetInfo;
    NSMutableArray *observers;
}

// - (void).cxx_destruct;

@end

