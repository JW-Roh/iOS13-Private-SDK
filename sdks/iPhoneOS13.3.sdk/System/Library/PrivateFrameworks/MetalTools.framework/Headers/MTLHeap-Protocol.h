//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MTLTextureDescriptor, NSString;
@protocol MTLBuffer, MTLDevice, MTLTexture;

@protocol MTLHeap <NSObject>
@property(readonly) long long type;
@property(readonly) NSUInteger currentAllocatedSize;
@property(readonly) NSUInteger usedSize;
@property(readonly) NSUInteger size;
@property(readonly) NSUInteger resourceOptions;
@property(readonly) NSUInteger hazardTrackingMode;
@property(readonly) NSUInteger cpuCacheMode;
@property(readonly) NSUInteger storageMode;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(NSUInteger)arg2;
- (id <MTLBuffer>)newBufferWithLength:(NSUInteger)arg1 options:(NSUInteger)arg2 offset:(NSUInteger)arg3;
- (NSUInteger)setPurgeableState:(NSUInteger)arg1;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLBuffer>)newBufferWithLength:(NSUInteger)arg1 options:(NSUInteger)arg2;
- (NSUInteger)maxAvailableSizeWithAlignment:(NSUInteger)arg1;
@end
