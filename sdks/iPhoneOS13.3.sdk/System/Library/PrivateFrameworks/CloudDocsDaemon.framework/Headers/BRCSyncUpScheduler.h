//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

__attribute__((visibility("hidden")))
@interface BRCSyncUpScheduler : BRCFSSchedulerBase
{
}

- (void)schedule;
- (void)performFirstSchedulingAfterStartupInDB:(id)arg1;
- (void)_scheduleSyncUpJob:(id)arg1;
- (void)setState:(int)arg1 forItem:(id)arg2 zone:(id)arg3;
- (NSUInteger)postponeSyncUpForItem:(id)arg1 inZone:(id)arg2;
- (BOOL)isItemPendingSyncUp:(id)arg1;
- (NSUInteger)inFlightDiffsForItem:(id)arg1;
- (NSUInteger)inFlightDiffsForItem:(id)arg1 zoneRowID:(id)arg2;
- (BOOL)isItemInSyncUpAndInFlight:(id)arg1 inZone:(id)arg2;
- (BOOL)isItemInSyncUpAndInFlight:(id)arg1;
- (NSUInteger)finishSyncUpForItem:(id)arg1 inZone:(id)arg2 success:(BOOL)arg3;
- (void)prepareItemForSyncUp:(id)arg1 inFlightDiffs:(NSUInteger)arg2 inZone:(id)arg3;
- (void)deleteSyncUpJobsForItem:(id)arg1;
- (void)createSyncUpJobForItem:(id)arg1 inZone:(id)arg2;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (id)initWithAccountSession:(id)arg1;

@end
