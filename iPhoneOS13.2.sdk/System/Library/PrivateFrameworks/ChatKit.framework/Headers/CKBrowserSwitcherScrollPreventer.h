//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>
#import <ChatKit/UIScrollViewDelegate-Protocol.h>

@class NSString, UILongPressGestureRecognizer, UIScrollView;
@protocol CKBrowserSwitcherScrollPreventerDelegate;

@interface CKBrowserSwitcherScrollPreventer : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    UILongPressGestureRecognizer *_touchTracker;
    _Bool _engaged;
    _Bool _switching;
    _Bool _scrollEnabled;
    id <CKBrowserSwitcherScrollPreventerDelegate> _delegate;
    UIScrollView *_horizontalScrollView;
    UIView *_horizontalScrollPreventerView;
}

@property(retain, nonatomic) UIView *horizontalScrollPreventerView; // @synthesize horizontalScrollPreventerView=_horizontalScrollPreventerView;
@property(retain, nonatomic) UIScrollView *horizontalScrollView; // @synthesize horizontalScrollView=_horizontalScrollView;
@property(nonatomic) __weak id <CKBrowserSwitcherScrollPreventerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic, getter=isSwitching) _Bool switching; // @synthesize switching=_switching;
@property(nonatomic, getter=isEngaged) _Bool engaged; // @synthesize engaged=_engaged;
@property(nonatomic) struct CGSize contentSize;
@property(nonatomic) struct CGPoint contentOffset;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)layoutSubviews;
- (void)touchTrackerRecognized:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
