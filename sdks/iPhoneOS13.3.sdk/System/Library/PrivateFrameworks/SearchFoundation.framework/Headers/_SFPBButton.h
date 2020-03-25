//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBButton-Protocol.h>

@class NSData, _SFPBImage;

@interface _SFPBButton : PBCodable <_SFPBButton, NSSecureCoding>
{
    BOOL _isSelected;
    _SFPBImage *_image;
    _SFPBImage *_selectedImage;
}

@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) _SFPBImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) _SFPBImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

@end
