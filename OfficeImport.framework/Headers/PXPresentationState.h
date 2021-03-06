/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class PDPresentation, OAXTableStyleCache, OAVState, NSMutableDictionary, OAXDrawingState;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface PXPresentationState : XXUnknownSuperclass {
@private
	NSMutableDictionary *mModelObjects;	// 4 = 0x4
	OAXDrawingState *mOfficeArtState;	// 8 = 0x8
	OAVState *mOAVState;	// 12 = 0xc
	OAXTableStyleCache *mTableStyleCache;	// 16 = 0x10
	NSMutableDictionary *mSlideURLToIndexMap;	// 20 = 0x14
	PDPresentation *mTgtPresentation;	// 24 = 0x18
	id<OCCancelDelegate> mCancel;	// 28 = 0x1c
}
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x1c71a5; S=0x1aad15; @synthesize=mCancel
@property(retain) id tgtPresentation;	// G=0x1af385; S=0x1aad3d; converted property
- (id)init;	// 0x1aaa29
- (void)dealloc;	// 0x1b2259
- (id)oavState;	// 0x21bc91
- (id)modelObjectForLocation:(id)location;	// 0x1b2099
- (void)setModelObject:(id)object forLocation:(id)location;	// 0x1b1d55
- (id)officeArtState;	// 0x1ab269
- (void)resetOfficeArtState;	// 0x1b164d
- (id)tableStyleCache;	// 0x1ab111
- (int)slideIndexForSlideURL:(id)slideURL;	// 0x2007a5
- (void)setSlideIndex:(int)index forSlideURL:(id)slideURL;	// 0x1ab0a1
// converted property getter: - (id)tgtPresentation;	// 0x1af385
// converted property setter: - (void)setTgtPresentation:(id)presentation;	// 0x1aad3d
- (BOOL)isCancelled;	// 0x1ac4e1
// declared property getter: - (id)cancelDelegate;	// 0x1c71a5
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x1aad15
@end
