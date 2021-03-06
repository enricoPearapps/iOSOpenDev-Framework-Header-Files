/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <AirTraffic/XXUnknownSuperclass.h>

@class NSMutableDictionary, NSDictionary;

@interface ATUserDefaults : XXUnknownSuperclass {
	NSMutableDictionary *_defaults;	// 4 = 0x4
}
@property(retain, nonatomic) NSDictionary *diskUsageInfo;	// G=0xbb39; S=0xbadd; 
@property(assign, nonatomic) BOOL hasCompletedDataMigration;	// G=0xaf09; S=0xba79; 
+ (id)readOnlyDefaults;	// 0xbce9
- (void)dealloc;	// 0xbc9d
- (id)init;	// 0xbb61
// declared property getter: - (id)diskUsageInfo;	// 0xbb39
// declared property setter: - (void)setDiskUsageInfo:(id)info;	// 0xbadd
// declared property setter: - (void)setHasCompletedDataMigration:(BOOL)migration;	// 0xba79
- (id)allHosts;	// 0xba51
- (id)hostInfoForIdentifier:(id)identifier;	// 0xba15
- (void)removeHost:(id)host;	// 0xb9bd
- (void)updateLastSyncWithHostLibrary:(id)hostLibrary;	// 0xb8d5
- (void)updateHostInfo:(id)info;	// 0xb341
- (void)upgradeDefaults;	// 0xb075
- (void)_updateDefaults;	// 0xafad
// declared property getter: - (BOOL)hasCompletedDataMigration;	// 0xaf09
@end
