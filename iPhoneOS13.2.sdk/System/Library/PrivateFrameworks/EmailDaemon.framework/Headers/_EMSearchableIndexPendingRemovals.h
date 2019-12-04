//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _EMSearchableIndexPendingRemovals : NSObject <NSCopying>
{
    NSMutableDictionary *_reasonsByIdentifier;
    NSSet *_purgeReasons;
    NSSet *_exclusionReasons;
}

@property(copy, nonatomic) NSSet *exclusionReasons; // @synthesize exclusionReasons=_exclusionReasons;
@property(copy, nonatomic) NSSet *purgeReasons; // @synthesize purgeReasons=_purgeReasons;
- (void)removeAllIdentifiers;
- (void)removeIdentifier:(id)arg1;
- (void)addIdentifiers:(id)arg1 withReasons:(id)arg2;
@property(readonly, nonatomic) NSArray *deletedIdentifiers;
@property(readonly, nonatomic) NSArray *purgedIdentifiers;
- (id)_identifiersPassingReasonsTest:(id /* block */)arg1;
@property(readonly, nonatomic) NSArray *identifiers;
@property(readonly) unsigned long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPurgeReasons:(id)arg1 exclusionReasons:(id)arg2;

@end
