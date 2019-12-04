//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGadgetDataSourceManager.h>

#import <PhotosUICore/PXCMMCloudGadgetViewControllerDelegate-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSArray, NSString, PXCMMInvitationsHorizontalGadgetProvider, PXCMMSuggestionsHorizontalGadgetProvider, PXCloudWelcomeGadgetProvider, PXForYouEditSuggestionsGadgetProvider, PXForYouFooterGadgetProvider, PXForYouGadgetPriorityManager, PXForYouMemoryGadgetProvider, PXForYouRecentInterestSuggestionsGadgetProvider, PXGadgetNavigationHelper, PXHorizontalCollectionGadgetProvider, PXPeopleQuestionsGadgetProvider, PXSampleGadgetProvider, PXSampleSuggestionProvider, PXSharedAlbumActivityHorizontalGadgetProvider, PXTapToRadarGadgetProvider;
@protocol PXGadgetDelegate, PXGadgetTransition;

@interface PXForYouGadgetDataSourceManager : PXGadgetDataSourceManager <PXCMMCloudGadgetViewControllerDelegate, PXSettingsKeyObserver>
{
    NSArray *_gadgetProviders;
    _Bool _isLaunchedToTest;
    PXForYouGadgetPriorityManager *_priorityManager;
    PXCMMInvitationsHorizontalGadgetProvider *_CMMInvitationsHorizontalGadgetProvider;
    PXCMMSuggestionsHorizontalGadgetProvider *_CMMSuggestionsHorizontalGadgetProvider;
    PXCloudWelcomeGadgetProvider *_CMMCloudWelcomeGadgetProvider;
    PXSharedAlbumActivityHorizontalGadgetProvider *_icpsActivityHorizontalGadgetProvider;
    PXHorizontalCollectionGadgetProvider *_editSuggestionsHorizontalGadgetProvider;
    PXForYouEditSuggestionsGadgetProvider *_editSuggestionsGadgetProvider;
    PXHorizontalCollectionGadgetProvider *_recentInterestSuggestionsHorizontalGadgetProvider;
    PXForYouRecentInterestSuggestionsGadgetProvider *_recentInterestsSuggestionsGadgetProvider;
    PXForYouMemoryGadgetProvider *_memoryGadgetProvider;
    PXPeopleQuestionsGadgetProvider *_questionsGadgetProvider;
    PXHorizontalCollectionGadgetProvider *_questionsHorizontalGadgetProvider;
    PXForYouFooterGadgetProvider *_footerGadgetProvider;
    PXSampleSuggestionProvider *_sampleSuggestionGadgetsProvider;
    PXSampleGadgetProvider *_sampleGadgetsProvider;
    PXTapToRadarGadgetProvider *_tapToRadarProvider;
}

@property(retain, nonatomic) PXTapToRadarGadgetProvider *tapToRadarProvider; // @synthesize tapToRadarProvider=_tapToRadarProvider;
@property(retain, nonatomic) PXSampleGadgetProvider *sampleGadgetsProvider; // @synthesize sampleGadgetsProvider=_sampleGadgetsProvider;
@property(retain, nonatomic) PXSampleSuggestionProvider *sampleSuggestionGadgetsProvider; // @synthesize sampleSuggestionGadgetsProvider=_sampleSuggestionGadgetsProvider;
@property(retain, nonatomic) PXForYouFooterGadgetProvider *footerGadgetProvider; // @synthesize footerGadgetProvider=_footerGadgetProvider;
@property(retain, nonatomic) PXHorizontalCollectionGadgetProvider *questionsHorizontalGadgetProvider; // @synthesize questionsHorizontalGadgetProvider=_questionsHorizontalGadgetProvider;
@property(retain, nonatomic) PXPeopleQuestionsGadgetProvider *questionsGadgetProvider; // @synthesize questionsGadgetProvider=_questionsGadgetProvider;
@property(retain, nonatomic) PXForYouMemoryGadgetProvider *memoryGadgetProvider; // @synthesize memoryGadgetProvider=_memoryGadgetProvider;
@property(retain, nonatomic) PXForYouRecentInterestSuggestionsGadgetProvider *recentInterestsSuggestionsGadgetProvider; // @synthesize recentInterestsSuggestionsGadgetProvider=_recentInterestsSuggestionsGadgetProvider;
@property(retain, nonatomic) PXHorizontalCollectionGadgetProvider *recentInterestSuggestionsHorizontalGadgetProvider; // @synthesize recentInterestSuggestionsHorizontalGadgetProvider=_recentInterestSuggestionsHorizontalGadgetProvider;
@property(retain, nonatomic) PXForYouEditSuggestionsGadgetProvider *editSuggestionsGadgetProvider; // @synthesize editSuggestionsGadgetProvider=_editSuggestionsGadgetProvider;
@property(retain, nonatomic) PXHorizontalCollectionGadgetProvider *editSuggestionsHorizontalGadgetProvider; // @synthesize editSuggestionsHorizontalGadgetProvider=_editSuggestionsHorizontalGadgetProvider;
@property(retain, nonatomic) PXSharedAlbumActivityHorizontalGadgetProvider *icpsActivityHorizontalGadgetProvider; // @synthesize icpsActivityHorizontalGadgetProvider=_icpsActivityHorizontalGadgetProvider;
@property(retain, nonatomic) PXCloudWelcomeGadgetProvider *CMMCloudWelcomeGadgetProvider; // @synthesize CMMCloudWelcomeGadgetProvider=_CMMCloudWelcomeGadgetProvider;
@property(retain, nonatomic) PXCMMSuggestionsHorizontalGadgetProvider *CMMSuggestionsHorizontalGadgetProvider; // @synthesize CMMSuggestionsHorizontalGadgetProvider=_CMMSuggestionsHorizontalGadgetProvider;
@property(retain, nonatomic) PXCMMInvitationsHorizontalGadgetProvider *CMMInvitationsHorizontalGadgetProvider; // @synthesize CMMInvitationsHorizontalGadgetProvider=_CMMInvitationsHorizontalGadgetProvider;
@property(readonly, nonatomic) _Bool isLaunchedToTest; // @synthesize isLaunchedToTest=_isLaunchedToTest;
@property(readonly, nonatomic) PXForYouGadgetPriorityManager *priorityManager; // @synthesize priorityManager=_priorityManager;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)arg1;
- (void)presentationRequestForWelcomeCloudViewController:(id)arg1;
- (_Bool)_resetSortingRanksIfNecessary;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_calendarDayChanged;
- (id)filteredUndisplayedGadgets:(id)arg1;
- (long long)_compareRank1:(long long)arg1 rank2:(long long)arg2;
- (long long)_adjustComparasionForInbox:(long long)arg1 gadgetType1:(unsigned long long)arg2 gadgeType2:(unsigned long long)arg3;
- (unsigned long long)_adjustGadgetTypeForRanking:(unsigned long long)arg1;
- (id /* block */)gadgetProviderSortComparator;
- (id /* block */)gadgetSortComparator;
- (void)didLoadDataForPriorities;
- (id)gadgetProviders;
- (void)removeCachedProviders;
- (id)initWithPriorityManager:(id)arg1 isLaunchedToTest:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <PXGadgetTransition> gadgetTransition;
@property(readonly) NSUInteger hash;
@property(nonatomic) __weak id <PXGadgetDelegate> nextGadgetResponder;
@property(readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property(readonly) Class superclass;

@end
