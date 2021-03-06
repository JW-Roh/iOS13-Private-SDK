//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKRecord, CKRecordID, CKRecordZone, CKRecordZoneID, FCCKPrivateDatabase, NSString;

@protocol FCCKDatabaseRecordMiddleware <NSObject>
- (NSString *)serverToClientRecordType:(NSString *)arg1 withRecordID:(CKRecordID *)arg2 inDatabase:(FCCKPrivateDatabase *)arg3 error:(id )arg4;
- (NSString *)clientToServerRecordType:(NSString *)arg1 withRecordID:(CKRecordID *)arg2 inDatabase:(FCCKPrivateDatabase *)arg3 error:(id )arg4;
- (CKRecordZone *)serverToClientRecordZone:(CKRecordZone *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id )arg3;
- (CKRecordZone *)clientToServerRecordZone:(CKRecordZone *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id )arg3;
- (CKRecord *)serverToClientRecord:(CKRecord *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id )arg3;
- (CKRecord *)clientToServerRecord:(CKRecord *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id )arg3;
- (CKRecordZoneID *)serverToClientRecordZoneID:(CKRecordZoneID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id )arg3;
- (CKRecordZoneID *)clientToServerRecordZoneID:(CKRecordZoneID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id )arg3;
- (CKRecordID *)serverToClientRecordID:(CKRecordID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id )arg3;
- (CKRecordID *)clientToServerRecordID:(CKRecordID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id )arg3;
@end

