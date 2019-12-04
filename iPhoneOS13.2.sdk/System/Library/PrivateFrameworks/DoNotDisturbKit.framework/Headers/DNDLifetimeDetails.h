//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface DNDLifetimeDetails : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_name;
    NSString *_metadata;
}

+ (id)lifetimeDetailsForPlaceInference:(id)arg1;
+ (id)lifetimeDetailsForEvent:(id)arg1 relativeToDate:(id)arg2;
+ (id)lifetimeDetailsUntilMorning;
+ (id)lifetimeDetailsUntilEvening;
+ (id)lifetimeDetailsForOneHour;
@property(readonly, copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 metadata:(id)arg3;

@end
