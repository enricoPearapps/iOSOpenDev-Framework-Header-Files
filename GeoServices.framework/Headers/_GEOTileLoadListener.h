/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/XXUnknownSuperclass.h>

@class NSLock, NSError, GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface _GEOTileLoadListener : XXUnknownSuperclass {
	id _progress;	// 4 = 0x4
	id _finished;	// 8 = 0x8
	id _error;	// 12 = 0xc
	GEOTileKeyList *_originalList;	// 16 = 0x10
	GEOTileKeyList *_networkLoadList;	// 20 = 0x14
	GEOTileKeyList *_satisfiedList;	// 24 = 0x18
	BOOL _finishWhenDecoded;	// 28 = 0x1c
	int _tilesDecoding;	// 32 = 0x20
	NSError *_noNetworkError;	// 36 = 0x24
	NSLock *_callbacksLock;	// 40 = 0x28
}
@property(retain, nonatomic) GEOTileKeyList *satisfiedList;	// G=0x7ac9; S=0x7ad9; @synthesize=_satisfiedList
@property(retain, nonatomic) GEOTileKeyList *networkLoadList;	// G=0x7a95; S=0x7aa5; @synthesize=_networkLoadList
@property(retain, nonatomic) GEOTileKeyList *originalList;	// G=0x7a61; S=0x7a71; @synthesize=_originalList
@property(copy, nonatomic) id error;	// G=0x7a2d; S=0x7a3d; @synthesize=_error
@property(copy, nonatomic) id finished;	// G=0x79f9; S=0x7a09; @synthesize=_finished
@property(copy, nonatomic) id progress;	// G=0x79c5; S=0x79d5; @synthesize=_progress
// declared property setter: - (void)setSatisfiedList:(id)list;	// 0x7ad9
// declared property getter: - (id)satisfiedList;	// 0x7ac9
// declared property setter: - (void)setNetworkLoadList:(id)list;	// 0x7aa5
// declared property getter: - (id)networkLoadList;	// 0x7a95
// declared property setter: - (void)setOriginalList:(id)list;	// 0x7a71
// declared property getter: - (id)originalList;	// 0x7a61
// declared property setter: - (void)setError:(id)error;	// 0x7a3d
// declared property getter: - (id)error;	// 0x7a2d
// declared property setter: - (void)setFinished:(id)finished;	// 0x7a09
// declared property getter: - (id)finished;	// 0x79f9
// declared property setter: - (void)setProgress:(id)progress;	// 0x79d5
// declared property getter: - (id)progress;	// 0x79c5
- (void)unlockCallbacks;	// 0x79a5
- (void)lockCallbacks;	// 0x7985
- (void)finishDecodingAndSendError:(id)error;	// 0x7895
- (void)finishWhenDecoded;	// 0x7801
- (void)endDecode;	// 0x76b1
- (void)beginDecode;	// 0x769d
- (void)addSatisfiedKey:(const GEOTileKey *)key;	// 0x7639
- (void)dealloc;	// 0x7561
- (id)init;	// 0x74fd
@end
