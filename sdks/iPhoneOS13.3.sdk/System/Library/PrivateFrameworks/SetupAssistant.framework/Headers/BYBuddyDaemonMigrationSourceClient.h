//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SetupAssistant/BYClientMigrationSourceProtocol-Protocol.h>

@class NSXPCConnection;
@protocol BYDeviceMigrationDelegate;

@interface BYBuddyDaemonMigrationSourceClient : NSObject <BYClientMigrationSourceProtocol>
{
    id <BYDeviceMigrationDelegate> _delegate;
    NSXPCConnection *_connection;
}

+ (id)clientInterface;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <BYDeviceMigrationDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)didChangeConnectionInformation:(id)arg1;
- (void)didFinishWithError:(id)arg1;
- (void)didUpdateProgress:(id)arg1;
- (void)_connectToDaemon;
- (void)setFileTransferTemplate:(id)arg1;
- (void)launchSetupForMigration;
- (void)registerAsUserInterfaceHost:(id /* CDUnknownBlockType */)arg1;
- (void)cancel;
- (id)init;

@end

