//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString, SGDateComponents, SGName, SGRecordId;

@interface SGContact : NSObject <NSCopying, NSSecureCoding>
{
    int _updatedFields;
    SGRecordId *_recordId;
    SGName *_name;
    NSArray *_emailAddresses;
    NSArray *_phones;
    NSArray *_postalAddresses;
    NSArray *_instantMessageAddresses;
    NSArray *_socialProfiles;
    SGDateComponents *_birthday;
    NSString *_photoPath;
    NSUInteger _significance;
    NSUInteger _significanceOrigin;
}

+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5;
+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7 birthday:(id)arg8 photoPath:(id)arg9;
+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) int updatedFields; // @synthesize updatedFields=_updatedFields;
@property(nonatomic) NSUInteger significanceOrigin; // @synthesize significanceOrigin=_significanceOrigin;
@property(nonatomic) NSUInteger significance; // @synthesize significance=_significance;
@property(readonly, copy, nonatomic) NSString *photoPath; // @synthesize photoPath=_photoPath;
@property(copy, nonatomic) SGDateComponents *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSArray *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property(copy, nonatomic) NSArray *instantMessageAddresses; // @synthesize instantMessageAddresses=_instantMessageAddresses;
@property(copy, nonatomic) NSArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(copy, nonatomic) NSArray *phones; // @synthesize phones=_phones;
@property(copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(copy, nonatomic) SGName *name; // @synthesize name=_name;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
// - (void).cxx_destruct;
- (BOOL)hasNonTrivialInfo;
- (id)cnContact;
- (id)detailForRecordId:(id)arg1;
- (BOOL)containsDetailSuggestions;
- (BOOL)containsSuggestions;
- (id)description;
- (NSUInteger)richness;
- (id)addresses;
- (NSUInteger)hash;
- (BOOL)isEqualToContact:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7 birthday:(id)arg8 photoPath:(id)arg9;
// - (id)copyWithZone:(_NSZone )arg1;

@end
