//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/_MTLIndirectArgumentBufferLayout.h>

@class MTLSimDevice;

__attribute__((visibility("hidden")))
@interface MTLSimIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout
{
    unsigned int _reference;
    MTLSimDevice *_device;
    _Bool _bufferLayoutMatchesFrontEndLayout;
    unsigned long long _encodedLength;
    unsigned long long _alignment;
}

@property(readonly) unsigned int argumentBufferLayoutRef; // @dynamic argumentBufferLayoutRef;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1;
- (unsigned long long)alignment;
- (unsigned long long)encodedLength;
- (_Bool)bufferLayoutMatchesFrontEndLayout;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 reference:(unsigned int)arg2 data:(CDStruct_146dae35 *)arg3;

@end
