//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailSupport/MSFlagChangeTriageAction.h>

@class NSNumber;

@interface MSFlagTriageAction : MSFlagChangeTriageAction
{
    NSNumber *_flagColor;
}

@property(retain, nonatomic) NSNumber *flagColor; // @synthesize flagColor=_flagColor;
- (void)_toggleFlagWithBuilder:(id)arg1;
- (_Bool)_isFlagged;
- (_Bool)flagState;

@end
