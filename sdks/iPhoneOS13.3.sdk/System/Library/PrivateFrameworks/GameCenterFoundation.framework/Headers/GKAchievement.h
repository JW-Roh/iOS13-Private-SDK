//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GKAchievementInternal, GKGame, GKPlayer, NSString;

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    BOOL _showsCompletionBanner;
    GKAchievementInternal *_internal;
    GKGame *_game;
    GKPlayer *_player;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)reportAchievements:(id)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(id /* CDUnknownBlockType */)arg4;
+ (void)reportAchievements:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
+ (void)resetAchievementsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
+ (void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(id /* CDUnknownBlockType */)arg4;
+ (void)loadAchievementsForGameV2:(id)arg1 players:(id)arg2 includeUnreported:(BOOL)arg3 includeHidden:(BOOL)arg4 withCompletionHandler:(id /* CDUnknownBlockType */)arg5;
+ (void)loadAchievementsForGameV2:(id)arg1 player:(id)arg2 includeUnreported:(BOOL)arg3 includeHidden:(BOOL)arg4 withCompletionHandler:(id /* CDUnknownBlockType */)arg5;
+ (void)loadAchievementsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL showsCompletionBanner; // @synthesize showsCompletionBanner=_showsCompletionBanner;
@property(retain) GKAchievementInternal *internal; // @synthesize internal=_internal;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)reportAchievementWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)description;
@property(readonly, nonatomic, getter=isCompleted) BOOL completed;
@property(nonatomic) GKGame *game; // @synthesize game=_game;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) NSString *playerID; // @dynamic playerID;
- (id)init;
- (id)initWithIdentifier:(id)arg1 forPlayer:(id)arg2;
- (id)initWithIdentifier:(id)arg1 player:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_achievementDescription;

@end

