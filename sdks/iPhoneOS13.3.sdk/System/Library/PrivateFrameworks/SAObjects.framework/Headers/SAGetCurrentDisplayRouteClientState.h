//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAGetSingleClientState-Protocol.h>

@class SACurrentDisplayRouteClientState;

@interface SAGetCurrentDisplayRouteClientState : SABaseClientBoundCommand <SAGetSingleClientState>
{
}

+ (id)getCurrentDisplayRouteClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getCurrentDisplayRouteClientState;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SACurrentDisplayRouteClientState *clientState;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

