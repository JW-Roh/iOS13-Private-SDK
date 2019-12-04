//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UISEGestureFeature.h>

#import <UIKitCore/_UISETouchedEdgesProvider-Protocol.h>

@protocol _UISEGestureFeatureSettings, _UISETouchedEdgesProvider;

__attribute__((visibility("hidden")))
@interface _UISEVelocityDirectionEdgesGestureFeature : _UISEGestureFeature <_UISETouchedEdgesProvider>
{
    id <_UISEGestureFeatureSettings> _settings;
    id <_UISETouchedEdgesProvider> _provider;
    _Bool _exactMatchEdges;
    struct CGPoint _initialLocation;
    unsigned long long _touchedEdges;
}

@property(readonly, nonatomic) unsigned long long touchedEdges; // @synthesize touchedEdges=_touchedEdges;
- (id)debugDictionary;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;
- (id)initWithSettings:(id)arg1 touchedEdgesProvider:(id)arg2 exactMatchEdges:(_Bool)arg3;

@end
