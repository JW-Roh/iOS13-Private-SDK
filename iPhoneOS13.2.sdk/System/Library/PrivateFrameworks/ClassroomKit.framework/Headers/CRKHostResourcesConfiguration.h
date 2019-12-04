//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray;
@protocol CRKIPAddressProviding, CRKIdentity;

@interface CRKHostResourcesConfiguration : NSObject <NSCopying>
{
    unsigned short _port;
    NSArray *_resourceURLs;
    id <CRKIdentity> _serverIdentity;
    NSArray *_trustedCertificates;
    unsigned long long _maximumAllowedDownloads;
    NSObject<CRKIPAddressProviding> *_IPAddressProvider;
}

@property(retain, nonatomic) NSObject<CRKIPAddressProviding> *IPAddressProvider; // @synthesize IPAddressProvider=_IPAddressProvider;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(nonatomic) unsigned long long maximumAllowedDownloads; // @synthesize maximumAllowedDownloads=_maximumAllowedDownloads;
@property(readonly, copy, nonatomic) NSArray *trustedCertificates; // @synthesize trustedCertificates=_trustedCertificates;
@property(readonly, nonatomic) id <CRKIdentity> serverIdentity; // @synthesize serverIdentity=_serverIdentity;
@property(readonly, copy, nonatomic) NSArray *resourceURLs; // @synthesize resourceURLs=_resourceURLs;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedCertificates:(id)arg3;

@end
