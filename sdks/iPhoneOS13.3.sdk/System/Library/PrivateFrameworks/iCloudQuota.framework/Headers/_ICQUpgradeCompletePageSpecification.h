//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCloudQuota/_ICQPageSpecification.h>

@class ICQLink, NSString;

@interface _ICQUpgradeCompletePageSpecification : _ICQPageSpecification
{
    NSString *_title;
    NSString *_message;
    ICQLink *_doneLink;
}

+ (id)upgradeCompletePageSpecificationSampleForLevel:(long long)arg1;
@property(retain, nonatomic) ICQLink *doneLink; // @synthesize doneLink=_doneLink;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (BOOL)hasCancelButtonForBack;
- (id)pageIdentifier;

@end

