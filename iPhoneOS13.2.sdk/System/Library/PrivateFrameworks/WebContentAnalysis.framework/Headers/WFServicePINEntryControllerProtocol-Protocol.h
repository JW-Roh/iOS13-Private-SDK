//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSURL;

@protocol WFServicePINEntryControllerProtocol
- (void)permitURLWithCompletion:(void (^)(NSError *))arg1;
- (void)getIsPINPresentWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)cancel;
- (void)setPageTitle:(NSString *)arg1;
- (void)setURL:(NSURL *)arg1;
@end
