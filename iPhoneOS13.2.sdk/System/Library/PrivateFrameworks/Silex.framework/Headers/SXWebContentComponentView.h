//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentView.h>

#import <Silex/SXReachabilityObserver-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NFPendingPromise, NFStateMachine, NSString, SXComponentExposureMonitor, SXWebContentComponentExposureEvent, SXWebContentComponentInteractionManager, SXWebContentContainerViewController, UIActivityIndicatorView, UILabel, UITapGestureRecognizer;
@protocol SXAnalyticsReporting, SXLayoutInvalidator, SXReachabilityProvider, SXResourceDataSource, SXWebContentConfigurationProvider, SXWebContentDataSourceProviding, SXWebContentLoadingPolicyProvider, SXWebContentNavigationManager;

@interface SXWebContentComponentView : SXComponentView <SXViewportChangeListener, SXReachabilityObserver>
{
    id <SXAnalyticsReporting> _analyticsReporting;
    SXWebContentContainerViewController *_containerViewController;
    id <SXWebContentConfigurationProvider> _configurationProvider;
    id <SXWebContentNavigationManager> _navigationManager;
    SXWebContentComponentInteractionManager *_interactionManager;
    id <SXReachabilityProvider> _reachabilityProvider;
    id <SXResourceDataSource> _resourceDataSource;
    id <SXWebContentLoadingPolicyProvider> _loadingPolicyProvider;
    id <SXLayoutInvalidator> _layoutInvalidator;
    NFStateMachine *_stateMachine;
    UIActivityIndicatorView *_loadingIndicator;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILabel *_errorLabel;
    NFPendingPromise *_invalidationPromise;
    SXComponentExposureMonitor *_componentExposureMonitor;
    SXWebContentComponentExposureEvent *_componentExposureEvent;
    id <SXWebContentDataSourceProviding> _dataSourceProvider;
}

@property(readonly, nonatomic) id <SXWebContentDataSourceProviding> dataSourceProvider; // @synthesize dataSourceProvider=_dataSourceProvider;
@property(retain, nonatomic) SXWebContentComponentExposureEvent *componentExposureEvent; // @synthesize componentExposureEvent=_componentExposureEvent;
@property(readonly, nonatomic) SXComponentExposureMonitor *componentExposureMonitor; // @synthesize componentExposureMonitor=_componentExposureMonitor;
@property(retain, nonatomic) NFPendingPromise *invalidationPromise; // @synthesize invalidationPromise=_invalidationPromise;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) id <SXLayoutInvalidator> layoutInvalidator; // @synthesize layoutInvalidator=_layoutInvalidator;
@property(readonly, nonatomic) id <SXWebContentLoadingPolicyProvider> loadingPolicyProvider; // @synthesize loadingPolicyProvider=_loadingPolicyProvider;
@property(readonly, nonatomic) id <SXResourceDataSource> resourceDataSource; // @synthesize resourceDataSource=_resourceDataSource;
@property(readonly, nonatomic) id <SXReachabilityProvider> reachabilityProvider; // @synthesize reachabilityProvider=_reachabilityProvider;
@property(readonly, nonatomic) SXWebContentComponentInteractionManager *interactionManager; // @synthesize interactionManager=_interactionManager;
@property(readonly, nonatomic) id <SXWebContentNavigationManager> navigationManager; // @synthesize navigationManager=_navigationManager;
@property(readonly, nonatomic) id <SXWebContentConfigurationProvider> configurationProvider; // @synthesize configurationProvider=_configurationProvider;
@property(readonly, nonatomic) SXWebContentContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(readonly, nonatomic) id <SXAnalyticsReporting> analyticsReporting; // @synthesize analyticsReporting=_analyticsReporting;
- (_Bool)useLightForegroundColor;
- (void)reachabilityChanged:(_Bool)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)layoutErrorView;
- (void)layoutWebView;
- (void)layoutLoadingIndicator;
- (void)layout;
- (id)createDisabledState;
- (id)createErrorState;
- (id)createPresentationState;
- (id)createLoadingState;
- (id)createStateMachine;
- (void)reloadWebContent;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)configureConfigurationProvider;
- (void)configureErrorProvider;
- (void)configurePresentationManager;
- (void)configureViewController;
- (void)loadWebContent;
- (void)configureComponentExposureMonitor;
- (void)loadComponent:(id)arg1;
- (void)configure;
- (void)handleTap:(id)arg1;
- (void)layoutSubviews;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 containerViewController:(id)arg5 configurationProvider:(id)arg6 navigationManager:(id)arg7 analyticsReporting:(id)arg8 componentExposureMonitor:(id)arg9 interactionManagerFactory:(id)arg10 reachabilityProvider:(id)arg11 resourceDataSource:(id)arg12 loadingPolicyProvider:(id)arg13 dataSourceProvider:(id)arg14 layoutInvalidator:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
