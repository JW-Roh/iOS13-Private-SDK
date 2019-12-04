//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPHistoryReplicaRecord-Protocol.h>


@class MSPVectorTimestamp, NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _MSPHistoryReplicaPlaceholderRecord : NSObject <MSPHistoryReplicaRecord, NSSecureCoding>
{
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
    NSDate *_modificationDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp; // @synthesize contentsTimestamp=_contentsTimestamp;
@property(readonly, copy, nonatomic) NSData *contents; // @synthesize contents=_contents;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 modificationDate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
