//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIMetricsViewController-Protocol.h>
#import <StoreKitUI/SKUIProductPageChildViewController-Protocol.h>
#import <StoreKitUI/SKUISwooshViewControllerDelegate-Protocol.h>
#import <StoreKitUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSString, SKUIClientContext, SKUIColorScheme, SKUIMetricsController, SKUIProductPageHeaderViewController, SKUIResourceLoader, SSVPlatformRequestOperation, UIScrollView;
@protocol SKUIProductPageChildViewControllerDelegate;

@interface SKUISwooshArrayViewController : UIViewController <SKUIMetricsViewController, SKUISwooshViewControllerDelegate, UIScrollViewDelegate, SKUIProductPageChildViewController>
{
    _Bool _askPermission;
    SKUIResourceLoader *_artworkLoader;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    id <SKUIProductPageChildViewControllerDelegate> _delegate;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIMetricsController *_metricsController;
    NSOperationQueue *_operationQueue;
    SSVPlatformRequestOperation *_platformOperation;
    UIScrollView *_scrollView;
    NSMutableArray *_swooshArtworkLoaders;
    NSArray *_swooshComponents;
    NSMutableArray *_viewControllers;
}

@property(copy, nonatomic) NSArray *swooshComponents; // @synthesize swooshComponents=_swooshComponents;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) SKUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) __weak id <SKUIProductPageChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) _Bool askPermission; // @synthesize askPermission=_askPermission;
- (id)_scrollView;
- (void)_reloadChildViewControllers;
- (void)_loadMissingItemsIfNecessary;
- (void)_layoutSwooshViews;
- (id)_clickEventWithItem:(id)arg1;
- (id)_clickEventForSeeAllForViewController:(id)arg1;
- (id)_artworkLoader;
- (void)_addMissingItemsWithResponse:(id)arg1 error:(id)arg2;
- (void)_addHeaderView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)swooshDidSelectSeeAll:(id)arg1;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)activeMetricsController;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (_Bool)isSkLoaded;
- (void)loadMissingItemData;
- (void)dealloc;
- (id)initWithSwooshComponents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
