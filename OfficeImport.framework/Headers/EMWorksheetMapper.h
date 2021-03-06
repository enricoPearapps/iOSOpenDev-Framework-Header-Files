/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EMSheetMapper.h>
#import <OfficeImport/EMWorksheetMapper.h>
#import <OfficeImport/OfficeImport-Structs.h>

@class ECColumnWidthConvertor, CMStyle, EDWorksheet;

__attribute__((visibility("hidden")))
@interface EMWorksheetMapper : EMSheetMapper {
@private
	EDWorksheet *edWorksheet;	// 8 = 0x8
	CMStyle *mStyle;	// 12 = 0xc
	int mMaxPopulatedColumn;	// 16 = 0x10
	int mMaxPopulatedRow;	// 20 = 0x14
	double *mColumnGrid;	// 24 = 0x18
	double *mRowGrid;	// 28 = 0x1c
	int mWidth;	// 32 = 0x20
	int mHeight;	// 36 = 0x24
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 40 = 0x28
}
- (id)initWithEDWorksheet:(id)edworksheet parent:(id)parent;	// 0xf82a1
- (void)_initWithState:(id)state;	// 0xf8849
- (void)dealloc;	// 0xffcd5
- (BOOL)isVisible;	// 0xf9a9d
- (double *)columnGrid;	// 0xfa2ad
- (int)columnCount;	// 0xfa2bd
- (double *)rowGrid;	// 0x10609d
- (int)maxRowNumber;	// 0x106a91
- (double)defaultRowHeight;	// 0x176b71
- (double)xlColumnWidthToPoints:(double)points;	// 0x176b55
- (double)defaultColumnWidth;	// 0x176b15
- (int)width;	// 0xffa95
- (int)height;	// 0xffaa5
- (void)mapAt:(id)at withState:(id)state;	// 0xf9731
- (id)columnWidthConvertor;	// 0xf8ff9
- (int)preprocessWidthWithState:(id)state;	// 0xf84b9
- (int)preprocessHeightWithState:(id)state;	// 0xf91bd
- (CGSize)preprocessDrawableSizeWithState:(id)state;	// 0xf92dd
- (CGSize)preprocessSizeWithState:(id)state;	// 0xf836d
@end

@interface EMWorksheetMapper (Private)
- (void)setRowGrid;	// 0xf8d51
- (void)countRowsAndColumnsWithState:(id)state;	// 0xf88d9
- (void)mapColumnInfosAt:(id)at withState:(id)state;	// 0xf9b21
- (void)mapGridAt:(id)at;	// 0xfa141
- (void)mapDrawablesAt:(id)at withState:(id)state;	// 0xff96d
- (void)mapTableAt:(id)at withState:(id)state;	// 0xf97d5
- (void)mapTableStyleAt:(id)at withState:(id)state;	// 0xff78d
@end
