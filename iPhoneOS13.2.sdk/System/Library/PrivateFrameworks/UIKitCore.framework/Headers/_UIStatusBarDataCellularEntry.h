//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDataNetworkEntry.h>

@class NSString;

@interface _UIStatusBarDataCellularEntry : _UIStatusBarDataNetworkEntry
{
    _Bool _wifiCallingEnabled;
    _Bool _callForwardingEnabled;
    _Bool _showsSOSWhenDisabled;
    long long _type;
    NSString *_string;
    NSString *_crossfadeString;
    NSString *_badgeString;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool showsSOSWhenDisabled; // @synthesize showsSOSWhenDisabled=_showsSOSWhenDisabled;
@property(nonatomic) _Bool callForwardingEnabled; // @synthesize callForwardingEnabled=_callForwardingEnabled;
@property(nonatomic) _Bool wifiCallingEnabled; // @synthesize wifiCallingEnabled=_wifiCallingEnabled;
@property(copy, nonatomic) NSString *badgeString; // @synthesize badgeString=_badgeString;
@property(copy, nonatomic) NSString *crossfadeString; // @synthesize crossfadeString=_crossfadeString;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)_ui_descriptionBuilder;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;

@end
