//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAMediaConversionServiceImagingUtilities : NSObject
{
}

+ (BOOL)_generatePosterFrameExportForVideoURL:(id)arg1 imageDestinationToAddToAndFinalize:(CGImageDestination )arg2 maximumSize:(CGSize)arg3 error:(id )arg4;
+ (BOOL)generatePosterFrameExportForVideoURL:(id)arg1 outputData:(id )arg2 maximumSize:(CGSize)arg3 error:(id )arg4;
+ (BOOL)generatePosterFrameExportForVideoURL:(id)arg1 destinationURL:(id)arg2 maximumSize:(CGSize)arg3 error:(id )arg4;
+ (id)imagePropertiesForFileAtURL:(id)arg1;
+ (id)imageDataForPassthroughConversionForSourceURL:(id)arg1 metadataPolicy:(id)arg2 outResultImageSize:(CGSize )arg3;

@end

