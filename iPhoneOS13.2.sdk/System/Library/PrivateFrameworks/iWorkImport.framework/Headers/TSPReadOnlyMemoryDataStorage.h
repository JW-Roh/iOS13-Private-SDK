//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPStreamDataStorage.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface TSPReadOnlyMemoryDataStorage : TSPStreamDataStorage
{
    NSData *_NSData;
}

- (_Bool)readOnly;
- (unsigned long long)encodedLength;
- (_Bool)isReadable;
-     // Error parsing type: @56@0:8@16@24^{DataInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{DataAttributes}^{EncryptionInfo}QBi}32@40^@48, name: writeData:toPackageWriter:infoMessage:preferredFilename:error:
-     // Error parsing type: B40@0:8^{DataInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{DataAttributes}^{EncryptionInfo}QBi}16@24@32, name: archiveInfoMessage:archiver:packageWriter:
- (id)NSDataWithOptions:(unsigned long long)arg1;
- (void)performIOChannelReadWithAccessor:(id /* block */)arg1;
- (id)initWithNSData:(id)arg1;

@end
