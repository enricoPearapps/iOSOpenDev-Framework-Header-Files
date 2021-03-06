/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSRequest.h>


@interface HSBulkCloudArtworkInfoRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID itemIDs:(id)ids sessionID:(unsigned)anId;	// 0x16fd1
- (id)_bodyDataForItemIDs:(id)itemIDs sessionID:(unsigned)anId;	// 0x17091
- (id)canonicalResponseForResponse:(id)response;	// 0x17025
- (id)initWithDatabaseID:(unsigned)databaseID itemIDs:(id)ids sessionID:(unsigned)anId;	// 0x16f31
@end
