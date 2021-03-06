//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

#import <EmailFoundation/EFPubliclyDescribable-Protocol.h>

@class NSString;

@interface NSError (EmailFoundationAdditions) <EFPubliclyDescribable>
+ (id)ef_temporarilyUnavailableError;
+ (id)ef_connectionInterruptedError;
+ (id)ef_notSupportedError;
+ (id)ef_timeoutError;
+ (id)ef_cancelledError;
+ (void)ef_setDecoder:(id /* CDUnknownBlockType */)arg1 forDomain:(id)arg2;
+ (id)ef_SQLiteErrorWithCode:(int)arg1;
- (id /* CDUnknownBlockType */)ef_match;
@property(readonly, nonatomic) BOOL ef_isTemporarilyUnavailableError;
@property(readonly, nonatomic) BOOL ef_isConnectionInterruptedError;
@property(readonly, nonatomic) BOOL ef_isNotSupportedError;
@property(readonly, nonatomic) BOOL ef_isTimeoutError;
@property(readonly, nonatomic) BOOL ef_isCancelledError;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@end

