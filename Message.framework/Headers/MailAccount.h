/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Account.h>
#import <Message/Message-Structs.h>

@class MFError, MessageLibrary, MFLock, NSMutableDictionary, NSString, MailboxUid;

@interface MailAccount : Account {
	NSString *_path;	// 28 = 0x1c
	NSString *_nonPersistentPath;	// 32 = 0x20
	MailboxUid *_rootMailboxUid;	// 36 = 0x24
	struct {
		unsigned cacheDirtyCount : 16;
		unsigned synchronizationThreadIsRunning : 1;
		unsigned backgroundFetchInProgress : 1;
		unsigned cacheHasBeenRead : 1;
		unsigned disableCacheWrite : 1;
		unsigned _UNUSED_ : 12;
	} _flags;	// 40 = 0x28
	MailboxUid *_inboxMailboxUid;	// 44 = 0x2c
	MailboxUid *_draftsMailboxUid;	// 48 = 0x30
	MailboxUid *_sentMessagesMailboxUid;	// 52 = 0x34
	MailboxUid *_trashMailboxUid;	// 56 = 0x38
	MailboxUid *_archiveMailboxUid;	// 60 = 0x3c
	MFLock *_cachedMailboxenLock;	// 64 = 0x40
	MFError *_lastConnectionError;	// 68 = 0x44
	MessageLibrary *_library;	// 72 = 0x48
	NSMutableDictionary *_currentChokedActions;	// 76 = 0x4c
	NSString *_mailboxCachePath;	// 80 = 0x50
	CFDictionaryRef _cachedMessageStores;	// 84 = 0x54
	MFLock *_cachedMessageStoresLock;	// 88 = 0x58
	int _cachedLibraryID;	// 92 = 0x5c
	MFLock *_cachedLibraryIDLock;	// 96 = 0x60
}
@property(assign, nonatomic) BOOL shouldArchive;	// G=0x348cd; S=0x2ea31; 
@property(assign, nonatomic) BOOL generatesBulletins;	// G=0x348b5; S=0x34841; 
@property(retain) NSString *path;	// G=0x5271; S=0x56b1; converted property
@property(retain) id fullUserName;	// G=0x6719; S=0x34781; converted property
@property(retain) id deliveryAccount;	// G=0x16c15; S=0x346b1; converted property
@property(retain) id deliveryAccountAlternates;	// G=0x16ca1; S=0x34525; converted property
@property(assign) BOOL canUseCarrierDeliveryFallback;	// G=0x343c9; S=0x34429; converted property
@property(retain) id emailAddresses;	// G=0x6615; S=0x34291; converted property
@property(retain) id receiveEmailAliasAddresses;	// G=0x676d; S=0x34159; converted property
@property(retain) id lastEmailAliasesSyncDate;	// G=0x340cd; S=0x34035; converted property
@property(retain) id connectionError;	// G=0x16ac5; S=0x13001; converted property
@property(retain) MessageLibrary *library;	// G=0x9d05; S=0x4479; converted property
@property(assign) int cachePolicy;	// G=0x31ced; S=0x31d81; converted property
@property(assign) BOOL isActive;	// G=0x3cf1; S=0x3b3d; converted property
@property(retain) NSString *mailboxCachePath;	// G=0x73cd; S=0x3193d; converted property
@property(readonly, retain) MailboxUid *rootMailboxUid;	// G=0x6c81; converted property
+ (void)initialize;	// 0x2871
+ (BOOL)mailboxListingNotificationAreEnabled;	// 0x8481
+ (void)disableMailboxListingNotifications;	// 0x2bdd
+ (void)enableMailboxListingNotifications:(BOOL)notifications;	// 0x68f1
+ (BOOL)haveAccountsBeenConfigured;	// 0x30831
+ (void)_addAccountToSortedPaths:(id)sortedPaths;	// 0x50f5
+ (void)_setupSortedPathsForAccounts:(id)accounts;	// 0x5081
+ (id)existingMailAccountForUniqueID:(id)uniqueID;	// 0x31a9
+ (id)existingDAMailAccountForDAAccount:(id)daaccount;	// 0x306fd
+ (void)_registerPendingAccount:(id)account;	// 0x3068d
+ (void)_unregisterPendingAccount:(id)account;	// 0x30635
+ (id)_loadAllAccounts;	// 0x2bfd
+ (void)_invalidateAccounts:(id)accounts missingFromNewAccounts:(id)newAccounts;	// 0x683d
+ (void)_migrateUserInfoAddressPreferencesToFirstAccount;	// 0x5b51
+ (void)reloadAccounts;	// 0x29fd
+ (id)mailAccounts;	// 0x2981
+ (void)addMailAccount:(id)account saveIfChanged:(BOOL)changed;	// 0x30579
+ (void)removeMailAccount:(id)account saveIfChanged:(BOOL)changed;	// 0x304bd
+ (void)setMailAccounts:(id)accounts;	// 0x304a9
+ (void)setMailAccounts:(id)accounts saveIfChanged:(BOOL)changed;	// 0x30239
+ (void)_removeAccountFromSortedPaths:(id)sortedPaths;	// 0x301ed
+ (id)activeAccounts;	// 0x28ad
+ (void)removeOrphanedAccountData;	// 0x1738d
+ (void)saveAccounts:(id)accounts usingKey:(id)key;	// 0x30175
+ (void)saveAccountInfoToDefaults;	// 0x30065
+ (id)accountWithUniqueId:(id)uniqueId;	// 0x1fba9
+ (id)existingAccountWithType:(id)type hostname:(id)hostname username:(id)username;	// 0x2ff71
+ (void)resetMailboxTimers;	// 0x2ff0d
+ (void)updateAutoFetchSettings;	// 0x2fd75
+ (id)allEmailAddressesIncludingFullUserName:(BOOL)name includeReceiveAliases:(BOOL)aliases;	// 0x2fd49
+ (id)_accountContainingEmailAddress:(id)address matchingAddress:(id *)address2 fullUserName:(id *)name includingInactive:(BOOL)inactive;	// 0x204f1
+ (id)accountContainingEmailAddress:(id)address includingInactive:(BOOL)inactive;	// 0x204cd
+ (id)accountContainingEmailAddress:(id)address;	// 0x2fd29
+ (id)accountForHeaders:(id)headers message:(id)message includingInactive:(BOOL)inactive;	// 0x2fbbd
+ (id)accountUsingHeadersFromMessage:(id)message;	// 0x2fb6d
+ (id)accountThatMessageIsFrom:(id)from includingInactive:(BOOL)inactive;	// 0x2fb25
+ (id)accountThatMessageIsFrom:(id)from;	// 0x2fae9
+ (id)addressesThatReceivedMessage:(id)message;	// 0x2f949
+ (id)outboxMailboxUid;	// 0xe2d9
+ (id)outboxMessageStore:(BOOL)store;	// 0xe269
+ (id)allMailboxUids;	// 0x2f7fd
+ (id)accountWithPath:(id)path;	// 0x2f7f5
+ (id)newAccountWithPath:(id)path;	// 0x2f755
+ (id)newAccountWithDictionary:(id)dictionary;	// 0x2f65d
+ (id)defaultPathForAccountWithHostname:(id)hostname username:(id)username;	// 0x5475
+ (id)defaultAccountDirectory;	// 0x54d9
+ (id)defaultPathNameForAccountWithHostname:(id)hostname username:(id)username;	// 0x5af9
+ (void)setGlobalPathForAccounts:(id)accounts;	// 0x2f61d
+ (id)defaultMailAccountForDelivery;	// 0x1fca5
+ (id)defaultMailAccountForDeliveryExcludingRestricted;	// 0x2f609
+ (id)_defaultMailAccountForDeliveryIncludingRestricted:(BOOL)deliveryIncludingRestricted;	// 0x1fcb9
+ (id)defaultDeliveryAccount;	// 0x2f5e1
+ (BOOL)isPredefinedAccountType;	// 0x1fba5
+ (BOOL)isAnyAccountOffline;	// 0x2f4fd
+ (BOOL)isAnyAccountOnline;	// 0x2f411
+ (void)_setOnlineStateOfAllAccountsTo:(BOOL)to;	// 0x2f329
+ (void)disconnectAllAccounts;	// 0x2f315
+ (void)connectAllAccounts;	// 0x2f301
+ (void)saveStateForAllAccounts;	// 0x2f279
+ (void)synchronouslyEmptyMailboxUidType:(int)type inAccounts:(id)accounts;	// 0x2f199
+ (id)mailboxUidForFileSystemPath:(id)fileSystemPath create:(BOOL)create;	// 0x2ef55
+ (id)_accountForURL:(id)url;	// 0x18dad
+ (id)infoForURL:(id)url;	// 0x18d81
+ (id)URLForInfo:(id)info;	// 0x923d
+ (id)accountWithURLString:(id)urlstring;	// 0x2eeed
+ (id)mailboxUidFromActiveAccountsForURL:(id)url;	// 0x18c85
+ (void)updateEmailALiasesForActiveAccounts;	// 0x20379
+ (id)standardAccountClass:(Class)aClass valueForKey:(id)key;	// 0x2ec51
+ (id)predefinedValueForKey:(id)key;	// 0x2ec3d
+ (BOOL)usernameIsEmailAddress;	// 0x2e8c5
+ (BOOL)getConfigurationFromServerForEmail:(id)email;	// 0x2e8f5
+ (id)_accountWithPath:(id)path;	// 0x2eb3d
+ (void)setDataclassesConsideredActive:(id)active;	// 0x2eac1
+ (void)_postMailAccountsHaveChanged;	// 0x67d1
+ (void)_setOutboxMailboxUid:(id)uid;	// 0xe501
+ (BOOL)canMoveMessagesFromAccount:(id)account toAccount:(id)account2;	// 0x1fb59
+ (void)_removeLookAsideValuesNotInAccountList:(id)accountList;	// 0x4d91
- (void)accountDidLoad;	// 0x4f6d
- (BOOL)isEquivalentTo:(id)to hostname:(id)hostname username:(id)username;	// 0x2e929
- (BOOL)isUsernameEquivalentTo:(id)to;	// 0x2e989
- (void)resetMailboxTimer;	// 0x2e871
- (id)uniqueIdForPersistentConnection;	// 0x1895d
- (BOOL)isValidAccountWithError:(id)error accountBeingEdited:(id)edited userCanOverride:(BOOL *)override;	// 0x34b71
- (void)_setAccountProperties:(id)properties;	// 0x3739
- (id)initWithProperties:(id)properties;	// 0x32b5
- (id)initWithLibrary:(id)library properties:(id)properties;	// 0x33e1
- (id)initWithLibrary:(id)library path:(id)path;	// 0x2e9e5
- (id)initWithPath:(id)path;	// 0x2ea1d
- (void)dealloc;	// 0x348e5
// converted property getter: - (id)path;	// 0x5271
// converted property setter: - (void)setPath:(id)path;	// 0x56b1
// declared property getter: - (BOOL)shouldArchive;	// 0x348cd
// declared property setter: - (void)setShouldArchive:(BOOL)archive;	// 0x2ea31
// declared property getter: - (BOOL)generatesBulletins;	// 0x348b5
// declared property setter: - (void)setGeneratesBulletins:(BOOL)bulletins;	// 0x34841
- (id)tildeAbbreviatedPath;	// 0x5839
// converted property getter: - (id)fullUserName;	// 0x6719
// converted property setter: - (void)setFullUserName:(id)name;	// 0x34781
// converted property getter: - (id)deliveryAccount;	// 0x16c15
// converted property getter: - (id)deliveryAccountAlternates;	// 0x16ca1
// converted property setter: - (void)setDeliveryAccount:(id)account;	// 0x346b1
// converted property setter: - (void)setDeliveryAccountAlternates:(id)alternates;	// 0x34525
- (BOOL)canUseDeliveryAccount:(id)account;	// 0x3447d
// converted property setter: - (void)setCanUseCarrierDeliveryFallback:(BOOL)fallback;	// 0x34429
// converted property getter: - (BOOL)canUseCarrierDeliveryFallback;	// 0x343c9
- (id)firstEmailAddress;	// 0x1fc61
// converted property getter: - (id)emailAddresses;	// 0x6615
// converted property setter: - (void)setEmailAddresses:(id)addresses;	// 0x34291
// converted property getter: - (id)receiveEmailAliasAddresses;	// 0x676d
// converted property setter: - (void)setReceiveEmailAliasAddresses:(id)addresses;	// 0x34159
- (id)fromEmailAddresses;	// 0x1fe81
// converted property getter: - (id)lastEmailAliasesSyncDate;	// 0x340cd
// converted property setter: - (void)setLastEmailAliasesSyncDate:(id)date;	// 0x34035
- (id)emailAddressesAndAliases;	// 0x11745
- (void)_deleteHook;	// 0x2e875
- (void)_synchronouslyInvalidateAndDelete:(unsigned)aDelete;	// 0x33ca9
- (void)_synchronouslyInvalidateAndDeleteWrapper:(id)wrapper;	// 0x33c75
- (void)invalidate;	// 0x33b71
- (id)deleteAccountWithOptions:(unsigned)options;	// 0x33a51
- (id)deleteAccount;	// 0x33a3d
- (void)saveState;	// 0x339f5
- (void)releaseAllConnections;	// 0x339c9
- (void)releaseAllForcedConnections;	// 0x339a1
- (void)setIsOffline:(BOOL)offline;	// 0x338d9
- (BOOL)canFetch;	// 0x18959
- (void)_synchronizeMailboxListWithFileSystem;	// 0x33799
- (void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;	// 0x336b9
- (void)fetchMailboxList;	// 0x2e879
- (BOOL)canAppendMessages;	// 0x2e87d
- (BOOL)canBeSynchronized;	// 0x2e881
- (BOOL)isFetching;	// 0x2e885
- (void)newMailHasBeenReceived;	// 0x33685
- (id)primaryMailboxUid;	// 0x6991
// converted property getter: - (id)rootMailboxUid;	// 0x6c81
- (BOOL)shouldExpungeMessagesOnDelete;	// 0x2e899
- (id)mailboxUidOfType:(int)type createIfNeeded:(BOOL)needed;	// 0x69a5
- (id)specialMailboxNameForType:(int)type;	// 0x6ae1
- (id)allMailboxUids;	// 0x33541
- (id)transferDisabledMailboxUids;	// 0x1fba1
- (void)setMailboxUid:(id)uid forMailboxType:(int)mailboxType;	// 0x33531
- (void)deleteMessagesFromMailboxUid:(id)mailboxUid olderThanNumberOfDays:(unsigned)days;	// 0x123fd
- (void)_setEmptyFrequency:(int)frequency forKey:(id)key;	// 0x334e1
- (int)emptyFrequencyForMailboxType:(int)mailboxType;	// 0x11ec9
- (void)setEmptyFrequency:(int)frequency forMailboxType:(int)mailboxType;	// 0x334c5
- (id)displayName;	// 0x12a29
- (id)displayNameForMailboxUid:(id)mailboxUid;	// 0x3346d
- (BOOL)containsMailboxes;	// 0x2e89d
- (BOOL)_resetSpecialMailboxes;	// 0xe65d
- (void)resetSpecialMailboxes;	// 0xe64d
- (id)mailboxPathExtension;	// 0x2e8a1
- (BOOL)canCreateNewMailboxes;	// 0x2e8ad
- (BOOL)newMailboxNameIsAcceptable:(id)acceptable reasonForFailure:(id *)failure;	// 0x333d5
- (BOOL)canMailboxBeRenamed:(id)renamed;	// 0x3337d
- (BOOL)canMailboxBeDeleted:(id)deleted;	// 0x33345
- (BOOL)moveMailbox:(id)mailbox intoParent:(id)parent;	// 0x33325
- (BOOL)renameMailbox:(id)mailbox newName:(id)name;	// 0x332dd
- (BOOL)renameMailbox:(id)mailbox newName:(id)name parent:(id)parent;	// 0x32d11
- (BOOL)deleteMailbox:(id)mailbox;	// 0x32819
- (void)_resetAllMailboxURLs:(BOOL)urls;	// 0x32685
- (void)resetMailboxURLs;	// 0x32671
- (void)setUsername:(id)username;	// 0x325d9
- (void)setHostname:(id)hostname;	// 0x32541
- (BOOL)isHostnameEquivalentTo:(id)to;	// 0x324f9
- (BOOL)isAccountClassEquivalentTo:(id)to;	// 0x324a9
- (void)setPortNumber:(unsigned)number;	// 0x323c5
- (void)setValueInAccountProperties:(id)accountProperties forKey:(id)key;	// 0x32295
- (void)postUserInfoHasChangedForMailboxUid:(id)mailboxUid userInfo:(id)info;	// 0x32209
// converted property setter: - (void)setConnectionError:(id)error;	// 0x13001
// converted property getter: - (id)connectionError;	// 0x16ac5
- (id)storeForMailboxUid:(id)mailboxUid;	// 0x8909
- (void)unregisterStore:(id)store forUid:(id)uid;	// 0x32195
- (Class)storeClass;	// 0x32169
- (Class)storeClassForMailbox:(id)mailbox;	// 0x8ad5
- (void)setUnreadCount:(unsigned)count forMailbox:(id)mailbox;	// 0x32061
- (BOOL)hasUnreadMail;	// 0x32031
- (id)mailboxUidForRelativePath:(id)relativePath create:(BOOL)create;	// 0x84a1
- (id)_childOfMailbox:(id)mailbox withComponentName:(id)componentName;	// 0x87a9
- (id)mailboxUidForRelativePath:(id)relativePath create:(BOOL)create withOption:(int)option;	// 0x84c5
- (id)URLString;	// 0x31fb5
- (id)mailboxUidForInfo:(id)info;	// 0x19075
- (id)mailboxUidForURL:(id)url;	// 0x31f31
- (void)emptyTrash;	// 0x11e75
- (void)startListeningForNotifications;	// 0x18a5d
- (void)stopListeningForNotifications;	// 0x2e8b1
- (void)transferNotificationSessionToAccount:(id)account;	// 0x2e8b5
- (BOOL)updateEmailAliases;	// 0x20461
- (void)systemDidWake;	// 0x2e8b9
- (void)systemWillSleep;	// 0x31ee1
- (int)libraryID;	// 0x31dd9
- (BOOL)canFetchMessagesByNumericRange;	// 0x2e8bd
- (BOOL)canForwardWithoutDownload;	// 0x2e8c1
// converted property setter: - (void)setLibrary:(id)library;	// 0x4479
// converted property getter: - (id)library;	// 0x9d05
- (void)setupLibrary;	// 0x3e95
- (BOOL)shouldAppearInMailSettings;	// 0x2e8c9
- (BOOL)supportsAppend;	// 0x2e8cd
- (BOOL)supportsRemoteAppend;	// 0x2e8d1
- (BOOL)supportsMailboxEditing;	// 0x2e8d5
// converted property setter: - (void)setCachePolicy:(int)policy;	// 0x31d81
// converted property getter: - (int)cachePolicy;	// 0x31ced
- (id)displayUsername;	// 0x31cdd
- (BOOL)archiveSentMessages;	// 0x31cc5
- (BOOL)supportsMessageFlagging;	// 0x2e8d9
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;	// 0x2e8dd
- (BOOL)deleteInPlaceForAllMailboxes;	// 0x2e8e1
- (BOOL)deleteInPlaceForMailbox:(id)mailbox;	// 0x2e8e5
- (BOOL)supportsArchiving;	// 0x1946d
- (BOOL)canArchiveForMailbox:(id)mailbox;	// 0x2e8e9
- (int)archiveDestinationForMailbox:(id)mailbox;	// 0x31c5d
- (id)displayNameUsingSpecialNamesForMailboxUid:(id)mailboxUid;	// 0x2e8ed
- (id)meetingStorePersistentID;	// 0x1cebd
- (BOOL)reconstituteOrphanedMeetingInMessage:(id)message;	// 0x2e8f1
- (BOOL)hasEnoughInformationForEasySetup;	// 0x31bf5
- (BOOL)_canReceiveNewMailNotifications;	// 0x2e8f9
- (BOOL)willPerformActionForChokePoint:(id)chokePoint coalescePoint:(id)point result:(id *)result;	// 0x16255
- (void)didFinishActionForChokePoint:(id)chokePoint coalescePoint:(id)point withResult:(id)result;	// 0x169a1
- (void)addUserFocusMailbox:(id)mailbox;	// 0xf9cd
- (void)removeUserFocusMailbox:(id)mailbox;	// 0x2e8fd
- (void)deliveryAccountWillBeRemoved:(id)deliveryAccount;	// 0x31ba9
- (id)pushedMailboxUids;	// 0x6955
- (BOOL)_setPath:(id)path;	// 0x56e5
- (BOOL)areAnyDataclassesConsideredActiveEnabled;	// 0x31aa5
// converted property getter: - (BOOL)isActive;	// 0x3cf1
// converted property setter: - (void)setIsActive:(BOOL)active;	// 0x3b3d
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x31a31
- (int)_emptyFrequencyForKey:(id)key defaultValue:(id)value;	// 0x11eed
- (void)_postMailAccountsHaveChangedIfNeeded;	// 0x319b1
- (id)_pathComponentForUidName:(id)uidName;	// 0xe60d
- (id)_uidNameForPathComponent:(id)pathComponent;	// 0xe4fd
- (id)_copyMailboxUidWithParent:(id)parent name:(id)name attributes:(unsigned)attributes existingMailboxUid:(id)uid dictionary:(id)dictionary;	// 0x79ed
- (void)_synchronouslyLoadListingForParent:(id)parent;	// 0x2e901
- (BOOL)_loadMailboxListingIntoCache:(id)cache attributes:(unsigned)attributes children:(id)children parent:(id)parent;	// 0x7435
- (void)_mailboxesWereRemovedFromTree:(id)tree withFileSystemPaths:(id)fileSystemPaths;	// 0x31985
- (BOOL)_usesMailboxCache;	// 0x73c9
// converted property getter: - (id)mailboxCachePath;	// 0x73cd
// converted property setter: - (void)setMailboxCachePath:(id)path;	// 0x3193d
- (void)_loadEntriesFromFileSystemPath:(id)fileSystemPath parent:(id)parent;	// 0x31635
- (void)_writeMailboxCacheWithPrejudice:(BOOL)prejudice;	// 0x3138d
- (BOOL)_setChildren:(id)children forMailboxUid:(id)mailboxUid;	// 0x7e4d
- (BOOL)_deleteMailbox:(id)mailbox;	// 0x2e905
- (id)description;	// 0x312f5
- (void)_backgroundFetchCompletedCount:(unsigned)count;	// 0x312c9
- (void)_backgroundFetchCompleted;	// 0x312b5
- (id)_defaultSpecialMailboxNameForType:(int)type;	// 0x6c0d
- (id *)_specialMailboxIvarOfType:(int)type;	// 0x6a8d
- (id)_cachedSpecialMailboxOfType:(int)type;	// 0x6a15
- (BOOL)_assignSpecialMailboxToAppropriateIvar:(id)appropriateIvar forType:(int)type delete:(BOOL)aDelete;	// 0x7cd5
- (void)_setSpecialMailboxName:(id)name forType:(int)type;	// 0xe93d
- (void)_setSpecialMailbox:(id)mailbox forType:(int)type;	// 0x31215
- (id)_specialMailboxUidWithType:(int)type create:(BOOL)create;	// 0xe8d1
- (BOOL)_canEmptyMessagesFromMailboxUid:(id)mailboxUid;	// 0x12479
- (BOOL)_shouldLogDeleteActivity;	// 0x12399
- (id)_infoForMatchingURL:(id)matchingURL;	// 0x310fd
- (id)_URLScheme;	// 0x2e909
- (id)_URLForInfo:(id)info;	// 0x927d
- (id)_mailboxPathPrefix;	// 0xe601
- (void)_readCustomInfoFromMailboxCache:(id)mailboxCache;	// 0x7431
- (void)_writeCustomInfoToMailboxCache:(id)mailboxCache;	// 0x2e90d
- (id)URLForMessage:(id)message;	// 0x1ce21
- (BOOL)_cleanInboxDuplication:(id)duplication;	// 0x7e49
- (id)_deliveryAccountCreateIfNeeded:(BOOL)needed;	// 0x16c29
- (id)_copyMailboxWithParent:(id)parent name:(id)name attributes:(unsigned)attributes dictionary:(id)dictionary;	// 0x712d
- (id)newMailboxWithParent:(id)parent name:(id)name;	// 0x31081
- (id)_newMailboxWithParent:(id)parent name:(id)name attributes:(unsigned)attributes dictionary:(id)dictionary withCreationOption:(int)creationOption;	// 0x31071
- (BOOL)moveMessages:(id)messages fromMailbox:(id)mailbox toMailbox:(id)mailbox3 markAsRead:(BOOL)read unsuccessfulOnes:(id)ones;	// 0x2e911
- (id)_localMailboxNameForType:(int)type usingDisplayName:(id)name;	// 0x30f81
- (BOOL)shouldRestoreMessagesAfterFailedDelete;	// 0x2e915
- (BOOL)shouldFetchBodiesWhenMovingToTrash;	// 0x2e919
- (BOOL)shouldWipeLocalStorageOnRebuild;	// 0x2e91d
- (id)iconString;	// 0x30e51
- (id)saveSentFolder;	// 0x2e921
- (id)valueInAccountLookAsidePropertiesForKey:(id)key;	// 0x30da1
- (void)setValueInAccountLookAsideProperties:(id)accountLookAsideProperties forKey:(id)key;	// 0x30c81
- (void)_setValueInAccountLookAsideProperties:(id)accountLookAsideProperties forKey:(id)key subKey:(id)key3;	// 0x30b25
- (id)signingIdentityPersistentReferenceForAddress:(id)address;	// 0x30aed
- (void)setSigningIdentityPersistentReference:(id)reference forAddress:(id)address;	// 0x30ac5
- (id)encryptionIdentityPersistentReferenceForAddress:(id)address;	// 0x30a8d
- (void)setEncryptionIdentityPersistentReference:(id)reference forAddress:(id)address;	// 0x30a65
- (BOOL)secureMIMEEnabled;	// 0x1916d
- (int)secureCompositionSigningPolicyForAddress:(id)address;	// 0x309cd
- (int)secureCompositionEncryptionPolicyForAddress:(id)address;	// 0x30935
- (id)copyDataForRemoteEncryptionCertificatesForAddress:(id)address error:(id *)error;	// 0x2e925
- (BOOL)restrictedFromTransferingMessagesToOtherAccounts;	// 0x20465
- (BOOL)restrictedFromSendingExternally;	// 0x20499
@end