//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBEntitlementManaging-Protocol.h>
#import <RunningBoard/RBEntitlementPossessing-Protocol.h>

@interface RBIgnoreAllEntitlementsManager : NSObject <RBEntitlementManaging, RBEntitlementPossessing>
{
}

- (BOOL)hasEntitlementDomain:(NSUInteger)arg1;
- (BOOL)hasEntitlement:(id)arg1;
- (id)entitlementsForProcess:(id)arg1;
- (id)allEntitlements;

@end

