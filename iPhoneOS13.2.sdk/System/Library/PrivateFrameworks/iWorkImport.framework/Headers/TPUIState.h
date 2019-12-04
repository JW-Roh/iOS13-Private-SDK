//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDictionary, NSString, TSDFreehandDrawingToolkitUIState, TSKAnnotationAuthor, TSKSelectionPath;

__attribute__((visibility("hidden")))
@interface TPUIState : NSObject <NSCopying>
{
    _Bool _masterDrawablesSelectable;
    _Bool _rulersVisible;
    _Bool _layoutBordersVisible;
    _Bool _wordCountHUDVisible;
    _Bool _showsComments;
    _Bool _hasShowsCTMarkup;
    _Bool _showsCTMarkup;
    _Bool _hasShowsCTDeletions;
    _Bool _showsCTDeletions;
    _Bool _changeTrackingPaused;
    _Bool _showsPageNavigator;
    _Bool _showsTOCNavigator;
    _Bool _pencilAnnotationsHidden;
    _Bool _shouldShowCommentSidebar;
    _Bool _inspectorHidden;
    _Bool _showUserDefinedGuides;
    _Bool _showUserDefinedMasterGuides;
    int _wordCountHUDType;
    TSKSelectionPath *_selectionPath;
    NSDictionary *_chartUIState;
    long long _viewScaleMode;
    long long _pageViewState;
    double _viewScale;
    NSString *_selectedInspectorSwitchSegmentIdentifier;
    NSString *_authorForFilteringName;
    TSKAnnotationAuthor *_authorForFiltering;
    TSDFreehandDrawingToolkitUIState *_freehandDrawingToolkitUIState;
    long long _viewScaleModeiOS;
    double _presentationAutoScrollSpeed;
    struct CGPoint _wordCountHUDPosition;
    struct CGRect _visibleRect;
    struct CGRect _windowFrame;
}

@property(nonatomic) _Bool showUserDefinedMasterGuides; // @synthesize showUserDefinedMasterGuides=_showUserDefinedMasterGuides;
@property(nonatomic) double presentationAutoScrollSpeed; // @synthesize presentationAutoScrollSpeed=_presentationAutoScrollSpeed;
@property(nonatomic) long long viewScaleModeiOS; // @synthesize viewScaleModeiOS=_viewScaleModeiOS;
@property(retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState; // @synthesize freehandDrawingToolkitUIState=_freehandDrawingToolkitUIState;
@property(retain, nonatomic) TSKAnnotationAuthor *authorForFiltering; // @synthesize authorForFiltering=_authorForFiltering;
@property(copy, nonatomic) NSString *authorForFilteringName; // @synthesize authorForFilteringName=_authorForFilteringName;
@property(nonatomic) _Bool showUserDefinedGuides; // @synthesize showUserDefinedGuides=_showUserDefinedGuides;
@property(nonatomic) _Bool inspectorHidden; // @synthesize inspectorHidden=_inspectorHidden;
@property(copy, nonatomic) NSString *selectedInspectorSwitchSegmentIdentifier; // @synthesize selectedInspectorSwitchSegmentIdentifier=_selectedInspectorSwitchSegmentIdentifier;
@property(nonatomic) struct CGRect windowFrame; // @synthesize windowFrame=_windowFrame;
@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(nonatomic) long long pageViewState; // @synthesize pageViewState=_pageViewState;
@property(nonatomic) long long viewScaleMode; // @synthesize viewScaleMode=_viewScaleMode;
@property(nonatomic) _Bool shouldShowCommentSidebar; // @synthesize shouldShowCommentSidebar=_shouldShowCommentSidebar;
@property(nonatomic) _Bool pencilAnnotationsHidden; // @synthesize pencilAnnotationsHidden=_pencilAnnotationsHidden;
@property(nonatomic) _Bool showsTOCNavigator; // @synthesize showsTOCNavigator=_showsTOCNavigator;
@property(nonatomic) _Bool showsPageNavigator; // @synthesize showsPageNavigator=_showsPageNavigator;
@property(nonatomic) _Bool changeTrackingPaused; // @synthesize changeTrackingPaused=_changeTrackingPaused;
@property(nonatomic) _Bool showsCTDeletions; // @synthesize showsCTDeletions=_showsCTDeletions;
@property(readonly, nonatomic) _Bool hasShowsCTDeletions; // @synthesize hasShowsCTDeletions=_hasShowsCTDeletions;
@property(nonatomic) _Bool showsCTMarkup; // @synthesize showsCTMarkup=_showsCTMarkup;
@property(readonly, nonatomic) _Bool hasShowsCTMarkup; // @synthesize hasShowsCTMarkup=_hasShowsCTMarkup;
@property(nonatomic) _Bool showsComments; // @synthesize showsComments=_showsComments;
@property(nonatomic) struct CGPoint wordCountHUDPosition; // @synthesize wordCountHUDPosition=_wordCountHUDPosition;
@property(nonatomic) int wordCountHUDType; // @synthesize wordCountHUDType=_wordCountHUDType;
@property(nonatomic) _Bool wordCountHUDVisible; // @synthesize wordCountHUDVisible=_wordCountHUDVisible;
@property(nonatomic) _Bool layoutBordersVisible; // @synthesize layoutBordersVisible=_layoutBordersVisible;
@property(nonatomic) _Bool rulersVisible; // @synthesize rulersVisible=_rulersVisible;
@property(copy, nonatomic) NSDictionary *chartUIState; // @synthesize chartUIState=_chartUIState;
@property(nonatomic) _Bool masterDrawablesSelectable; // @synthesize masterDrawablesSelectable=_masterDrawablesSelectable;
@property(copy, nonatomic) TSKSelectionPath *selectionPath; // @synthesize selectionPath=_selectionPath;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
-     // Error parsing type: v40@0:8^{UIStateArchive=^^?{InternalMetadataWithArena=^v}{HasBits<2>=[2I]}{RepeatedPtrField<TSCH::ChartUIState>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Point}^{Reference}^{Reference}^{Size}^{Point}^{Size}^{SelectionPathArchive}^{SelectionPathArchive}^{Reference}^{Reference}^{Reference}fBBBBiIfBBBBfifBBfBBBBiBB{CachedSize={atomic<int>=Ai}}}16@24@32, name: saveToArchive:archiver:context:
-     // Error parsing type: @32@0:8r^{UIStateArchive=^^?{InternalMetadataWithArena=^v}{HasBits<2>=[2I]}{RepeatedPtrField<TSCH::ChartUIState>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Point}^{Reference}^{Reference}^{Size}^{Point}^{Size}^{SelectionPathArchive}^{SelectionPathArchive}^{Reference}^{Reference}^{Reference}fBBBBiIfBBBBfifBBfBBBBiBB{CachedSize={atomic<int>=Ai}}}16@24, name: initWithArchive:unarchiver:
- (id)archivedUIStateInContext:(id)arg1;
- (_Bool)isEqualToUIState:(id)arg1;
- (id)init;

@end
