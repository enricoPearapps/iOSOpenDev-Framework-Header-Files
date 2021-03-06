/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/StepByStepUIViewController_ExtendWirelessNetworkChoice.h>
#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>
#import <AirPortAssistant/StepByStepUIDevicePicker.h>

@class UIView, UILabel;

__attribute__((visibility("hidden")))
@interface StepByStepUIViewController_ExtendWirelessNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
	UIView *tableHeaderContainerView;	// 264 = 0x108
	UIView *justTextContainerView;	// 268 = 0x10c
	UILabel *justLabelView;	// 272 = 0x110
	int _selectorChoice;	// 276 = 0x114
}
@property(retain, nonatomic) UILabel *justLabelView;	// G=0x17881; S=0x17891; @synthesize
@property(retain, nonatomic) UIView *justTextContainerView;	// G=0x1784d; S=0x1785d; @synthesize
@property(retain, nonatomic) UIView *tableHeaderContainerView;	// G=0x17819; S=0x17829; @synthesize
// declared property setter: - (void)setJustLabelView:(id)view;	// 0x17891
// declared property getter: - (id)justLabelView;	// 0x17881
// declared property setter: - (void)setJustTextContainerView:(id)view;	// 0x1785d
// declared property getter: - (id)justTextContainerView;	// 0x1784d
// declared property setter: - (void)setTableHeaderContainerView:(id)view;	// 0x17829
// declared property getter: - (id)tableHeaderContainerView;	// 0x17819
- (void)stepByStepUpdateProgress:(id)progress forState:(int)state;	// 0x1778d
- (void)touchInCellAtIndexPath:(id)indexPath;	// 0x17681
- (void)setupPickerTable;	// 0x17655
- (id)devicePickerLabel;	// 0x17635
- (id)deviceTableLabel;	// 0x17615
- (void)setupDevices;	// 0x17505
- (void)updateNavigationButtons;	// 0x174dd
- (void)selectedDeviceUpdated;	// 0x17435
- (void)setupHeaderAndFooter;	// 0x17379
- (void)viewDidLoad;	// 0x17291
@end

@interface StepByStepUIViewController_ExtendWirelessNetworkChoice (private)
- (void)addBrowsedRecords:(id)records toDestList:(id)destList;	// 0x17949
- (BOOL)canBeExtendedWithDWDS;	// 0x178b5
@end
