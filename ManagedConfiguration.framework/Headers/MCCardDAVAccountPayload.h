/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCCardDAVAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	NSString *_principalURL;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	int _port;	// 64 = 0x40
	NSString *_accountPersistentUUID;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x2751d; @synthesize=_accountDescription
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x2750d; @synthesize=_hostname
@property(copy, nonatomic) NSString *username;	// G=0x274fd; S=0x27665; @synthesize=_username
@property(copy, nonatomic) NSString *password;	// G=0x274ed; S=0x27689; @synthesize=_password
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x274dd; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x274cd; @synthesize=_useSSL
@property(readonly, assign, nonatomic) int port;	// G=0x274bd; @synthesize=_port
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x274ad; S=0x276ad; @synthesize=_accountPersistentUUID
+ (id)typeStrings;	// 0x2763d
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x275dd
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x279dd
- (void)dealloc;	// 0x2752d
- (id)description;	// 0x27825
- (id)stubDictionary;	// 0x27741
- (id)title;	// 0x27711
- (id)subtitle1Label;	// 0x27701
- (id)subtitle1Description;	// 0x276f1
- (id)subtitle2Label;	// 0x276e1
- (id)subtitle2Description;	// 0x276d1
// declared property getter: - (id)accountPersistentUUID;	// 0x274ad
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x276ad
// declared property getter: - (int)port;	// 0x274bd
// declared property getter: - (BOOL)useSSL;	// 0x274cd
// declared property getter: - (id)principalURL;	// 0x274dd
// declared property getter: - (id)password;	// 0x274ed
// declared property setter: - (void)setPassword:(id)password;	// 0x27689
// declared property getter: - (id)username;	// 0x274fd
// declared property setter: - (void)setUsername:(id)username;	// 0x27665
// declared property getter: - (id)hostname;	// 0x2750d
// declared property getter: - (id)accountDescription;	// 0x2751d
@end
