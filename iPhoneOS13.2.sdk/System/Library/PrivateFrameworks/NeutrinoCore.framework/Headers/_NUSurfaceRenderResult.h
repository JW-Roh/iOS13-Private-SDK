//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/_NUImageRenderResult.h>

#import <NeutrinoCore/NUSurfaceRenderResult-Protocol.h>

@class NSString, NUImageGeometry, NURegion;
@protocol NURenderStatistics, NUSurfaceImage;

@interface _NUSurfaceRenderResult : _NUImageRenderResult <NUSurfaceRenderResult>
{
    id <NUSurfaceImage> _image;
}

@property(retain) id <NUSurfaceImage> image; // @synthesize image=_image;
@property(readonly, copy) NSString *debugDescription;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) NUImageGeometry *geometry;
@property(readonly) NSUInteger hash;
@property(readonly) NURegion *region;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end
