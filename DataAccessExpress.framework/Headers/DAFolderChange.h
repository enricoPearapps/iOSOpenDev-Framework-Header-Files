/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */


#import <DataAccessExpress/NSCoding.h>

@class NSString;
@protocol DAFolderChangeConsumer;

@interface DAFolderChange : NSObject <NSCoding> {
	int _changeType;	// 4 = 0x4
	NSString *_folderId;	// 8 = 0x8
	NSString *_parentFolderId;	// 12 = 0xc
	NSString *_displayName;	// 16 = 0x10
	int _dataclass;	// 20 = 0x14
	BOOL _renameOnCollision;	// 24 = 0x18
	unsigned _taskId;	// 28 = 0x1c
	id<DAFolderChangeConsumer> _consumer;	// 32 = 0x20
}
@property(assign) unsigned taskId;	// G=0xc1fd; S=0xc20d; @synthesize=_taskId
@property(assign) id<DAFolderChangeConsumer> consumer;	// G=0xc1dd; S=0xc1ed; @synthesize=_consumer
@property(assign) BOOL renameOnCollision;	// G=0xc21d; S=0xc22d; @synthesize=_renameOnCollision
@property(readonly, assign) int dataclass;	// G=0xc1cd; @synthesize=_dataclass
@property(readonly, assign) NSString *displayName;	// G=0xc1bd; @synthesize=_displayName
@property(readonly, assign) NSString *parentFolderId;	// G=0xc1ad; @synthesize=_parentFolderId
@property(readonly, assign) NSString *folderId;	// G=0xc19d; @synthesize=_folderId
@property(readonly, assign) int changeType;	// G=0xc18d; @synthesize=_changeType
// declared property setter: - (void)setRenameOnCollision:(BOOL)collision;	// 0xc22d
// declared property getter: - (BOOL)renameOnCollision;	// 0xc21d
// declared property setter: - (void)setTaskId:(unsigned)anId;	// 0xc20d
// declared property getter: - (unsigned)taskId;	// 0xc1fd
// declared property setter: - (void)setConsumer:(id)consumer;	// 0xc1ed
// declared property getter: - (id)consumer;	// 0xc1dd
// declared property getter: - (int)dataclass;	// 0xc1cd
// declared property getter: - (id)displayName;	// 0xc1bd
// declared property getter: - (id)parentFolderId;	// 0xc1ad
// declared property getter: - (id)folderId;	// 0xc19d
// declared property getter: - (int)changeType;	// 0xc18d
- (void)setDisplayName:(id)name;	// 0xc149
- (void)setFolderId:(id)anId;	// 0xc105
- (void)encodeWithCoder:(id)coder;	// 0xbf85
- (id)initWithCoder:(id)coder;	// 0xbdb9
- (id)description;	// 0xbd09
- (void)dealloc;	// 0xbc95
- (id)initFolderChangeWithChangeType:(int)changeType folderId:(id)anId parentFolderId:(id)anId3 displayName:(id)name dataclass:(int)dataclass consumer:(id)consumer;	// 0xb829
@end
