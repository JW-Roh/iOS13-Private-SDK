//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDictionary, NSError, NSString, NSURL, PocketAPI;

@protocol PocketAPIDelegate 

@optional
- (void)pocketAPI:(PocketAPI *)arg1 requestedOpenURL:(NSURL *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)pocketAPIDidFinishLogin:(PocketAPI *)arg1;
- (void)pocketAPIDidStartLogin:(PocketAPI *)arg1;
- (void)pocketAPI:(PocketAPI *)arg1 receivedResponse:(NSDictionary *)arg2 forAPIMethod:(NSString *)arg3 error:(NSError *)arg4;
- (void)pocketAPI:(PocketAPI *)arg1 failedToSaveURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)pocketAPI:(PocketAPI *)arg1 savedURL:(NSURL *)arg2;
- (void)pocketAPI:(PocketAPI *)arg1 hadLoginError:(NSError *)arg2;
- (void)pocketAPILoggedIn:(PocketAPI *)arg1;
- (void)pocketAPI:(PocketAPI *)arg1 receivedRequestToken:(NSString *)arg2;
@end
