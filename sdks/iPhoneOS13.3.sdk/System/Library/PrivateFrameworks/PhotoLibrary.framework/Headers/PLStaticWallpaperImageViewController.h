//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibrary/PLWallpaperImageViewController.h>

@interface PLStaticWallpaperImageViewController : PLWallpaperImageViewController
{
    BOOL _moveAndScaleDisabled;
}

@property(nonatomic) BOOL moveAndScaleDisabled; // @synthesize moveAndScaleDisabled=_moveAndScaleDisabled;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
@property(nonatomic) BOOL colorSamplingEnabled;
- (void)setWallpaperForLocations:(long long)arg1;
- (id)wallpaperImage;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(id /* CDUnknownBlockType */)arg2;
- (id)_wallPaperPreviewControllerForAsset:(id)arg1;
- (id)_wallPaperPreviewControllerForPhotoIrisAsset:(id)arg1;
- (void)viewDidLoad;
- (id)_findSubviewOfView:(id)arg1 withClass:(Class)arg2;
- (id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4;
- (id)initWithPhoto:(id)arg1;
- (id)initWithUIImage:(id)arg1 name:(id)arg2;
- (id)initWithUIImage:(id)arg1;

@end

