//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXTranscriptBubbleViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUICore/PXTouchingUIGestureRecognizerDelegate-Protocol.h>

@class NSError, NSString, NSURL, PHFetchResult, PHMomentShare, PHPhotoLibrary, PXCMMPreviewAsset, PXCMMPreviewUIImageProvider, PXCMMSpecManager, PXCMMTranscriptBubbleStatusView, PXCMMTranscriptBubbleView, PXMomentShareStatusPresentation;
@protocol PXCMMTranscriptBubbleTouchDelegate, PXUIImageProvider;

@interface PXCMMTranscriptBubbleViewController : PXTranscriptBubbleViewController <PXPhotoLibraryUIChangeObserver, PXChangeObserver, PXTouchingUIGestureRecognizerDelegate>
{
    PHPhotoLibrary *_photoLibrary;
    PHFetchResult *_backingFetchResult;
    PHFetchResult *_keyAssetFetch;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    long long _saveInProgressTotal;
    PXCMMTranscriptBubbleView *_bubbleView;
    PXCMMTranscriptBubbleStatusView *_errorStatusView;
    PXCMMTranscriptBubbleStatusView *_loadingStatusView;
    id <PXUIImageProvider> _mediaProvider;
    PXCMMSpecManager *_specManager;
    PXCMMPreviewAsset *_previewAsset;
    PXCMMPreviewUIImageProvider *_previewImageProvider;
    BOOL _readyForBubbleStateTransitions;
    BOOL _isSender;
    BOOL _isPending;
    BOOL _highlighted;
    NSURL *_url;
    id <PXCMMTranscriptBubbleTouchDelegate> _touchDelegate;
    long long _bubbleState;
    long long _targetState;
    NSError *_error;
}

+ (BOOL)_isPermanentFailureURL:(id)arg1;
+ (void)_registerPermanentFailureURL:(id)arg1;
@property(retain, nonatomic) PXMomentShareStatusPresentation *momentShareStatusPresentation; // @synthesize momentShareStatusPresentation=_momentShareStatusPresentation;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long targetState; // @synthesize targetState=_targetState;
@property(nonatomic) long long bubbleState; // @synthesize bubbleState=_bubbleState;
@property(nonatomic) __weak id <PXCMMTranscriptBubbleTouchDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
@property(readonly, nonatomic) BOOL isPending; // @synthesize isPending=_isPending;
@property(readonly, nonatomic) BOOL isSender; // @synthesize isSender=_isSender;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)touchingUIGestureRecognizerWillEndTouching:(id)arg1;
- (void)touchingUIGestureRecognizerWillBeginTouching:(id)arg1;
- (void)_readyForStateTransition;
- (void)_ensureBubbleStateTransition;
- (void)_updateBubbleState;
- (void)_updateMomentShareStatusPresentation;
- (void)_updateContent;
- (void)_updateBubbleView;
- (BOOL)_shouldShowContent;
- (void)viewDidLoad;
- (void)_longPressGesture:(id)arg1;
- (void)_doubleTapGesture:(id)arg1;
- (void)_panGesture:(id)arg1;
- (void)_tapGesture:(id)arg1;
- (BOOL)_shouldOpenInSafari;
- (BOOL)_shouldRetryOnTap;
- (BOOL)_shouldNavigateToContent;
- (void)_retryMomentShareFetch;
- (void)_acceptMomentShareIfNeeded:(id)arg1;
- (void)_autoAcceptMomentShareIfNeeded:(id)arg1;
- (void)_momentShareURL:(id)arg1 fetchDidFailWithError:(id)arg2;
- (void)_fetchMomentShareFromNetworkURL:(id)arg1;
- (id)_fetchKeyAssetsFromBackingCollection;
- (BOOL)_canFetchAssetsFromMomentShare:(id)arg1;
- (id)_debugStatusDescription;
- (id)_secondaryDescription;
- (id)_primaryDescription;
@property(readonly, nonatomic) PHMomentShare *momentShare;
- (CGSize)workaroundSizeForSize:(CGSize)arg1;
- (CGSize)contentSizeThatFits:(CGSize)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithURL:(id)arg1 isSender:(BOOL)arg2 isPending:(BOOL)arg3;

@end

