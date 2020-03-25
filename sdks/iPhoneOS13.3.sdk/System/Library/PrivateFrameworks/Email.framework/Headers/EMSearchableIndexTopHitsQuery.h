//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFCancelable-Protocol.h>
#import <Email/EFLoggable-Protocol.h>

@class CSTopHitSearchQuery, EFPromise, NSArray, NSLock, NSMutableArray, NSProgress, NSString;

@interface EMSearchableIndexTopHitsQuery : NSObject <EFLoggable, EFCancelable, NSProgressReporting>
{
    NSString *_searchString;
    NSArray *_filterQueries;
    NSString *_keyboardLanguage;
    NSUInteger _limit;
    CSTopHitSearchQuery *_topHitSearchQuery;
    NSMutableArray *_foundItems;
    EFPromise *_spotlightTopHitsQueryResultPromise;
    NSProgress *_progress;
    NSProgress *_internalProgress;
    NSString *_logPrefix;
    NSLock *_lock;
}

+ (id)log;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
@property(retain, nonatomic) NSProgress *internalProgress; // @synthesize internalProgress=_internalProgress;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) EFPromise *spotlightTopHitsQueryResultPromise; // @synthesize spotlightTopHitsQueryResultPromise=_spotlightTopHitsQueryResultPromise;
@property(retain, nonatomic) NSMutableArray *foundItems; // @synthesize foundItems=_foundItems;
@property(retain) CSTopHitSearchQuery *topHitSearchQuery; // @synthesize topHitSearchQuery=_topHitSearchQuery;
@property(readonly, nonatomic) NSUInteger limit; // @synthesize limit=_limit;
@property(readonly, copy, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(readonly, copy, nonatomic) NSArray *filterQueries; // @synthesize filterQueries=_filterQueries;
@property(readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
// - (void).cxx_destruct;
- (void)_cancel;
- (void)cancel;
- (void)start;
- (id)topHitsQueryResult;
- (void)_searchDidCompleteWithError:(id)arg1;
- (void)_searchFoundItems:(id)arg1;
- (void)_configureTopHitsSearchQuery:(id)arg1;
- (id)initWithSearchString:(id)arg1 filterQueries:(id)arg2 keyboardLanguage:(id)arg3 limit:(NSUInteger)arg4;

@end
