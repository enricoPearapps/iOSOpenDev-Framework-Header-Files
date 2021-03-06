/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMHTMLElement.h>
#import <WebCore/DOMHTMLIFrameElement.h>

@class DOMDocument, DOMAbstractView, NSString;

@interface DOMHTMLIFrameElement : DOMHTMLElement {
}
@property(readonly, retain) DOMAbstractView *contentWindow;	// G=0x31e005; 
@property(readonly, retain) DOMDocument *contentDocument;	// G=0x31df41; 
@property(copy) NSString *width;	// G=0x31cf1d; S=0x31dca5; 
@property(copy) NSString *src;	// G=0x31dde9; S=0x31db61; 
@property(copy) NSString *scrolling;	// G=0x31ce3d; S=0x31da1d; 
@property(copy) NSString *name;	// G=0x31cc7d; S=0x31d795; 
@property(copy) NSString *marginWidth;	// G=0x31cb9d; S=0x31d651; 
@property(copy) NSString *marginHeight;	// G=0x31cabd; S=0x31d50d; 
@property(copy) NSString *longDesc;	// G=0x31c9dd; S=0x31d3c9; 
@property(copy) NSString *height;	// G=0x31c8fd; S=0x31d285; 
@property(copy) NSString *frameBorder;	// G=0x31c81d; S=0x31d141; 
@property(copy) NSString *align;	// G=0x31c73d; S=0x31cffd; 
@property(retain) id sandbox;	// G=0x31cd5d; S=0x31d8d9; converted property
// declared property getter: - (id)align;	// 0x31c73d
// declared property setter: - (void)setAlign:(id)align;	// 0x31cffd
// declared property getter: - (id)frameBorder;	// 0x31c81d
// declared property setter: - (void)setFrameBorder:(id)border;	// 0x31d141
// declared property getter: - (id)height;	// 0x31c8fd
// declared property setter: - (void)setHeight:(id)height;	// 0x31d285
// declared property getter: - (id)longDesc;	// 0x31c9dd
// declared property setter: - (void)setLongDesc:(id)desc;	// 0x31d3c9
// declared property getter: - (id)marginHeight;	// 0x31cabd
// declared property setter: - (void)setMarginHeight:(id)height;	// 0x31d50d
// declared property getter: - (id)marginWidth;	// 0x31cb9d
// declared property setter: - (void)setMarginWidth:(id)width;	// 0x31d651
// declared property getter: - (id)name;	// 0x31cc7d
// declared property setter: - (void)setName:(id)name;	// 0x31d795
// converted property getter: - (id)sandbox;	// 0x31cd5d
// converted property setter: - (void)setSandbox:(id)sandbox;	// 0x31d8d9
// declared property getter: - (id)scrolling;	// 0x31ce3d
// declared property setter: - (void)setScrolling:(id)scrolling;	// 0x31da1d
// declared property getter: - (id)src;	// 0x31dde9
// declared property setter: - (void)setSrc:(id)src;	// 0x31db61
// declared property getter: - (id)width;	// 0x31cf1d
// declared property setter: - (void)setWidth:(id)width;	// 0x31dca5
// declared property getter: - (id)contentDocument;	// 0x31df41
// declared property getter: - (id)contentWindow;	// 0x31e005
@end

@interface DOMHTMLIFrameElement (DOMUIKitComplexityExtensions)
- (int)structuralComplexityContribution;	// 0x34f595
@end
