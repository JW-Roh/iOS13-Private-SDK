//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FMFUI/FMFMapOptionsViewControllerDelegate-Protocol.h>
#import <FMFUI/FMFMapViewDelegateInternalDelegate-Protocol.h>
#import <FMFUI/FMFNoLocationViewDelegate-Protocol.h>
#import <FMFUI/FMFSessionDelegateInternal-Protocol.h>
#import <FMFUI/MKUserTrackingView-Protocol.h>

@class FMFMapOptionsViewController, FMFMapViewDelegateInternal, FMFNoLocationView, FMFRefreshBarButtonItem, FMFSession, FMFTitleView, MKMapView, NSSet, NSString, UIBarButtonItem, UIColor, UIImageView, _MKUserTrackingButton;
@protocol FMFMapViewControllerDelegate;

@interface FMFMapViewController : UIViewController <FMFSessionDelegateInternal, FMFMapViewDelegateInternalDelegate, MKUserTrackingView, FMFNoLocationViewDelegate, FMFMapOptionsViewControllerDelegate>
{
    _Bool _shouldZoomToFitNewLocations;
    _Bool _shouldZoomToFitMeAndLocations;
    _Bool _showFloatingMapLocationButton;
    _Bool _isMapCenteringDisabled;
    _Bool _isSimpleMap;
    _Bool __refreshingIsPaused;
    _Bool __blockDidReceiveAnimation;
    _Bool __isRenderingInitialMap;
    _Bool _viewWillAppearCalled;
    _Bool _alwaysShowAccuracy;
    _Bool _wasToolbarPreviouslyHidden;
    _Bool _mapTypeLoaded;
    id <FMFMapViewControllerDelegate> _delegate;
    MKMapView *_mapView;
    UIColor *_annotationTintColor;
    FMFSession *_fmfSession;
    FMFMapViewDelegateInternal *_mapViewDelegate;
    NSSet *__preloadedHandles;
    FMFNoLocationView *_noLocationView;
    NSSet *__internalHandlesShowingLocations;
    FMFMapOptionsViewController *_mapOptionsVC;
    FMFTitleView *_titleView;
    UIBarButtonItem *_userTrackingButtonItem;
    UIBarButtonItem *_directionsBarButtonItem;
    UIBarButtonItem *_infoBarButtonItem;
    FMFRefreshBarButtonItem *_refreshButton;
    UIImageView *_cachedMapView;
    unsigned long long _defaultMapType;
    _MKUserTrackingButton *_userTrackingButton;
    long long _currentTrackingMode;
    struct UIEdgeInsets _edgeInsets;
}

+ (_Bool)hasUserLocation;
+ (struct CGSize)annotationImageSize;
@property(nonatomic) long long currentTrackingMode; // @synthesize currentTrackingMode=_currentTrackingMode;
@property(retain, nonatomic) _MKUserTrackingButton *userTrackingButton; // @synthesize userTrackingButton=_userTrackingButton;
@property(nonatomic) _Bool mapTypeLoaded; // @synthesize mapTypeLoaded=_mapTypeLoaded;
@property(nonatomic) unsigned long long defaultMapType; // @synthesize defaultMapType=_defaultMapType;
@property(retain, nonatomic) UIImageView *cachedMapView; // @synthesize cachedMapView=_cachedMapView;
@property(retain, nonatomic) FMFRefreshBarButtonItem *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UIBarButtonItem *infoBarButtonItem; // @synthesize infoBarButtonItem=_infoBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *directionsBarButtonItem; // @synthesize directionsBarButtonItem=_directionsBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *userTrackingButtonItem; // @synthesize userTrackingButtonItem=_userTrackingButtonItem;
@property(retain, nonatomic) FMFTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) FMFMapOptionsViewController *mapOptionsVC; // @synthesize mapOptionsVC=_mapOptionsVC;
@property(nonatomic) _Bool wasToolbarPreviouslyHidden; // @synthesize wasToolbarPreviouslyHidden=_wasToolbarPreviouslyHidden;
@property(nonatomic) _Bool alwaysShowAccuracy; // @synthesize alwaysShowAccuracy=_alwaysShowAccuracy;
@property(nonatomic) _Bool viewWillAppearCalled; // @synthesize viewWillAppearCalled=_viewWillAppearCalled;
@property(nonatomic) _Bool _isRenderingInitialMap; // @synthesize _isRenderingInitialMap=__isRenderingInitialMap;
@property(nonatomic) _Bool _blockDidReceiveAnimation; // @synthesize _blockDidReceiveAnimation=__blockDidReceiveAnimation;
@property(nonatomic) _Bool _refreshingIsPaused; // @synthesize _refreshingIsPaused=__refreshingIsPaused;
@property(retain, nonatomic) NSSet *_internalHandlesShowingLocations; // @synthesize _internalHandlesShowingLocations=__internalHandlesShowingLocations;
@property(retain, nonatomic) FMFNoLocationView *noLocationView; // @synthesize noLocationView=_noLocationView;
@property(nonatomic) _Bool isSimpleMap; // @synthesize isSimpleMap=_isSimpleMap;
@property(retain, nonatomic) NSSet *_preloadedHandles; // @synthesize _preloadedHandles=__preloadedHandles;
@property(retain, nonatomic) FMFMapViewDelegateInternal *mapViewDelegate; // @synthesize mapViewDelegate=_mapViewDelegate;
@property(retain, nonatomic) FMFSession *fmfSession; // @synthesize fmfSession=_fmfSession;
@property(copy, nonatomic) UIColor *annotationTintColor; // @synthesize annotationTintColor=_annotationTintColor;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) _Bool isMapCenteringDisabled; // @synthesize isMapCenteringDisabled=_isMapCenteringDisabled;
@property(nonatomic) _Bool showFloatingMapLocationButton; // @synthesize showFloatingMapLocationButton=_showFloatingMapLocationButton;
@property(nonatomic) _Bool shouldZoomToFitMeAndLocations; // @synthesize shouldZoomToFitMeAndLocations=_shouldZoomToFitMeAndLocations;
@property(nonatomic) _Bool shouldZoomToFitNewLocations; // @synthesize shouldZoomToFitNewLocations=_shouldZoomToFitNewLocations;
@property(nonatomic) __weak id <FMFMapViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateAllAnnotationsDueToAddressBookUpdate;
- (id)_internalAnnotationTintColor;
- (id)_selectedHandleAnnotation;
- (void)_updateTitleViewLocation:(id)arg1;
- (id)titleViewForSelectedHandle;
- (id)annotationImageForAnnotation:(id)arg1 andHandle:(id)arg2;
- (void)hideCachedMap;
- (void)mapViewDidFinishRenderingMap;
- (void)didReceiveLocationForDelegateCallback:(id)arg1;
- (void)didUpdateUserLocation:(id)arg1;
- (void)reZoomToFit;
- (void)regionDidChangeAnimated:(_Bool)arg1;
- (void)regionWillChangeAnimated:(_Bool)arg1;
- (void)didDeselectLocation:(id)arg1;
- (void)didSelectLocation:(id)arg1;
- (_Bool)hasUserLocation;
- (void)updateUserTrackingButtonState;
- (_Bool)isCurrentlyRotated;
- (_Bool)canRotateForHeading;
- (long long)userTrackingMode;
- (void)_setUserTrackingMode:(long long)arg1 animated:(_Bool)arg2 fromTrackingButton:(_Bool)arg3;
- (void)removeAllFriendLocationsFromMap;
- (void)didStopAbilityToGetLocationForHandle:(id)arg1;
- (void)updateRefreshForLocation:(id)arg1;
- (void)didReceiveLocation:(id)arg1;
- (void)zoomAndSelectHandle:(id)arg1;
- (void)zoomToFit:(_Bool)arg1;
- (void)zoomToFit;
- (void)stopShowingLocationsForHandles:(id)arg1;
- (void)startShowingLocationsForHandles:(id)arg1;
@property(copy, nonatomic) NSSet *handlesShowingLocations;
- (void)resumeRefreshingLocations;
- (void)stopRefreshingLocations;
- (void)mapTypeChanged:(unsigned long long)arg1;
- (void)mapTypeChangedNotification:(id)arg1;
- (void)_dismiss:(id)arg1;
- (void)presentMapOptionsModal:(id)arg1;
- (_Bool)isCompact;
- (void)infoButtonTapped:(id)arg1;
- (void)getDirections;
- (void)_updateDirectionsButtonEnabled;
- (void)openInMapsButtonTapped:(id)arg1;
- (void)refreshButtonTapped:(id)arg1;
- (_Bool)sessionContainsHandle:(id)arg1;
- (void)removeAnnotationsFromMapForHandle:(id)arg1;
- (id)locationOnMapForHandle:(id)arg1 enforceServerId:(_Bool)arg2;
- (_Bool)singleAnnotationOnMap;
- (void)selectAnnotationIfSingleFriend:(id)arg1;
- (void)deselectAllAnnotations;
- (void)selectAnnotationIfSingleForMac;
- (_Bool)canSelectAnnotation:(id)arg1;
- (_Bool)isLocationAlreadyOnMap:(id)arg1;
- (void)updateMapWithNewLocation:(id)arg1 animated:(_Bool)arg2;
- (_Bool)mapHasUserLocations;
- (void)updateNoLocationView:(_Bool)arg1;
- (_Bool)canShowNoLocation;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)loadCachedLocationsForHandles;
- (void)_enablePreloadedHandles:(id)arg1;
- (void)enablePreloadedHandles;
- (void)loadDelegate;
- (void)destroySession;
- (void)removeHandlesFromSession;
- (void)addHandlesToSession;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)viewWillAppearWillMoveToWindowSetup;
- (void)viewWillAppear:(_Bool)arg1;
- (id)openInAppURL;
- (void)_updateLocationButtonEnabled;
- (void)setupToolbarItems;
- (void)viewDidLoad;
- (void)loadView;
- (void)_authorizeMonitoringLocation;
- (void)initializeDefaults;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 handles:(id)arg2;
- (id)initSimpleMapWithDelegate:(id)arg1 handles:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
