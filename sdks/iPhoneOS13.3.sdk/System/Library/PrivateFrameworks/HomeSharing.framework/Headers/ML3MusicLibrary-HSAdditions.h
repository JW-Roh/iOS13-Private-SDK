//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3MusicLibrary.h>

@interface ML3MusicLibrary (HSAdditions)
+ (void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3 progressHandler:(id /* CDUnknownBlockType */)arg4;
+ (void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)checkForChangesInHomeSharingLibrary:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)executeUpdateSQL:(id)arg1;
- (void)_performImport:(id)arg1 progressHandler:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fillContainerForHomeSharingLibrary:(id)arg1 containerID:(long long)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
@end

