//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackPositionObserving-Protocol.h>

@class NSString;
@protocol SVPlayerItemObserving, SVPlayerTimeControlStatusObserving;

@interface SVVideoPlaybackPositionObserver : NSObject <SVVideoPlaybackPositionObserving>
{
    unsigned long long _position;
    id /* block */ _changeBlock;
    id <SVPlayerItemObserving> _playerItemObserver;
    id <SVPlayerTimeControlStatusObserving> _timeControlStatusObserver;
}

@property(readonly, nonatomic) id <SVPlayerTimeControlStatusObserving> timeControlStatusObserver; // @synthesize timeControlStatusObserver=_timeControlStatusObserver;
@property(readonly, nonatomic) id <SVPlayerItemObserving> playerItemObserver; // @synthesize playerItemObserver=_playerItemObserver;
@property(copy, nonatomic, setter=onChange:) id /* block */ changeBlock; // @synthesize changeBlock=_changeBlock;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
- (void)playerItemPlayedToEnd:(id)arg1;
- (id)initWithPlayerItemObserver:(id)arg1 timeControlStatusObserver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
