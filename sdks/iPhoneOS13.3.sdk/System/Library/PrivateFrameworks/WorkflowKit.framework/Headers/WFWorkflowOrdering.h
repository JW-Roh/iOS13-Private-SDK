//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSArray;

@interface WFWorkflowOrdering : NSObject <WFCloudKitItem>
{
    CKRecordID *_identifier;
    NSArray *_orderedWorkflowIDs;
}

+ (id)properties;
+ (id)recordType;
@property(copy, nonatomic) NSArray *orderedWorkflowIDs; // @synthesize orderedWorkflowIDs=_orderedWorkflowIDs;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)initWithZoneID:(id)arg1;

@end

