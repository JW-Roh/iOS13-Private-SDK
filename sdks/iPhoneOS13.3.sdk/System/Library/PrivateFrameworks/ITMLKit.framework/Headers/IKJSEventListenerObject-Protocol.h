//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class JSValue, NSString;

@protocol IKJSEventListenerObject <JSExport>
- (void)removeEventListener:(NSString *)arg1:(JSValue *)arg2;
- (void)addEventListener:(NSString *)arg1:(JSValue *)arg2:(JSValue *)arg3;
@end
