//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class C2Session, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol C2SessionDelegate 
- (void)C2Session:(C2Session *)arg1 originalHost:(NSString *)arg2 updatedRoute:(NSString *)arg3;
- (void)C2Session:(C2Session *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
- (NSObject<OS_dispatch_queue> *)underlyingDelegateQueue;
@end
