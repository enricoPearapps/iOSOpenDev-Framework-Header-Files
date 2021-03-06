/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDSLPublication.h>
#import <iWorkImport/GQDRoot.h>

@class GQDSLPageMargins, GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQDSLPublication : GQDRoot {
@private
	CGSize mPageSize;	// 36 = 0x24
	GQDSLPageMargins *mPageMargins;	// 44 = 0x2c
	GQDSStylesheet *mStylesheet;	// 48 = 0x30
	BOOL mHasBody;	// 52 = 0x34
	BOOL mIsOldAssetNameMapInitialized;	// 53 = 0x35
	CFDictionaryRef mOldAssetNameMap;	// 56 = 0x38
	BOOL mIsOldTemplateNameMapInitialized;	// 60 = 0x3c
	CFDictionaryRef mOldTemplateNameMap;	// 64 = 0x40
	BOOL mShowOutliner;	// 68 = 0x44
	BOOL mHasHeaders;	// 69 = 0x45
	BOOL mHasFooters;	// 70 = 0x46
}
@property(retain) id pageMargins;	// G=0xf0e1; S=0xf9b9; converted property
@property(retain) id stylesheet;	// G=0xf0f1; S=0xf979; converted property
+ (xmlNs *)appNamespace;	// 0xf0b9
- (id)init;	// 0xf895
- (void)dealloc;	// 0xf9f9
- (CGSize)pageSize;	// 0xf0c9
// converted property getter: - (id)pageMargins;	// 0xf0e1
// converted property setter: - (void)setPageMargins:(id)margins;	// 0xf9b9
// converted property getter: - (id)stylesheet;	// 0xf0f1
// converted property setter: - (void)setStylesheet:(id)stylesheet;	// 0xf979
- (BOOL)hasBody;	// 0xf101
- (void)initializeAppBundleResourcesUrl;	// 0xf111
- (CFURLRef)createUrlToAppBundleResource:(CFStringRef)appBundleResource processorBundle:(CFBundleRef)bundle;	// 0xf8d5
- (BOOL)showOutliner;	// 0xf13d
- (BOOL)hasHeaders;	// 0xf14d
- (BOOL)hasFooters;	// 0xf15d
@end

@interface GQDSLPublication (Private)
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0xfa85
- (CFStringRef)createFixedPathForOldAppBundleResourcePath:(CFStringRef)oldAppBundleResourcePath;	// 0xfb1d
- (CFArrayRef)createUpgradedPathComponentsFromOldTemplatePathComponents:(CFArrayRef)oldTemplatePathComponents;	// 0xfea9
- (CFStringRef)createUpgradedPathForOldAssetPath:(CFStringRef)oldAssetPath;	// 0x10179
@end
