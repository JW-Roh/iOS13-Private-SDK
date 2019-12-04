//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPTextViewStyle;

__attribute__((visibility("hidden")))
@interface LPTextRowStyle : NSObject
{
    LPTextViewStyle *_leading;
    LPTextViewStyle *_trailing;
    long long _balancingMode;
}

@property(nonatomic) long long balancingMode; // @synthesize balancingMode=_balancingMode;
@property(readonly, nonatomic) LPTextViewStyle *trailing; // @synthesize trailing=_trailing;
@property(readonly, nonatomic) LPTextViewStyle *leading; // @synthesize leading=_leading;
- (void)applyToAllTextViewStyles:(id /* block */)arg1;
- (id)right;
- (id)left;
- (id)init;

@end
