//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKVersionedDocument.h>

@class PKDrawing;

@interface PKDrawingVersionedDocument : PKVersionedDocument
{
    BOOL _loadNonInkingStrokes;
    PKDrawing *_drawing;
}

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
@property(nonatomic) BOOL loadNonInkingStrokes; // @synthesize loadNonInkingStrokes=_loadNonInkingStrokes;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
// - (void).cxx_destruct;
- (id)serializeCurrentVersion:(unsigned int )arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (NSUInteger)mergeWithDrawingVersionedDocument:(id)arg1;
- (id)initWithDrawing:(id)arg1;
- (BOOL)loadUnzippedData:(id)arg1;

@end

