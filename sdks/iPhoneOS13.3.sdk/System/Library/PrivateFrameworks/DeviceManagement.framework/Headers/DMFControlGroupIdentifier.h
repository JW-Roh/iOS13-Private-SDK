//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSUUID;

@interface DMFControlGroupIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _groupID;
    NSUUID *_organizationUUID;
}

+ (BOOL)supportsSecureCoding;
+ (id)new;
@property(readonly, nonatomic) unsigned short groupID; // @synthesize groupID=_groupID;
@property(readonly, copy, nonatomic) NSUUID *organizationUUID; // @synthesize organizationUUID=_organizationUUID;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqualToGroupIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
@property(readonly, copy, nonatomic) NSString *stringValue;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2;
- (id)initWithString:(id)arg1;
- (id)init;

@end
