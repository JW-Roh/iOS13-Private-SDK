//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface NUModel : NSObject
{
    NSDictionary *_attributes;
}

+ (id)deserializeAttribute:(id)arg1 value:(id)arg2 error:(out id )arg3;
+ (id)deserializeDictionaryFromDictionary:(id)arg1 key:(id)arg2 error:(out id )arg3;
+ (id)deserializeArrayFromDictionary:(id)arg1 key:(id)arg2 error:(out id )arg3;
+ (id)deserializeStringFromDictionary:(id)arg1 key:(id)arg2 error:(out id )arg3;
+ (id)_deserializeObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 key:(id)arg3 error:(out id )arg4;
+ (id)reservedPropertyNames;
+ (BOOL)validatePropertyName:(id)arg1 error:(out id )arg2;
+ (BOOL)validatePattern:(id)arg1 error:(out id )arg2;
+ (BOOL)validateIdentifier:(id)arg1 error:(out id )arg2;
+ (BOOL)validateName:(id)arg1 error:(out id )arg2;
+ (BOOL)validateStringArray:(id)arg1 error:(out id )arg2;
+ (BOOL)validateArray:(id)arg1 error:(out id )arg2;
+ (BOOL)validateString:(id)arg1 error:(out id )arg2;
+ (BOOL)validateNumber:(id)arg1 error:(out id )arg2;
+ (BOOL)validateBool:(id)arg1 error:(out id )arg2;
+ (id)requiredAttributes;
+ (id)supportedAttributes;
+ (id)deserializeFromDictionary:(id)arg1 error:(out id )arg2;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
// - (void).cxx_destruct;
- (BOOL)serializeAttribute:(id)arg1 value:(id)arg2 intoDictionary:(id)arg3 error:(out id )arg4;
- (BOOL)validateAttribute:(id)arg1 value:(id)arg2 error:(out id )arg3;
- (BOOL)validateAttributes:(out id )arg1;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id )arg3;
- (id)deserialize:(id)arg1 error:(out id )arg2;
- (id)serialize:(id)arg1 error:(out id )arg2;
- (BOOL)serializeIntoDictionary:(id)arg1 error:(out id )arg2;
- (id)serializeAsDictionary:(out id )arg1;
- (void)enumerateProperties:(id /* CDUnknownBlockType */)arg1;
- (id)modelForProperty:(id)arg1;
- (BOOL)validate:(id)arg1 error:(out id )arg2;
- (BOOL)isValid:(out id )arg1;
- (id)copy:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)init;

@end

