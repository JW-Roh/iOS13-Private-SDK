//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDForegroundReporting-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>

@class NSArray;

@interface EDClientState : NSObject <EDForegroundReporting, EFLoggable>
{
    BOOL _isForeground;
    NSArray *_visibleMailboxesObjectIds;
}

+ (id)sharedInstance;
+ (id)log;
@property(readonly, nonatomic) NSArray *visibleMailboxesObjectIds; // @synthesize visibleMailboxesObjectIds=_visibleMailboxesObjectIds;
@property(readonly, nonatomic) BOOL isForeground; // @synthesize isForeground=_isForeground;
// - (void).cxx_destruct;
- (id)giveBoostWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)setClientIsInForeground:(BOOL)arg1;
- (void)setCurrentlyVisibleMailboxObjectIDs:(id)arg1;
- (void)dealloc;
- (id)init;

@end

