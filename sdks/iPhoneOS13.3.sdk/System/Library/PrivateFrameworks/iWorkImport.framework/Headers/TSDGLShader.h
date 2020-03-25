//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface TSDGLShader : NSObject
{
    NSMutableDictionary *_uniforms;
    NSMutableSet *_uniformsNeedingUpdate;
    NSMutableDictionary *_attributeLocations;
    BOOL _isActive;
    unsigned int _programObject;
    NSString *_name;
}

@property(readonly, nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) unsigned int programObject; // @synthesize programObject=_programObject;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)validateUniforms;
- (void)deactivate;
- (void)activate;
- (void)p_setQualifiersIfNecessary;
- (int)locationForAttribute:(id)arg1;
- (int)locationForUniform:(id)arg1;
- (void)setMat4WithTransform3D:(struct CATransform3D)arg1 forUniform:(id)arg2;
- (void)setMat4WithTransform3D:(struct CATransform3D)arg1 forShaderQualifier:(id)arg2;
- (void)setMat3WithAffineTransform:(CGAffineTransform)arg1 forUniform:(id)arg2;
- (void)setMat3WithAffineTransform:(CGAffineTransform)arg1 forShaderQualifier:(id)arg2;
- (void)setColor:(CDStruct_818bb265)arg1 forUniform:(id)arg2;
- (void)setPoint4D:(CDStruct_818bb265)arg1 forUniform:(id)arg2;
- (void)setPoint4D:(CDStruct_818bb265)arg1 forShaderQualifier:(id)arg2;
- (void)setPoint3D:(CDStruct_03942939)arg1 forUniform:(id)arg2;
- (void)setPoint3D:(CDStruct_03942939)arg1 forShaderQualifier:(id)arg2;
- (void)setLifeSpan:(CDStruct_6e3f967a)arg1 forUniform:(id)arg2;
- (void)setPoint2D:(CDStruct_6e3f967a)arg1 forUniform:(id)arg2;
- (void)setPoint2D:(CDStruct_6e3f967a)arg1 forShaderQualifier:(id)arg2;
- (void)setCGFloat:(double)arg1 forUniform:(id)arg2;
- (void)setGLFloat:(float)arg1 forUniform:(id)arg2;
- (void)setGLFloat:(float)arg1 forShaderQualifier:(id)arg2;
- (void)setInteger:(long long)arg1 forUniform:(id)arg2;
- (void)setGLint:(int)arg1 forUniform:(id)arg2;
- (void)setInteger:(long long)arg1 forShaderQualifier:(id)arg2;
- (void)setGLint:(int)arg1 forShaderQualifier:(id)arg2;
- (id)p_qualifierForUniform:(id)arg1 class:(Class)arg2;
- (id)shaderQualifierForUniform:(id)arg1 type:(long long)arg2;
- (void)p_updateUniformsAndAttributesFromShader;
- (BOOL)loadVertexShader:(id)arg1 fragmentShader:(id)arg2 defines:(id)arg3;
- (BOOL)p_compileShader:(unsigned int )arg1 withType:(unsigned int)arg2 shaderString:(id)arg3 defines:(id)arg4;
- (id)description;
- (void)dealloc;
- (void)teardown;
- (id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2 defines:(id)arg3;
- (id)initWithVertexShaderFileName:(id)arg1 fragmentShaderFileName:(id)arg2 bundle:(id)arg3 defines:(id)arg4;
- (id)p_contentsOfShader:(id)arg1 extension:(id)arg2 bundle:(id)arg3;
- (id)initWithDefaultUniformMotionBlurShader;
- (id)initWithDefaultHorizontalBlurShader;
- (id)initWithDefaultVerticalBlurShader;
- (id)initWithDefaultVelocityVisualizerShader;
- (id)initWithDefaultVelocityCollectionShaderWithSampleCount:(NSUInteger)arg1 isSingleObject:(BOOL)arg2;
- (id)initWithDefaultVelocityMeshShader;
- (id)initWithDefaultVelocityShader;
- (id)initWithDefaultRandomColorTextureShader;
- (id)initWithDefaultRandomColorShader;
- (id)initWithDefaultTextureAndOpacityShaderWithMotionBlur:(BOOL)arg1 ignoreTextureOpacity:(BOOL)arg2;
- (id)initWithDefaultTextureAndOpacityShader;
- (id)initWithDefaultTextureCoordinatesShader;
- (id)initWithDefaultTextureShaderWithMotionBlur:(BOOL)arg1 ignoreTextureOpacity:(BOOL)arg2;
- (id)initWithDefaultTextureShader;
- (id)init;

@end
