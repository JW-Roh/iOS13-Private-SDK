//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/_HMDAccountIdentifier.h>

@class HMDAccountHandle;

__attribute__((visibility("hidden")))
@interface _HMDAccountHandleIdentifer : _HMDAccountIdentifier
{
    HMDAccountHandle *_accountHandle;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) HMDAccountHandle *accountHandle; // @synthesize accountHandle=_accountHandle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAccountHandle:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
