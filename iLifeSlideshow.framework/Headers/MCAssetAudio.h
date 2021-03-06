/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/MCAsset.h>

@class NSMutableSet;

@interface MCAssetAudio : MCAsset {
	NSMutableSet *mSongs;	// 24 = 0x18
}
- (id)init;	// 0x5af5
- (void)demolish;	// 0x5c01
- (BOOL)isInUse;	// 0x5ba1
- (void)learnSong:(id)song;	// 0x5b7d
- (void)forgetSong:(id)song;	// 0x5b59
@end
