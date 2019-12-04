//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKDiscoveryObject.h>




@class NSDictionary, NSString, PKDiscoveryEngagementMessageAction;

@interface PKDiscoveryEngagementMessage : PKDiscoveryObject <NSSecureCoding, NSCopying>
{
    _Bool _reportIdentifierToAggd;
    long long _type;
    long long _passQualifier;
    NSString *_titleKey;
    NSString *_messageKey;
    NSDictionary *_iconURLs;
    PKDiscoveryEngagementMessageAction *_action;
    NSString *_localizedTitle;
    NSString *_localizedMessage;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic, getter=canReportIdentifierToAggd) _Bool reportIdentifierToAggd; // @synthesize reportIdentifierToAggd=_reportIdentifierToAggd;
@property(retain, nonatomic) PKDiscoveryEngagementMessageAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSDictionary *iconURLs; // @synthesize iconURLs=_iconURLs;
@property(retain, nonatomic) NSString *messageKey; // @synthesize messageKey=_messageKey;
@property(retain, nonatomic) NSString *titleKey; // @synthesize titleKey=_titleKey;
@property(nonatomic) long long passQualifier; // @synthesize passQualifier=_passQualifier;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateForRuleResult:(_Bool)arg1;
- (void)updateWithDiscoveryEngagementMessage:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
