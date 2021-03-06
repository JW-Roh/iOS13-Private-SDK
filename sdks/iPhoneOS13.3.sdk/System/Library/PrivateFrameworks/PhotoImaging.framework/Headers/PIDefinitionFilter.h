//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIDefinitionFilter : CIFilter
{
    CIImage *_inputImage;
    CIImage *_inputBlurImage;
    NSNumber *_inputIntensity;
}

+ (id)definitionKernel;
@property(retain) NSNumber *inputIntensity; // @synthesize inputIntensity=_inputIntensity;
@property(retain) CIImage *inputBlurImage; // @synthesize inputBlurImage=_inputBlurImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
// - (void).cxx_destruct;
- (id)outputImage;

@end

