//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMOpenIdCredential : FATObject
{
    NSString *_tokenPayload;
    NSNumber *_serviceProvider;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(retain, nonatomic) NSString *tokenPayload; // @synthesize tokenPayload=_tokenPayload;
// - (void).cxx_destruct;

@end

