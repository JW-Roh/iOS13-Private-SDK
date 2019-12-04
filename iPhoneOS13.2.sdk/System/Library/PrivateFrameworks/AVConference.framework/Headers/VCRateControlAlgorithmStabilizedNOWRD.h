//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCRateControlAlgorithm-Protocol.h>

@class NSString, VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmStabilizedNOWRD : NSObject <VCRateControlAlgorithm>
{
    struct VCRateControlAlgorithmConfig _config;
    VCRateControlMediaController *_mediaController;
    int _state;
    int _rampUpStatus;
    int _rampDownStatus;
    _Bool _paused;
    unsigned short _echoedTimestamp;
    unsigned short _previousTimestamp;
    unsigned short _queuingDelayTimestamp;
    unsigned int _receiveTimestamp;
    unsigned int _timestampWrapAroundCounter;
    double _rateControlTime;
    unsigned int _rateControlCounter;
    unsigned int _rateChangeCounter;
    unsigned int _lastRateChangeCounter;
    unsigned int _newOWRDSampleCollected;
    unsigned int _remoteBandwidthEstimation;
    unsigned int _localBandwidthEstimation;
    double _owrd;
    CDStruct_55dce769 _owrdList;
    _Bool _isOWRDListReady;
    _Bool _isOWRDConstant;
    double _nowrd;
    double _nowrdShort;
    double _nowrdAcc;
    double _previousNOWRD;
    double _lastOWRDChangeTime;
    double _lastNoOvershootBWEstimationTime;
    double _firstBelowNoRampUpBandwidthTime;
    double _sendBitrateLimitedStartTime;
    double _rampUpFrozenTime;
    double _stabilizationTime;
    double _rateChangeSystemTime;
    double _lastRampDownTime;
    double _lastPositiveOWRDTime;
    _Bool _isCongested;
    _Bool _isRampUpSettling;
    _Bool _isStable;
    _Bool _isSendBitrateLimited;
    _Bool _isOvershoot;
    _Bool _belowNoRampUpBandwidth;
    _Bool _isFirstTimestampArrived;
    _Bool _isNewRateSentOut;
    double _inVideoBitrate;
    double _outVideoBitrate;
    double _inAudioBitrate;
    double _outAudioBitrate;
    unsigned int _actualVideoBitrateFromAFRC;
    unsigned int _fastRampDownBitrateRange;
    unsigned int _consecutiveRampDown;
    double _lastTimeStartRampingDown;
    double _basebandNotificationArrivalTime;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandTotalQueueDepth;
    double _basebandExpectedQueuingDelay;
    double _basebandNormalizedBDCD;
    double _basebandNormalizedQueuingDelay;
    _Bool _isWaitingForBasebandRampDown;
    double _lastBasebandRampDownTime;
    double _lastHighNBDCDTime;
    int _basebandAdditionalTiersForRampUp;
    unsigned int _totalPacketReceived;
    unsigned int _packetReceivedVideo;
    unsigned int _mostBurstLoss;
    unsigned int _packetBurstLoss;
    unsigned int _roundTripTimeTick;
    double _roundTripTime;
    double _packetLossRate;
    double _packetLossRateVideo;
    int _currentTierIndex;
    int _previousTierIndex;
    unsigned int _targetBitrate;
    unsigned int _actualBitrate;
    void *_logDump;
    void *_logBasebandDump;
    _Bool _isPeriodicLoggingEnabled;
    _Bool _didMBLRampDown;
}

@property(nonatomic) _Bool didMBLRampDown; // @synthesize didMBLRampDown=_didMBLRampDown;
@property(readonly, nonatomic) unsigned int actualBitrate; // @synthesize actualBitrate=_actualBitrate;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) double owrd; // @synthesize owrd=_owrd;
@property(nonatomic) unsigned int localBandwidthEstimation; // @synthesize localBandwidthEstimation=_localBandwidthEstimation;
@property(readonly, nonatomic) _Bool isNewRateSentOut; // @synthesize isNewRateSentOut=_isNewRateSentOut;
@property(readonly, nonatomic) double roundTripTime; // @synthesize roundTripTime=_roundTripTime;
@property(readonly, nonatomic) unsigned int totalPacketReceived; // @synthesize totalPacketReceived=_totalPacketReceived;
@property(readonly, nonatomic) double packetLossRateVideo; // @synthesize packetLossRateVideo=_packetLossRateVideo;
@property(readonly, nonatomic) double packetLossRate; // @synthesize packetLossRate=_packetLossRate;
@property(readonly, nonatomic) unsigned int mostBurstLoss; // @synthesize mostBurstLoss=_mostBurstLoss;
@property(retain, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property(readonly, nonatomic) unsigned int rateChangeCounter; // @synthesize rateChangeCounter=_rateChangeCounter;
@property(readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(readonly, nonatomic) _Bool isCongested; // @synthesize isCongested=_isCongested;
- (id)className;
- (void)printRateControlInfoToLogDump;
- (void)logToDumpFilesWithString:(id)arg1;
- (void)checkStabilizationWithEchoedTimestamp:(unsigned short)arg1 queuingDelay:(unsigned short)arg2;
- (void)checkMediaQueueBitrates;
- (_Bool)recentlyGoAboveRampUpBandwidth;
- (_Bool)keepOvershootingRampDownBandwidth;
- (void)checkBandwidthOvershoot;
- (void)checkCongestionStatus;
- (void)updateCongestionStatusWhenRampDown:(double)arg1;
- (void)updateCongestionStatusWhenRampUp;
- (void)calculatePacketLossWithReceivedPacketCount:(unsigned int)arg1 receivedPacketCountVideo:(unsigned int)arg2 packetBurstLoss:(unsigned short)arg3;
- (void)calculateRoundTripTime;
- (void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2;
- (unsigned short)getTimestampFromMicroTime:(double)arg1;
- (double)getDoubleTimeFromTimestamp:(unsigned int)arg1 timestampTick:(unsigned int)arg2 wrapAroundCounter:(unsigned int)arg3;
- (int)basebandAdditionalTiersForRampUp;
- (_Bool)shouldRampUpDueToBaseband;
- (_Bool)shouldRampDownDueToBaseband;
- (_Bool)shouldRampDownDueToNOWRDAcc;
- (_Bool)shouldRampDownDueToNOWRD;
- (_Bool)shouldRampDown;
- (_Bool)shouldRampUp;
- (void)setBitrateUnstable;
- (int)rampDownTierDueToBaseband;
- (int)rampDownTier;
- (int)rampUpTier;
- (void)stateEnter;
- (void)stateExit;
- (void)stateChangeTo:(int)arg1;
- (void)resetRampingStatus;
- (void)updateInternalStatus;
- (_Bool)doRateControlWithBasebandStatistics:(CDStruct_b21f1e06)arg1;
- (_Bool)doRateControlWithVCRCStatistics:(CDStruct_b21f1e06)arg1;
- (_Bool)doRateControlWithStatistics:(CDStruct_b21f1e06)arg1;
- (void)enableBasebandDump:(void *)arg1;
- (void)enableLogDump:(void *)arg1 enablePeriodicLogging:(_Bool)arg2;
- (void)configure:(struct VCRateControlAlgorithmConfig)arg1 restartRequired:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
