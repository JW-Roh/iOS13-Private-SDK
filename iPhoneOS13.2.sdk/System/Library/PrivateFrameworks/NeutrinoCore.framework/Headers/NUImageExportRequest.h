//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUExportRequest.h>

#import <NeutrinoCore/NUTimeBased-Protocol.h>

@class NSDictionary, NSString, NUColorSpace, NUImageExportFormat;

@interface NUImageExportRequest : NUExportRequest <NUTimeBased>
{
    _Bool _renderToData;
    NUColorSpace *_colorSpace;
    NUImageExportFormat *_format;
    NSDictionary *_imageProperties;
    NSDictionary *_coreGraphicsInfoDictionariesByAuxiliaryType;
}

@property(copy) NSDictionary *coreGraphicsInfoDictionariesByAuxiliaryType; // @synthesize coreGraphicsInfoDictionariesByAuxiliaryType=_coreGraphicsInfoDictionariesByAuxiliaryType;
@property(copy) NSDictionary *imageProperties; // @synthesize imageProperties=_imageProperties;
@property(nonatomic) _Bool renderToData; // @synthesize renderToData=_renderToData;
@property(copy, nonatomic) NUImageExportFormat *format; // @synthesize format=_format;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void)submit:(id /* block */)arg1;
- (long long)mediaComponentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newRenderJob;
- (id)initWithComposition:(id)arg1 exportFormat:(id)arg2;
- (id)initWithComposition:(id)arg1 destinationURL:(id)arg2;
- (id)initWithComposition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(nonatomic) CDStruct_1b6d18a9 time;

@end
