//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFPlayMusicAction : WFAction
{
}

- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(_Bool)arg2;
- (id)localizedKeyParameterDisplayName;
- (void)finishRunningWithError:(id)arg1;
- (long long)repeatMode;
- (long long)shuffleMode;
- (void)playContent:(id)arg1 withMusicPlayer:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)playContentViaMusicPlayer:(id)arg1;
- (void)sendPlaybackArchive:(id)arg1 orPlaybackQueue:(id)arg2 toDestination:(id)arg3 completion:(id /* block */)arg4;
- (void)playContentViaMPCAssistant:(id)arg1 routeDescriptor:(id)arg2;
- (void)getContentFromInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end
