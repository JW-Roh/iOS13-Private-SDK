//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface MTIDInfo : NSObject
{
    NSString *_ID;
    NSDate *_expirationDate;
    NSString *_idNamespace;
}

@property(retain, nonatomic) NSString *idNamespace; // @synthesize idNamespace=_idNamespace;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (id)description;
- (id)initWithNamespace:(id)arg1 expiration:(id)arg2 ID:(id)arg3;

@end
