//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseJournalManager, NSString;

@interface EDPersistenceDatabaseJournal : NSObject
{
    struct os_unfair_lock_s _referenceCountLock;
    unsigned long long _referenceCount;
    unsigned long long _number;
    EDPersistenceDatabaseJournalManager *_journalManager;
}

@property(readonly, nonatomic) EDPersistenceDatabaseJournalManager *journalManager; // @synthesize journalManager=_journalManager;
@property(readonly, nonatomic) unsigned long long number; // @synthesize number=_number;
@property(readonly) unsigned long long referenceCount;
- (void)checkIn;
- (void)checkOut;
@property(readonly, copy, nonatomic) NSString *path;
- (id)description;
- (id)initWithJournalManager:(id)arg1 number:(unsigned long long)arg2;

@end
