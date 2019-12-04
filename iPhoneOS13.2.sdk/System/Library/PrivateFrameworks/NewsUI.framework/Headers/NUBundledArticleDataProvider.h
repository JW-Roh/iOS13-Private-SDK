//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleDataProvider-Protocol.h>
#import <NewsUI/NUFontRegistrator-Protocol.h>
#import <NewsUI/SXEmbedDataProvider-Protocol.h>
#import <NewsUI/SXResourceDataSource-Protocol.h>

@class FCArticle, NSString;

@interface NUBundledArticleDataProvider : NSObject <SXResourceDataSource, SXEmbedDataProvider, NUFontRegistrator, NUArticleDataProvider>
{
    FCArticle *_article;
}

@property(readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
- (id)fileURLForBundleURL:(id)arg1;
- (id)embedForType:(id)arg1;
- (id)translateURL:(id)arg1;
- (void)fileURLForURL:(id)arg1 onCompletion:(id /* block */)arg2 onError:(id /* block */)arg3;
- (id /* block */)loadImagesForImageRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)registerFontsWithCompletion:(id /* block */)arg1;
@property(readonly, copy, nonatomic) NSString *articleID;
- (void)cancelAssetPrefetch;
- (void)prefetchAssets;
- (void)loadContextWithCompletionBlock:(id /* block */)arg1;
- (void)performBlockForFontsInBundle:(id /* block */)arg1;
- (id)initWithArticle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
