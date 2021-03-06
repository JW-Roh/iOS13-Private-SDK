//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSGrant.h>

@interface RBSCPUAccessGrant : RBSGrant
{
    unsigned char _role;
}

+ (id)grantWithRole:(unsigned char)arg1;
+ (id)grantWithUserInteractivityAndFocus;
+ (id)grantWithUserInteractivity;
+ (id)grantUserInitiated;
+ (id)grant;
@property(readonly, nonatomic) unsigned char role; // @synthesize role=_role;
- (id)_initWithRole:(unsigned char)arg1;
- (id)succinctDescriptionBuilder;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;

@end

