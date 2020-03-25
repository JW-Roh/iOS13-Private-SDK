//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFiTunesCollectionObject.h>

#import <WorkflowKit/MTLJSONSerializing-Protocol.h>

@class NSString, NSURL;

@interface WFiTunesPodcastObject : WFiTunesCollectionObject <MTLJSONSerializing>
{
    NSString *_podcastUUID;
    NSURL *_feedURL;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSURL *feedURL; // @synthesize feedURL=_feedURL;
@property(copy, nonatomic) NSString *podcastUUID; // @synthesize podcastUUID=_podcastUUID;
// - (void).cxx_destruct;
- (id)initWithName:(id)arg1 identifier:(id)arg2 podcastUUID:(id)arg3 feedURL:(id)arg4 kind:(id)arg5;

@end
