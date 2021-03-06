/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/MCObject.h>

@class MCAssetAudio, MCSlide, MCAudioPlaylist;

@interface MCSong : MCObject {
	MCAssetAudio *mAsset;	// 12 = 0xc
	float mVolume;	// 16 = 0x10
	double mFadeInDuration;	// 20 = 0x14
	double mFadeOutDuration;	// 28 = 0x1c
	unsigned mIndex;	// 36 = 0x24
	double mStartTime;	// 40 = 0x28
	double mDuration;	// 48 = 0x30
	BOOL mStartTimeIsDefined;	// 56 = 0x38
	BOOL mDurationIsDefined;	// 57 = 0x39
	MCAudioPlaylist *mAudioPlaylistIfAudioPlaylistSong;	// 60 = 0x3c
	MCSlide *mSlideIfSlideSong;	// 64 = 0x40
}
@property(assign) float volume;	// G=0x1a449; S=0x1a459; @synthesize=mVolume
@property(assign) double fadeInDuration;	// G=0x1a6d1; S=0x1a69d; @synthesize=mFadeInDuration
@property(assign) double fadeOutDuration;	// G=0x1a739; S=0x1a705; @synthesize=mFadeOutDuration
@property(assign) unsigned index;	// G=0x1a429; S=0x1a439; @synthesize=mIndex
@property(assign, nonatomic) double startTime;	// G=0x1a411; S=0x1a9bd; @synthesize=mStartTime
@property(readonly, assign) BOOL startTimeIsDefined;	// G=0x1a401; @synthesize=mStartTimeIsDefined
@property(assign, nonatomic) double duration;	// G=0x1a3e9; S=0x1a961; @synthesize=mDuration
@property(readonly, assign) BOOL durationIsDefined;	// G=0x1a3d9; @synthesize=mDurationIsDefined
@property(assign) MCAudioPlaylist *audioPlaylistIfAudioPlaylistSong;	// G=0x1a3b9; S=0x1a3c9; @synthesize=mAudioPlaylistIfAudioPlaylistSong
@property(assign) MCSlide *slideIfSlideSong;	// G=0x1a399; S=0x1a3a9; @synthesize=mSlideIfSlideSong
@property(retain) MCAssetAudio *asset;	// G=0x1abad; S=0x1aa19; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x1a551
- (id)init;	// 0x1a469
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x1afb9
- (void)demolish;	// 0x1af35
- (id)imprint;	// 0x1ac81
// declared property getter: - (id)asset;	// 0x1abad
// declared property setter: - (void)setAsset:(id)asset;	// 0x1aa19
- (void)undefineStartTime;	// 0x1a371
// declared property setter: - (void)setStartTime:(double)time;	// 0x1a9bd
- (void)undefineDuration;	// 0x1a385
// declared property setter: - (void)setDuration:(double)duration;	// 0x1a961
- (id)snapshot;	// 0x1a901
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x1a76d
// declared property getter: - (id)slideIfSlideSong;	// 0x1a399
// declared property setter: - (void)setSlideIfSlideSong:(id)song;	// 0x1a3a9
// declared property getter: - (id)audioPlaylistIfAudioPlaylistSong;	// 0x1a3b9
// declared property setter: - (void)setAudioPlaylistIfAudioPlaylistSong:(id)song;	// 0x1a3c9
// declared property getter: - (BOOL)durationIsDefined;	// 0x1a3d9
// declared property getter: - (double)duration;	// 0x1a3e9
// declared property getter: - (BOOL)startTimeIsDefined;	// 0x1a401
// declared property getter: - (double)startTime;	// 0x1a411
// declared property getter: - (unsigned)index;	// 0x1a429
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x1a439
// declared property getter: - (double)fadeOutDuration;	// 0x1a739
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x1a705
// declared property getter: - (double)fadeInDuration;	// 0x1a6d1
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x1a69d
// declared property getter: - (float)volume;	// 0x1a449
// declared property setter: - (void)setVolume:(float)volume;	// 0x1a459
@end
