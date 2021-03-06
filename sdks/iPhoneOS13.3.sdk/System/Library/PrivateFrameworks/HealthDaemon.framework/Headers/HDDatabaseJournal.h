//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSLock, NSProgress, NSString;
@protocol HDDatabaseJournalDelegate;

@interface HDDatabaseJournal : NSObject
{
//     struct os_unfair_lock_s _progressLock;
    long long _type;
    id <HDDatabaseJournalDelegate> _delegate;
    NSString *_path;
    NSLock *_journalLock;
    NSFileHandle *_fileHandle;
    NSProgress *_parentProgress;
}

@property(retain, nonatomic) NSProgress *parentProgress; // @synthesize parentProgress=_parentProgress;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain, nonatomic) NSLock *journalLock; // @synthesize journalLock=_journalLock;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) __weak id <HDDatabaseJournalDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)_unitTesting_journalFiles;
- (void)_unitTesting_closeCurrentJournalFile;
- (BOOL)_performPostJournalMergeWithVersion:(unsigned int)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id )arg4;
- (unsigned int)_processMonarchJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void )arg3 size:(NSUInteger)arg4 headerLength:(NSUInteger)arg5 profile:(id)arg6 transaction:(id)arg7 error:(id )arg8;
- (unsigned int)_processOkemoJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void )arg3 size:(NSUInteger)arg4 headerLength:(NSUInteger)arg5 profile:(id)arg6 transaction:(id)arg7 error:(id )arg8;
- (unsigned int)_processJournalFile:(id)arg1 profile:(id)arg2 transaction:(id)arg3 fileHandle:(id)arg4 mapping:(void )arg5 length:(NSUInteger)arg6 error:(id )arg7;
- (unsigned int)_processJournalFile:(id)arg1 profile:(id)arg2 transaction:(id)arg3 fileHandle:(id)arg4 fileSize:(NSUInteger )arg5 error:(id )arg6;
- (void)_mergeJournalEntries:(id)arg1 profile:(id)arg2;
- (BOOL)_loadJournalFromMapping:(void )arg1 size:(NSUInteger)arg2 headerLength:(NSUInteger)arg3 journalEntries:(id )arg4 error:(id )arg5;
- (BOOL)_loadJournalWithFileHandle:(id)arg1 journalEntries:(id )arg2 error:(id )arg3;
- (id)_loadJournalEntry:(id)arg1;
- (id)_sortedListOfJournalFiles;
- (id)_nameOfNextJournalFile;
- (id)_journalFiles;
- (BOOL)_appendData:(id)arg1 error:(id )arg2;
- (BOOL)_openNextJournalFileWithError:(id )arg1;
- (void)_executeAtomically:(id /* CDUnknownBlockType */)arg1;
- (id)_mergeTransactionContextWithContext:(id)arg1;
- (BOOL)_processJournalFile:(id)arg1 profile:(id)arg2 accessibilityAssertion:(id)arg3;
- (BOOL)_processJournalFilesWithProfile:(id)arg1;
- (NSUInteger)journalFileCount;
- (BOOL)mergeWithProfile:(id)arg1;
- (id)progressForJournalMerge;
- (BOOL)performMergeTransactionWithProfile:(id)arg1 transactionContext:(id)arg2 error:(id )arg3 block:(id /* CDUnknownBlockType */)arg4;
- (BOOL)addJournalEntries:(id)arg1 error:(id )arg2;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1 path:(id)arg2;

@end

