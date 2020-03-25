//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CUIThemeSchemaLayer : NSObject
{
    NSArray *_renditions;
    NSString *_name;
    NSUInteger _index;
}

+ (id)layerWithRenditions:(id)arg1 name:(id)arg2 index:(NSUInteger)arg3;
@property(nonatomic) NSUInteger index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *renditions; // @synthesize renditions=_renditions;
- (void)calculateColumLefts:(id )arg1 rowTops:(id )arg2 totalSize:(CGSize )arg3 forPartFeatures:(NSUInteger)arg4;
- (double)translateFromWidthsOrHeightsToLeftsOrTops:(id)arg1 leftsOrTops:(id )arg2;
- (void)dealloc;
- (id)initWithRenditions:(id)arg1 name:(id)arg2 index:(NSUInteger)arg3;

@end
