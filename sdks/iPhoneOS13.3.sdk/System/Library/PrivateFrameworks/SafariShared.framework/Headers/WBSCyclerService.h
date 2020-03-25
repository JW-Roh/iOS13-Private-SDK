//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCyclerServiceProtocol-Protocol.h>

@class NSString, NSXPCListener, WBSCyclerTestRunner, WBSCyclerTestTargetProxyController;
@protocol WBSCyclerTestSuite;

@interface WBSCyclerService : NSObject <NSXPCListenerDelegate, WBSCyclerServiceProtocol>
{
    NSXPCListener *_xpcListener;
    WBSCyclerTestTargetProxyController *_testTargetProxyController;
    Class _testSuiteClass;
    id <WBSCyclerTestSuite> _testSuite;
    WBSCyclerTestRunner *_testRunner;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_postFinishNotificationWithError:(id)arg1;
- (void)_setSeed:(NSUInteger)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)_setTestSuiteName:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (id)_startCyclingFromBeginning:(BOOL)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)fetchStatusWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)sendRequestToTestSuite:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)stopCyclingWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)startCyclingFromBeginning:(BOOL)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)setValue:(id)arg1 forConfigurationKey:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)setTestTargetEndpoint:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end
