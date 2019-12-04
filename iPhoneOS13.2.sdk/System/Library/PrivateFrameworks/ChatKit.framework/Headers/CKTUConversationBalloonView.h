//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKColoredBalloonView.h>

@class NSString, NSUUID, UIButton, UIImageView, UILabel;

@interface CKTUConversationBalloonView : CKColoredBalloonView
{
    _Bool _animating;
    NSUUID *_tuConversationUUID;
    unsigned long long _state;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_statusLabel;
    UILabel *_durationLabel;
    UIButton *_joinButton;
    NSString *_joinButtonText_TestingOverride;
}

+ (id)facetimeImageForSize:(struct CGSize)arg1;
+ (struct CGSize)facetimeIconSize;
@property(copy, nonatomic) NSString *joinButtonText_TestingOverride; // @synthesize joinButtonText_TestingOverride=_joinButtonText_TestingOverride;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIButton *joinButton; // @synthesize joinButton=_joinButton;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSUUID *tuConversationUUID; // @synthesize tuConversationUUID=_tuConversationUUID;
- (_Bool)joinButtonIsShowingTextContent;
- (_Bool)joinButtonIsShowingImageContent;
- (id)_joinButtonText;
- (void)_joinButtonTapped:(id)arg1;
- (id)_currentCall;
- (void)_updateStatusLabelForDuration;
- (id)_joinStateStatusString;
@property(readonly, nonatomic) _Bool shouldRenderJoinButtonAsIcon;
- (void)configureForCurrentState;
- (id)tuConversation;
- (_Bool)wantsGradient;
- (BOOL)color;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForTUConversationChatItem:(id)arg1;

@end
