//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary;

@interface ICSuzeLeaseResponse : NSObject
{
    NSDate *_requestDate;
    NSDictionary *_responseDictionary;
}

@property(readonly, copy, nonatomic) NSDate *leaseExpirationDate;
@property(readonly, copy, nonatomic) NSData *clientData;
- (id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2;

@end
