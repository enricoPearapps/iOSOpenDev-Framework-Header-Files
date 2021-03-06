/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/NSCoding.h>
#import <iLifeSlideshow/NSCopying.h>
#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MPAudioSupport.h>
#import <iLifeSlideshow/MPFilterSupport.h>
#import <iLifeSlideshow/MPAnimationSupport.h>
#import <iLifeSlideshow/XXUnknownSuperclass.h>
#import <iLifeSlideshow/MPLayer.h>

@class NSMutableDictionary, MPDocument, MPAudioPlaylist, MCMontage, MCPlugParallel, NSMutableArray, MPLayerInternal;

@interface MPLayer : XXUnknownSuperclass <NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport> {
@private
	MCPlugParallel *_layerPlug;	// 4 = 0x4
	NSMutableDictionary *_attributes;	// 8 = 0x8
	NSMutableArray *_effectContainers;	// 12 = 0xc
	NSMutableArray *_filters;	// 16 = 0x10
	NSMutableDictionary *_animationPaths;	// 20 = 0x14
	MPAudioPlaylist *_audioPlaylist;	// 24 = 0x18
	MCMontage *_montage;	// 28 = 0x1c
	MPDocument *_parentDocument;	// 32 = 0x20
	MPLayerInternal *_internal;	// 36 = 0x24
	BOOL _skipTimeCalculations;	// 40 = 0x28
}
@property(retain) id title;	// G=0x5b165; S=0x5b0d9; converted property
@property(assign) float opacity;	// G=0x5a815; S=0x5a749; converted property
@property(assign) CGPoint position;	// G=0x5a721; S=0x5a6d1; converted property
@property(assign) float zPosition;	// G=0x5a6b1; S=0x5a5e5; converted property
@property(assign) float rotationAngle;	// G=0x5a5c5; S=0x5a4f9; converted property
@property(assign) CGSize size;	// G=0x5a4d1; S=0x5a481; converted property
@property(assign) float xRotationAngle;	// G=0x5a461; S=0x5a395; converted property
@property(assign) float yRotationAngle;	// G=0x5a375; S=0x5a2a9; converted property
@property(assign) double timeIn;	// G=0x5a24d; S=0x5a171; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x59cd1; S=0x59ce1; converted property
@property(assign) int audioPriority;	// G=0x5a131; S=0x5a065; converted property
@property(assign) double numberOfLoops;	// G=0x5a035; S=0x59edd; converted property
@property(assign) BOOL isAudioLayer;	// G=0x59eb9; S=0x59dfd; converted property
@property(readonly, retain) NSMutableArray *effectContainers;	// G=0x59c85; converted property
@property(readonly, retain) NSMutableArray *filters;	// G=0x59ca1; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x59cb1; converted property
@property(readonly, retain) MPDocument *parentDocument;	// G=0x59cc1; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x59dcd
+ (id)layer;	// 0x59d89
+ (id)sequentialLayer;	// 0x59d45
- (id)init;	// 0x5c08d
- (id)description;	// 0x5bf5d
- (void)encodeWithCoder:(id)coder;	// 0x5b9d1
- (id)initWithCoder:(id)coder;	// 0x5b33d
- (id)copyWithZone:(NSZone *)zone;	// 0x5b25d
- (void)finalize;	// 0x59d19
- (void)dealloc;	// 0x5b185
// converted property getter: - (id)title;	// 0x5b165
// converted property setter: - (void)setTitle:(id)title;	// 0x5b0d9
// converted property getter: - (id)effectContainers;	// 0x59c85
- (void)addEffectContainer:(id)container;	// 0x5b079
- (void)addEffectContainers:(id)containers;	// 0x5b035
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x59c95
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x59c99
- (void)removeAllEffectContainers;	// 0x5afc5
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x59c9d
// converted property getter: - (id)filters;	// 0x59ca1
- (void)addFilter:(id)filter;	// 0x5af65
- (void)addFilters:(id)filters;	// 0x5af21
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x5aca9
- (void)removeFiltersAtIndices:(id)indices;	// 0x5ab65
- (void)removeAllFilters;	// 0x5aaf5
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x5aa25
// converted property getter: - (id)animationPaths;	// 0x59cb1
- (id)animationPathForKey:(id)key;	// 0x5aa01
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x5a8c1
- (void)removeAnimationPathForKey:(id)key;	// 0x5a835
// converted property getter: - (float)opacity;	// 0x5a815
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x5a749
// converted property getter: - (CGPoint)position;	// 0x5a721
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x5a6d1
// converted property getter: - (float)zPosition;	// 0x5a6b1
// converted property setter: - (void)setZPosition:(float)position;	// 0x5a5e5
// converted property getter: - (float)rotationAngle;	// 0x5a5c5
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x5a4f9
// converted property getter: - (CGSize)size;	// 0x5a4d1
// converted property setter: - (void)setSize:(CGSize)size;	// 0x5a481
// converted property getter: - (float)xRotationAngle;	// 0x5a461
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x5a395
// converted property getter: - (float)yRotationAngle;	// 0x5a375
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x5a2a9
- (int)zIndex;	// 0x5a26d
// converted property getter: - (id)parentDocument;	// 0x59cc1
// converted property getter: - (double)timeIn;	// 0x5a24d
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x5a171
- (double)duration;	// 0x5a151
// converted property getter: - (id)audioPlaylist;	// 0x59cd1
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x59ce1
// converted property getter: - (int)audioPriority;	// 0x5a131
// converted property setter: - (void)setAudioPriority:(int)priority;	// 0x5a065
// converted property getter: - (double)numberOfLoops;	// 0x5a035
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x59edd
// converted property getter: - (BOOL)isAudioLayer;	// 0x59eb9
// converted property setter: - (void)setIsAudioLayer:(BOOL)layer;	// 0x59dfd
@end

@interface MPLayer (AppleScript)
@property(assign) float xPosition;	// G=0x5ccad; S=0x5c959; converted property
@property(assign) float yPosition;	// G=0x5cccd; S=0x5c98d; converted property
@property(assign) float height;	// G=0x5cced; S=0x5c9c1; converted property
@property(assign) float width;	// G=0x5cd0d; S=0x5c9f5; converted property
@property(retain) id scriptingAnimations;	// G=0x5da91; S=0x5de3d; converted property
- (int)countOfEffectContainers;	// 0x5c6d1
- (id)objectInEffectContainersAtIndex:(int)index;	// 0x5c6f1
- (void)insertObject:(id)object inEffectContainersAtIndex:(int)index;	// 0x5c715
- (void)removeObjectFromEffectContainersAtIndex:(int)index;	// 0x5c755
- (void)replaceObjectInEffectContainersAtIndex:(int)index withObject:(id)object;	// 0x5c791
- (int)countOfFilters;	// 0x5c815
- (id)objectInFiltersAtIndex:(int)index;	// 0x5c835
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x5c859
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x5c899
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x5c8d5
// converted property getter: - (float)xPosition;	// 0x5ccad
// converted property setter: - (void)setXPosition:(float)position;	// 0x5c959
// converted property getter: - (float)yPosition;	// 0x5cccd
// converted property setter: - (void)setYPosition:(float)position;	// 0x5c98d
// converted property getter: - (float)height;	// 0x5cced
// converted property setter: - (void)setHeight:(float)height;	// 0x5c9c1
// converted property getter: - (float)width;	// 0x5cd0d
// converted property setter: - (void)setWidth:(float)width;	// 0x5c9f5
// converted property getter: - (id)scriptingAnimations;	// 0x5da91
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x5de3d
@end

@interface MPLayer (Internal)
@property(assign) BOOL skipTimeCalculations;	// G=0x59d09; S=0x5c3c1; converted property
@property(retain) id layerID;	// G=0x5c6b1; S=0x5c675; converted property
- (void)copyStruct:(id)aStruct;	// 0x5ca29
- (void)copyEffectContainers:(id)containers;	// 0x5cf75
- (void)copyFilters:(id)filters;	// 0x5d069
- (void)copyAnimationPaths:(id)paths;	// 0x5d15d
- (void)copyAudioPlaylist:(id)playlist;	// 0x5c329
- (void)cleanup;	// 0x5d231
- (void)setLayerPlug:(id)plug;	// 0x5d325
- (void)setParentDocument:(id)document;	// 0x5e1cd
- (void)setMontage:(id)montage;	// 0x5c36d
- (void)recreateWithPlug:(id)plug;	// 0x59d05
// converted property getter: - (BOOL)skipTimeCalculations;	// 0x59d09
// converted property setter: - (void)setSkipTimeCalculations:(BOOL)calculations;	// 0x5c3c1
- (void)updateDurationPadding:(double)padding;	// 0x5c411
- (void)reconnectTransitionForEffectContainerAtIndex:(int)index;	// 0x5c559
- (void)reconnectAllTransitions;	// 0x5d8b1
- (void)resetStartTimes;	// 0x5d97d
// converted property setter: - (void)setLayerID:(id)anId;	// 0x5c675
// converted property getter: - (id)layerID;	// 0x5c6b1
@end

@interface MPLayer (Private)
- (id)layerPlug;	// 0x59ce5
- (id)montage;	// 0x59cf5
- (void)setDuration:(double)duration;	// 0x5e095
- (void)dump;	// 0x5e1a5
- (id)fullDebugLog;	// 0x5cd2d
@end
