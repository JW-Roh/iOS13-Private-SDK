//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMXPCServiceDescription, FMXPCSession;
@protocol OS_dispatch_queue, SPSchedulerXPCProtocol;

@interface SPScheduler : NSObject
{
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id <SPSchedulerXPCProtocol> _proxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SPSchedulerXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
// - (void).cxx_destruct;
- (void)publishImmediatelyWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)schedulePublishWakeWithInformation:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)remoteInterface;
- (void)dealloc;
- (id)init;

@end

