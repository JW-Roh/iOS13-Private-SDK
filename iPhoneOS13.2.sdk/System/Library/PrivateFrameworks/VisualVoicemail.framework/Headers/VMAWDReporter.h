//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWDServerConnection;
@protocol OS_dispatch_queue;

@interface VMAWDReporter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    AWDServerConnection *_serverConnection;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AWDServerConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)reportVoicemailTranscriptionFailedWithReason:(unsigned long long)arg1;
- (void)reportVoicemailTranscriptionCompleted;
- (void)reportVoicemailTranscriptionAttempted;
- (void)reportVoicemailTranscriptionRatedAccurate:(_Bool)arg1;
- (void)_reportMetricWithID:(unsigned int)arg1 metric:(id)arg2;
- (void)reportVoicemailDownloadedWithDuration:(int)arg1;
- (void)reportCustomGreetingFailedWithReason:(unsigned long long)arg1;
- (void)reportCustomGreetingSaved;
- (void)reportServiceBeaconMaxedOut;
- (void)reportServiceAccountStateChanged:(int)arg1;
- (id)init;

@end
