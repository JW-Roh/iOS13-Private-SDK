//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMeasurementFormatter.h>

#import <HomeUI/HFTemperatureFormatter-Protocol.h>
#import <HomeUI/HFTemperatureUnitObserver-Protocol.h>

@class NSNumber, NSString;

@interface HUTemperatureFormatter : NSMeasurementFormatter <HFTemperatureUnitObserver, HFTemperatureFormatter>
{
    BOOL _inputIsCelsius;
    BOOL _outputIsCelsius;
    NSString *_fallbackTemperatureString;
    NSNumber *_stepValue;
}

@property(retain, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(nonatomic) BOOL outputIsCelsius; // @synthesize outputIsCelsius=_outputIsCelsius;
@property(nonatomic) BOOL inputIsCelsius; // @synthesize inputIsCelsius=_inputIsCelsius;
@property(copy, nonatomic) NSString *fallbackTemperatureString; // @synthesize fallbackTemperatureString=_fallbackTemperatureString;
// - (void).cxx_destruct;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnit:(BOOL)arg2;
- (id)stringForObjectValue:(id)arg1;
@property(nonatomic) NSUInteger minimumFractionDigits;
@property(nonatomic) NSUInteger maximumFractionDigits;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

