/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PLImageView.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>

@class UILabel, UIImage, UIView;

@interface PLPolaroidImageView : PLImageView {
	UIView *_posterView;	// 100 = 0x64
	UILabel *_nameLabel;	// 104 = 0x68
	float _thinBorderWidth;	// 108 = 0x6c
	BOOL _polaroidBorderVisible;	// 112 = 0x70
	CGRect _roi;	// 116 = 0x74
}
@property(retain, nonatomic) UIImage *posterImage;	// G=0xa0da9; S=0xa0e05; 
+ (Class)layerClass;	// 0xa0849
- (void)_updatePolaroidFramePath:(BOOL)path;	// 0xa15a5
- (void)_adjustLabel;	// 0xa137d
- (CGSize)sizeThatFits:(CGSize)fits allowRounding:(BOOL)rounding;	// 0xa11b9
- (void)renderSnapshotInContext:(CGContextRef)context;	// 0xa1105
- (void)layoutSubviews;	// 0xa0f45
- (void)setName:(id)name;	// 0xa0ee1
- (void)setPosterImage:(id)image regionOfInterest:(CGRect)interest;	// 0xa0e8d
// declared property setter: - (void)setPosterImage:(id)image;	// 0xa0e05
// declared property getter: - (id)posterImage;	// 0xa0da9
- (void)setTransitionProgress:(float)progress;	// 0xa0c11
- (void)setBorderVisible:(BOOL)visible;	// 0xa0bb9
- (float)_tunedProgress;	// 0xa0b7d
- (void)dealloc;	// 0xa0b1d
- (id)initWithFrame:(CGRect)frame;	// 0xa0865
@end
