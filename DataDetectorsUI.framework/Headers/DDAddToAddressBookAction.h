/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

#import <DataDetectorsUI/DDAction.h>
#import <DataDetectorsUI/ABUnknownPersonViewControllerDelegate.h>


__attribute__((visibility("hidden")))
@interface DDAddToAddressBookAction : DDAction <ABUnknownPersonViewControllerDelegate> {
}
- (void)cancelPressed:(id)pressed;	// 0xcb65
- (void)unknownPersonViewController:(id)controller didResolveToPerson:(void *)person;	// 0xcb19
- (BOOL)unknownPersonViewController:(id)controller shouldPerformDefaultActionForPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0xcb15
- (id)viewController;	// 0xc71d
- (void)_augmentRecordWithResults:(void *)results;	// 0xc679
- (int)interactionType;	// 0xc675
- (id)localizedName;	// 0xc65d
@end
