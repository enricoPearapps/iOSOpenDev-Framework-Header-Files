/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMDaemonCore.framework/IMDaemonCore
 */



@protocol IMServiceSessionProtocol
- (void)validateProfile;
- (void)validateAlias:(id)alias;
- (void)removeAlias:(id)alias;
- (void)addAlias:(id)alias;
- (void)relay:(id)relay sendCancel:(id)cancel toPerson:(id)person;
- (void)relay:(id)relay sendUpdate:(id)update toPerson:(id)person;
- (void)relay:(id)relay sendInitateRequest:(id)request toPerson:(id)person;
- (void)sendAVMessageToPerson:(id)person sessionID:(unsigned)anId type:(unsigned)type userInfo:(id)info conference:(id)conference;
- (void)sendVCUpdate:(id)update toPerson:(id)person conference:(id)conference;
- (void)sendCounterProposalToPerson:(id)person properties:(id)properties conference:(id)conference;
- (void)cancelVCRequestWithPerson:(id)person properties:(id)properties conference:(id)conference;
- (void)respondToVCInvitationWithPerson:(id)person properties:(id)properties conference:(id)conference;
- (void)requestVCWithPerson:(id)person properties:(id)properties conference:(id)conference;
- (void)sendCommand:(id)command withProperties:(id)properties toPerson:(id)person;
- (void)sendData:(id)data toPerson:(id)person;
- (void)sendFileTransfer:(id)transfer toPerson:(id)person;
- (void)passwordUpdated;
- (void)setBlockIdleStatus:(BOOL)status;
- (void)setBlockList:(id)list;
- (void)setAllowList:(id)list;
- (void)setBlockingMode:(unsigned)mode;
- (void)setProperties:(id)properties ofParticipant:(id)participant inChat:(id)chat style:(unsigned char)style;
- (void)sendReadReceiptForMessage:(id)message toChat:(id)chat style:(unsigned char)style;
- (void)sendMessage:(id)message toChat:(id)chat style:(unsigned char)style;
- (void)cancelMessage:(id)message toChat:(id)chat style:(unsigned char)style;
- (void)declineInvitationToChat:(id)chat style:(unsigned char)style;
- (void)invitePerson:(id)person withMessage:(id)message toChat:(id)chat style:(unsigned char)style;
- (void)leaveChat:(id)chat style:(unsigned char)style;
- (void)joinChat:(id)chat style:(unsigned char)style joinProperties:(id)properties;
- (void)updateAuthorizationCredentials:(id)credentials token:(id)token;
- (void)setValue:(id)value ofProperty:(id)property ofPerson:(id)person;
- (void)requestProperty:(id)property ofPerson:(id)person;
- (void)stopWatchingBuddy:(id)buddy;
- (void)startWatchingBuddy:(id)buddy;
- (void)requestSubscriptionTo:(id)to;
- (void)acceptSubscriptionRequest:(BOOL)request from:(id)from;
- (void)renameGroup:(id)group to:(id)to;
- (void)changeGroup:(id)group changes:(id)changes;
- (void)changeGroups:(id)groups;
- (void)requestGroups;
- (void)unregisterAccount;
- (void)registerAccount;
- (void)authenticateAccount;
- (void)resumeBuddyUpdates;
- (void)holdBuddyUpdates;
- (void)logout;
- (void)login;
- (void)autoReconnect;
- (void)autoLogin;
@end

