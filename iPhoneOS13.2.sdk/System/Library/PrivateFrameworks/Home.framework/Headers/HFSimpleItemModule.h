//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemModule.h>

@class NSSet;

@interface HFSimpleItemModule : HFItemModule
{
    NSSet *_itemProviders;
    id /* block */ _sectionBuilder;
}

@property(copy, nonatomic) id /* block */ sectionBuilder; // @synthesize sectionBuilder=_sectionBuilder;
@property(retain, nonatomic) NSSet *itemProviders; // @synthesize itemProviders=_itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 itemProviders:(id)arg2 sectionBuilder:(id /* block */)arg3;

@end
