//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class SSVFairPlaySAPSession;

@interface RadioRequestContext : NSObject <NSCopying>
{
    SSVFairPlaySAPSession *_SAPSession;
    BOOL _usesLocalNetworking;
}

@property(nonatomic) BOOL usesLocalNetworking; // @synthesize usesLocalNetworking=_usesLocalNetworking;
@property(retain, nonatomic) SSVFairPlaySAPSession *SAPSession; // @synthesize SAPSession=_SAPSession;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

