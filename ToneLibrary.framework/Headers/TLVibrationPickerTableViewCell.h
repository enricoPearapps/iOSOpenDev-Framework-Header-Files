/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <ToneLibrary/UITextFieldDelegate.h>
#import <ToneLibrary/XXUnknownSuperclass.h>
#import <ToneLibrary/ToneLibrary-Structs.h>

@class NSString, UITextField;
@protocol TLVibrationPickerTableViewCellDelegate;

@interface TLVibrationPickerTableViewCell : XXUnknownSuperclass <UITextFieldDelegate> {
	id<TLVibrationPickerTableViewCellDelegate> _delegate;	// 244 = 0xf4
	BOOL _editable;	// 248 = 0xf8
	UITextField *_removableTextField;	// 252 = 0xfc
}
@property(readonly, assign, nonatomic, getter=_isDisplayingRemovableTextField) BOOL _displayingRemovableTextField;	// G=0x1c4b5; 
@property(assign, nonatomic, getter=isChecked) BOOL checked;	// G=0x1c3bd; S=0x1c3dd; 
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x1ca2d; S=0x1c281; @synthesize=_editable
@property(retain, nonatomic) NSString *placeholder;	// G=0x1c37d; S=0x1c39d; 
@property(retain, nonatomic) NSString *text;	// G=0x1c2b9; S=0x1c319; 
@property(assign, nonatomic) id<TLVibrationPickerTableViewCellDelegate> delegate;	// G=0x1ca0d; S=0x1ca1d; @synthesize=_delegate
// declared property getter: - (BOOL)isEditable;	// 0x1ca2d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x1ca1d
// declared property getter: - (id)delegate;	// 0x1ca0d
- (void)textFieldDidEndEditing:(id)textField;	// 0x1c991
- (void)textFieldDidBeginEditing:(id)textField;	// 0x1c971
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x1c955
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x1c925
- (void)_makeRemovableTextFieldEditable:(BOOL)editable;	// 0x1c7d5
- (void)willTransitionToState:(unsigned)state;	// 0x1c789
- (void)didTransitionToState:(unsigned)state;	// 0x1c729
- (void)layoutSubviews;	// 0x1c6e9
- (void)_layoutRemovableTextField;	// 0x1c529
- (void)makeTextFieldResignFirstResponderIfNeeded;	// 0x1c4e5
// declared property getter: - (BOOL)_isDisplayingRemovableTextField;	// 0x1c4b5
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x1c3dd
// declared property getter: - (BOOL)isChecked;	// 0x1c3bd
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x1c39d
// declared property getter: - (id)placeholder;	// 0x1c37d
// declared property setter: - (void)setText:(id)text;	// 0x1c319
// declared property getter: - (id)text;	// 0x1c2b9
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x1c281
- (void)dealloc;	// 0x1c235
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x1c139
@end