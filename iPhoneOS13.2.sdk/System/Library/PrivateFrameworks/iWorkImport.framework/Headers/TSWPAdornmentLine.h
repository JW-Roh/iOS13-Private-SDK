//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@protocol TSKCGColorProvider;

__attribute__((visibility("hidden")))
@interface TSWPAdornmentLine : NSObject <NSCopying>
{
    _Bool _isWhitespace;
    _Bool _allowAntialiasing;
    int _underline;
    int _adornmentLocation;
    struct CGColor *_color;
    double _length;
    double _thickness;
    unsigned long long _lineCount;
    double _underlineAdjustment;
    id <TSKCGColorProvider> _colorProvider;
    struct CGPoint _start;
}

@property(readonly, nonatomic) id <TSKCGColorProvider> colorProvider; // @synthesize colorProvider=_colorProvider;
@property(readonly, nonatomic) _Bool allowAntialiasing; // @synthesize allowAntialiasing=_allowAntialiasing;
@property(readonly, nonatomic) _Bool isWhitespace; // @synthesize isWhitespace=_isWhitespace;
@property(readonly, nonatomic) double underlineAdjustment; // @synthesize underlineAdjustment=_underlineAdjustment;
@property(readonly, nonatomic) int adornmentLocation; // @synthesize adornmentLocation=_adornmentLocation;
@property(readonly, nonatomic) int underline; // @synthesize underline=_underline;
@property(readonly, nonatomic) unsigned long long lineCount; // @synthesize lineCount=_lineCount;
@property(readonly, nonatomic) double thickness; // @synthesize thickness=_thickness;
@property(readonly, nonatomic) double length; // @synthesize length=_length;
@property(readonly, nonatomic) struct CGPoint start; // @synthesize start=_start;
- (_Bool)merge:(id)arg1;
@property(readonly, nonatomic) struct CGColor *color; // @synthesize color=_color;
- (void)setStart:(struct CGPoint)arg1;
- (id)copyWithColor:(struct CGColor *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStart:(struct CGPoint)arg1 length:(double)arg2 color:(struct CGColor *)arg3 thickness:(double)arg4 lineCount:(unsigned long long)arg5 underline:(int)arg6 adornmentLocation:(int)arg7 underLineAdjustment:(double)arg8;
- (id)initWithStart:(struct CGPoint)arg1 length:(double)arg2 color:(struct CGColor *)arg3 thickness:(double)arg4 lineCount:(unsigned long long)arg5 underline:(int)arg6 adornmentLocation:(int)arg7 underLineAdjustment:(double)arg8 isWhitespace:(_Bool)arg9 colorProvider:(id)arg10 allowAntialiasing:(_Bool)arg11;

@end
