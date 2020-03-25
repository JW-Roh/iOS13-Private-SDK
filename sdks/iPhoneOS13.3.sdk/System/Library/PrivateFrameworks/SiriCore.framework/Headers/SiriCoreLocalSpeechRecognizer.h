//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/AFSpeechServiceDelegate-Protocol.h>

@class NSData, NSError, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, SiriCoreLocalSpeechRecognizerDelegate;

@interface SiriCoreLocalSpeechRecognizer : NSObject <AFSpeechServiceDelegate>
{
    BOOL _recognitionActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_esConnection;
    BOOL _hasRecognizedAnything;
    unsigned char _instanceUUID[16];
    NSString *_currentLanguage;
    NSError *_recognitionError;
    NSString *_preheatedProfileAssetPath;
    NSData *_preheatedProfile;
    id <SiriCoreLocalSpeechRecognizerDelegate> _delegate;
}

+ (id)purgeInstalledAssetsWithError:(id )arg1;
+ (id)installedAssetSizeWithError:(id )arg1;
+ (id)dictionaryWithContentsProfilePathForLanguage:(id)arg1 errorOut:(id )arg2;
+ (id)profilePathForLanguage:(id)arg1 errorOut:(id )arg2;
+ (id)speechProfileDataLastModifiedDataForLanguage:(id)arg1;
@property(readonly, nonatomic) __weak id <SiriCoreLocalSpeechRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)fetchUserDataForLanguage:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)arg1 error:(id)arg2;
- (oneway void)speechServiceDidRecognizePackage:(id)arg1;
- (oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)arg1;
- (oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
- (oneway void)speechServiceDidRecognizeTokens:(id)arg1;
- (void)writeDESRecord;
- (void)invalidate;
- (void)finishAudio;
- (void)addAudioPacket:(id)arg1;
- (void)fetchAssetsForLanguage:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)resetDESWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)readProfileAndUserDataWithLanguage:(id)arg1 allowOverride:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)runAdaptationRecipeEvaluation:(id)arg1 recordData:(id)arg2 attachments:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)getOfflineDictationStatusWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getOfflineDictationStatusIgnoringCache:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)updateSpeechProfileWithLanguage:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)createSpeechProfileWithLanguage:(id)arg1 JSONData:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)startSpeechRecognitionWithLanguage:(id)arg1 task:(id)arg2 context:(id)arg3 narrowband:(BOOL)arg4 detectUtterances:(BOOL)arg5 maximumRecognitionDuration:(double)arg6 farField:(BOOL)arg7 secureOfflineOnly:(BOOL)arg8 censorSpeech:(BOOL)arg9 originalAudioFileURL:(id)arg10 overrides:(id)arg11 modelOverrideURL:(id)arg12 didStartHandler:(id /* CDUnknownBlockType */)arg13;
- (void)preheatSpeechRecognitionWithLanguage:(id)arg1;
- (id)_synchronousServiceWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_serviceWithFunctionName:(id)arg1 errorHandler:(id /* CDUnknownBlockType */)arg2;
- (id)_service;
- (id)_connection;
- (id)_newConnection;
- (id)init;
- (id)initWithDelegate:(id)arg1 instanceUUID:(unsigned char [16])arg2;

@end
