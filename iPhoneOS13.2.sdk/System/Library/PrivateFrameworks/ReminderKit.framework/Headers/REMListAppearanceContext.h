//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, REMList;

@interface REMListAppearanceContext : NSObject
{
    REMList *_list;
}

@property(retain, nonatomic) REMList *list; // @synthesize list=_list;
- (_Bool)showingLargeAttachments;
@property(readonly, nonatomic) NSString *badgeEmblem;
- (id)initWithList:(id)arg1;

@end
