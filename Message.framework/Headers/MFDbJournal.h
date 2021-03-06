/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Message-Structs.h>
#import <Message/XXUnknownSuperclass.h>

@class NSString, NSMutableData;

@interface MFDbJournal : XXUnknownSuperclass {
	NSString *_path;	// 4 = 0x4
	opaque_pthread_mutex_t _lock;	// 8 = 0x8
	int _fd;	// 52 = 0x34
	NSMutableData *_buffer;	// 56 = 0x38
}
+ (id)sharedInstance;	// 0xdc95
- (id)initWithPath:(id)path;	// 0xdcc1
- (void)dealloc;	// 0x7c15d
- (void)_resetBuffer;	// 0x7c131
- (BOOL)append:(const char *)append;	// 0x7c05d
- (BOOL)flush;	// 0x21595
- (void)clear;	// 0x7c019
- (BOOL)_processJournalFile:(id)file db:(sqlite3 *)db;	// 0x7bd29
- (BOOL)mergeWithDatabase:(sqlite3 *)database;	// 0xdd71
- (void)moveOrDeleteFile;	// 0x7bcad
@end
