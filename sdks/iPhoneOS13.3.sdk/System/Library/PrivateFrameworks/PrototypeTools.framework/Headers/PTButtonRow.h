//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSRow.h>

@class NSString;

@interface PTButtonRow : PTSRow
{
    NSString *_outletKeyPath;
}

+ (id)rowWithTitle:(id)arg1 outletKeyPath:(id)arg2;
+ (id)rowWithTitle:(id)arg1 action:(id)arg2;
@property(copy, nonatomic) NSString *outletKeyPath; // @synthesize outletKeyPath=_outletKeyPath;
// - (void).cxx_destruct;
- (id)_defaultAction;
- (id)outletKeyPath:(id)arg1;

@end

