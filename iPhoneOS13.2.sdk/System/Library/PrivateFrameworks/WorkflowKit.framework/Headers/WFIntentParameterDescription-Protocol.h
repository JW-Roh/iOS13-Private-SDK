//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDictionary, NSMutableDictionary, NSString, WFContentItem, WFParameter;
@protocol WFParameterState;

@protocol WFIntentParameterDescription 
@property(readonly, nonatomic) Class wf_parameterClass;
@property(readonly, nonatomic) _Bool wf_multipleValues;
@property(readonly, nonatomic) NSString *wf_outputDisplayName;
@property(readonly, nonatomic) Class wf_contentItemClass;
@property(readonly, nonatomic) Class wf_facadeClass;
@property(readonly, nonatomic) Class wf_objectClass;
@property(readonly, nonatomic) NSString *wf_slotName;
- (id)wf_processedParameterValueForValue:(id)arg1;
- (WFContentItem *)wf_contentItemForValue:(id)arg1;
- (id <WFParameterState>)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(NSDictionary *)arg2;
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(WFParameter *)arg2 completionHandler:(void (^)(id, NSError *))arg3;
- (void)wf_updateParameterDictionary:(NSMutableDictionary *)arg1 parameterClass:(Class)arg2;
@end
