//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIDynamicColor.h>

@class NSString, UIColor, _UIAssetManager;

__attribute__((visibility("hidden")))
@interface UIDynamicCatalogColor : UIDynamicColor
{
    NSString *_name;
    _UIAssetManager *_assetManager;
    UIColor *_genericColor;
}

+ (_Bool)supportsSecureCoding;
- (void)_setDebugCatalogBundleIdentifier:(id)arg1;
- (id)_debugCatalogBundleIdentifier;
- (void)_setDebugName:(id)arg1;
- (id)_debugName;
- (id)description;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initForNibEncodingWithName:(id)arg1 genericColor:(id)arg2;
- (id)initWithName:(id)arg1 assetManager:(id)arg2 genericColor:(id)arg3;

@end
