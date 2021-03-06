//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CTCategories : NSObject
{
    NSString *_indexVersionId;
}

+ (id)systemBundleIdentifiers;
+ (id)systemHiddenBundleIdentifiers;
+ (id)systemUnblockableBundleIdentifiers;
+ (id)systemBlockableBundleIdentifiers;
+ (long long)currentIOSDevice;
+ (id)systemHiddenBundleIdentifiersForDeviceFamily:(long long)arg1;
+ (id)systemUnblockableBundleIdentifiersForDeviceFamily:(long long)arg1;
+ (id)systemBlockableBundleIdentifiersForDeviceFamily:(long long)arg1;
+ (id)sharedCategories;
+ (void)initialize;
// - (void).cxx_destruct;
- (void)categoriesForDomainURLs:(id)arg1 responseWithError:(id /* CDUnknownBlockType */)arg2;
- (void)categoriesForDomainURLs:(id)arg1 response:(id /* CDUnknownBlockType */)arg2;
- (void)categoriesForDomainNames:(id)arg1 responseWithError:(id /* CDUnknownBlockType */)arg2;
- (void)categoriesForDomainNames:(id)arg1 response:(id /* CDUnknownBlockType */)arg2;
- (void)categoriesForBundleIDs:(id)arg1 responseWithError:(id /* CDUnknownBlockType */)arg2;
- (void)categoriesForBundleIDs:(id)arg1 response:(id /* CDUnknownBlockType */)arg2;
- (void)categoryForDomainURL:(id)arg1 responseWithError:(id /* CDUnknownBlockType */)arg2;
- (void)categoryForDomainURL:(id)arg1 response:(id /* CDUnknownBlockType */)arg2;
- (void)categoryForDomainName:(id)arg1 responseWithError:(id /* CDUnknownBlockType */)arg2;
- (void)categoryForDomainName:(id)arg1 response:(id /* CDUnknownBlockType */)arg2;
- (void)categoryForBundleID:(id)arg1 response:(id /* CDUnknownBlockType */)arg2;
- (void)categoryForBundleID:(id)arg1 responseWithError:(id /* CDUnknownBlockType */)arg2;
- (void)unCategorizedDomainsFromDomains:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)categoriesForDomainURLs:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)categoriesForDomainNames:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)categoryForDomainURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)categoryForDomainName:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)categoriesForBundleIDs:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)categoriesForBundleIDs:(id)arg1 platform:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)categoryForBundleID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)categoryForBundleID:(id)arg1 platform:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
@property(readonly, copy) NSArray *availableCategoryIDs;
- (void)_emptySharedCache:(id)arg1;
- (void)dealloc;
- (id)init;

@end

