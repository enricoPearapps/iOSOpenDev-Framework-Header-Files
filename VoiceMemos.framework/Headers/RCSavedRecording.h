/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */



@class NSDate, AVItem, NSString;

@interface RCSavedRecording : NSObject {
@private
	AVItem *_avItem;	// 48 = 0x30
	unsigned _beingRemade : 1;	// 52 = 0x34
	NSString *_pathForRemaking;	// 56 = 0x38
}
@property(copy, nonatomic) NSDate *date;	// @dynamic
@property(copy, nonatomic) NSString *path;	// @dynamic
@property(copy, nonatomic) NSString *customLabel;	// @dynamic
@property(copy, nonatomic) NSString *pathForRemaking;	// G=0x3635; S=0x401d; @synthesize=_pathForRemaking
@property(assign, nonatomic, getter=isBeingRemade) BOOL beingRemade;	// G=0x3621; S=0x3c29; 
@property(readonly, assign, nonatomic) AVItem *avItem;	// G=0x3bb9; 
@property(readonly, assign, nonatomic) NSString *detailLabel;	// G=0x3b0d; 
@property(readonly, assign, nonatomic) NSString *label;	// G=0x3ab5; 
@property(assign, nonatomic, getter=isSynced) BOOL synced;	// G=0x39d9; S=0x3a39; 
@property(assign, nonatomic) long long iTunesPersistentID;	// G=0x38ed; S=0x3959; 
@property(assign, nonatomic) unsigned labelPreset;	// G=0x3811; S=0x3871; 
@property(assign, nonatomic) double duration;	// G=0x3645; S=0x376d; 
+ (id)localizedStringForRecordingLabel:(unsigned)recordingLabel;	// 0x3cb1
- (void)dealloc;	// 0x3fd1
- (void)awakeFromInsert;	// 0x42dd
- (void)awakeFromFetch;	// 0x418d
- (void)willSave;	// 0x4041
// declared property getter: - (double)duration;	// 0x3645
// declared property setter: - (void)setDuration:(double)duration;	// 0x376d
// declared property getter: - (unsigned)labelPreset;	// 0x3811
// declared property setter: - (void)setLabelPreset:(unsigned)preset;	// 0x3871
// declared property getter: - (long long)iTunesPersistentID;	// 0x38ed
// declared property setter: - (void)setITunesPersistentID:(long long)anId;	// 0x3959
// declared property getter: - (BOOL)isSynced;	// 0x39d9
// declared property setter: - (void)setSynced:(BOOL)synced;	// 0x3a39
// declared property getter: - (id)label;	// 0x3ab5
// declared property getter: - (id)detailLabel;	// 0x3b0d
// declared property getter: - (id)avItem;	// 0x3bb9
// declared property setter: - (void)setBeingRemade:(BOOL)remade;	// 0x3c29
// declared property getter: - (BOOL)isBeingRemade;	// 0x3621
// declared property getter: - (id)pathForRemaking;	// 0x3635
// declared property setter: - (void)setPathForRemaking:(id)remaking;	// 0x401d
@end
