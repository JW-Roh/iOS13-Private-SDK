//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationSessionObserver-Protocol.h>

@class MNLocation, MNTraceRecorder, NSError, NSString;

__attribute__((visibility("hidden")))
@interface MNTraceNavigationEventRecorder : NSObject <MNNavigationSessionObserver>
{
    MNTraceRecorder *_traceRecorder;
    MNLocation *_lastMatchedLocation;
    NSError *_previousSuppressedRerouteError;
}

- (void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSession:(id)arg1 didSuppressReroute:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
- (void)navigationSessionDidStop:(id)arg1;
- (void)navigationSessionDidStart:(id)arg1;
- (id)_descriptionForWaypoint:(id)arg1;
- (void)_userWentOffRoute;
- (void)_userGotOnRoute;
- (void)_recordEvent:(long long)arg1 description:(id)arg2;
- (void)setLastMatchedLocation:(id)arg1;
- (id)initWithTraceRecorder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
