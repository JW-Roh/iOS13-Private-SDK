//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSSet;

@interface HFSelectedUserCollection : NSObject <NAIdentifiable>
{
    NSUInteger _type;
    NSSet *_specificUsers;
}

+ (id)collectionWithResolvedUsers:(id)arg1 inHome:(id)arg2;
+ (id)na_identity;
+ (id)collectionWithSpecificUsers:(id)arg1;
+ (id)currentUserCollection;
+ (id)allUsersCollection;
@property(readonly, copy, nonatomic) NSSet *specificUsers; // @synthesize specificUsers=_specificUsers;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)resolveSelectedUsersWithHome:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithType:(NSUInteger)arg1 specificUsers:(id)arg2;
- (id)init;

@end

