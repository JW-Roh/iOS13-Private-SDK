//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class MBDeviceTransferConnectionInfo, MBDeviceTransferProgress, NSError;

@protocol BYClientMigrationSourceProtocol 
- (void)didChangeConnectionInformation:(MBDeviceTransferConnectionInfo *)arg1;
- (void)didFinishWithError:(NSError *)arg1;
- (void)didUpdateProgress:(MBDeviceTransferProgress *)arg1;
@end
