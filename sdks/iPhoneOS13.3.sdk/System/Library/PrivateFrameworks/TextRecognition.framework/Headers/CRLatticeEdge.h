//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRLatticeEdge : NSObject
{
    NSString *_symbol;
    NSUInteger _edgeIndex;
    double _score;
    NSUInteger _startNode;
    NSUInteger _endNode;
}

@property(readonly) NSUInteger endNode; // @synthesize endNode=_endNode;
@property(readonly) NSUInteger startNode; // @synthesize startNode=_startNode;
@property(readonly) double score; // @synthesize score=_score;
@property(readonly) NSUInteger edgeIndex; // @synthesize edgeIndex=_edgeIndex;
@property(readonly, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
// - (void).cxx_destruct;
- (id)initWithSymbol:(id)arg1 index:(NSUInteger)arg2 score:(double)arg3 startNode:(NSUInteger)arg4 endNode:(NSUInteger)arg5;

@end
