/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/XXUnknownSuperclass.h>
#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUPurchaseManagerDelegate.h>
#import <iTunesStoreUI/MFMailComposeViewControllerDelegate.h>

@class NSArray, NSString, NSMutableArray, MFMailComposeViewController, UIViewController, ISURLOperationPool, NSMutableDictionary, SUImageCache, SUPurchaseManager, SUViewControllerFactory, SUScriptExecutionContext;

@interface SUClientController : XXUnknownSuperclass <MFMailComposeViewControllerDelegate, SUPurchaseManagerDelegate> {
	BOOL _active;	// 4 = 0x4
	NSString *_clientIdentifier;	// 8 = 0x8
	dispatch_queue_s *_dispatchQueue;	// 12 = 0xc
	NSMutableArray *_downloadManagers;	// 16 = 0x10
	SUImageCache *_imageCache;	// 20 = 0x14
	ISURLOperationPool *_imagePool;	// 24 = 0x18
	NSString *_localStoreFrontAtLastSuspend;	// 28 = 0x1c
	MFMailComposeViewController *_mailComposeViewController;	// 32 = 0x20
	CFArrayRef _offeredAssetTypes;	// 36 = 0x24
	NSArray *_overlayConfigurations;	// 40 = 0x28
	NSMutableArray *_preorderManagers;	// 44 = 0x2c
	SUPurchaseManager *_purchaseManager;	// 48 = 0x30
	UIViewController *_rootViewController;	// 52 = 0x34
	SUScriptExecutionContext *_scriptExecutionContext;	// 56 = 0x38
	NSString *_synchedStoreFrontAtLastSuspend;	// 60 = 0x3c
	NSMutableDictionary *_urlBagKeys;	// 64 = 0x40
	SUViewControllerFactory *_viewControllerFactory;	// 68 = 0x44
@private
	ISURLOperationPool *_imageOperationPool;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) BOOL storeFrontDidChangeSinceLastSuspend;	// G=0xb8791; 
@property(readonly, assign, nonatomic) NSString *storeContentLanguage;	// G=0xb85c1; 
@property(readonly, assign, nonatomic) SUScriptExecutionContext *scriptExecutionContext;	// G=0xb8571; @synthesize=_scriptExecutionContext
@property(retain, nonatomic) ISURLOperationPool *imageOperationPool;	// G=0xb80d5; S=0xb9435; @synthesize=_imageOperationPool
@property(retain, nonatomic) SUImageCache *imageCache;	// G=0xb8085; S=0xb9411; @synthesize=_imageCache
@property(readonly, assign, nonatomic, getter=isActive) BOOL active;	// G=0xb9389; @synthesize=_active
@property(retain, nonatomic) SUViewControllerFactory *viewControllerFactory;	// G=0xb93dd; S=0xb93ed; @synthesize=_viewControllerFactory
@property(copy, nonatomic) NSString *userAgent;	// G=0xb7c85; S=0xb7c05; 
@property(retain, nonatomic) UIViewController *rootViewController;	// G=0xb93a9; S=0xb93b9; @synthesize=_rootViewController
// iOSOpenDev: remove copy from: offeredAssetTypes
@property(nonatomic) CFArrayRef offeredAssetTypes;	// G=0xb7799; S=0xb7b45; 
@property(readonly, assign, nonatomic, getter=isStoreEnabled) BOOL storeEnabled;	// G=0xb7679; 
@property(readonly, assign, nonatomic) NSString *clientIdentifier;	// G=0xb9399; @synthesize=_clientIdentifier
+ (id)sharedController;	// 0xb6a0d
+ (void)setSharedController:(id)controller;	// 0xb69cd
// declared property setter: - (void)setImageOperationPool:(id)pool;	// 0xb9435
// declared property setter: - (void)setImageCache:(id)cache;	// 0xb9411
// declared property setter: - (void)setViewControllerFactory:(id)factory;	// 0xb93ed
// declared property getter: - (id)viewControllerFactory;	// 0xb93dd
// declared property setter: - (void)setRootViewController:(id)controller;	// 0xb93b9
// declared property getter: - (id)rootViewController;	// 0xb93a9
// declared property getter: - (id)clientIdentifier;	// 0xb9399
// declared property getter: - (BOOL)isActive;	// 0xb9389
- (void)_reloadUserDefaultsFromURLBag;	// 0xb92f9
- (void)_reloadScriptExecutionContextFromURLBag;	// 0xb91ad
- (void)_reloadOverlayConfigurationsFromURLBag;	// 0xb8fd5
- (void)_purgeCaches;	// 0xb8f55
- (id)_ntsQueueSessionWithQueue:(id)queue fromArray:(id)array;	// 0xb8eb1
- (id)_ntsQueueSessionWithManagerOptions:(id)managerOptions fromArray:(id)array;	// 0xb8df9
- (id)_ntsQueueSessionWithDownloadKinds:(id)downloadKinds fromArray:(id)array;	// 0xb8d41
- (void)_ntsEndQueueSession:(id)session fromArray:(id)array;	// 0xb8cf9
- (id)_newComposeReviewViewControllerForButtonAction:(id)buttonAction;	// 0xb8be5
- (id)_newAccountViewControllerForButtonAction:(id)buttonAction;	// 0xb8ae1
- (void)_memoryWarningNotification:(id)notification;	// 0xb8aa1
- (void)bagDidLoadNotification:(id)bag;	// 0xb8a61
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0xb88a1
- (void)purchaseManagerWillBeginUpdates:(id)purchaseManager;	// 0xb889d
- (void)purchaseManagerDidEndUpdates:(id)purchaseManager;	// 0xb8899
- (void)purchaseManager:(id)manager willAddPurchases:(id)purchases;	// 0xb8895
- (void)purchaseManager:(id)manager failedToAddPurchases:(id)addPurchases;	// 0xb8891
- (void)purchaseManager:(id)manager didAddPurchases:(id)purchases;	// 0xb888d
// declared property getter: - (BOOL)storeFrontDidChangeSinceLastSuspend;	// 0xb8791
// declared property getter: - (id)storeContentLanguage;	// 0xb85c1
// declared property getter: - (id)scriptExecutionContext;	// 0xb8571
- (BOOL)performActionForDialog:(id)dialog button:(id)button;	// 0xb819d
// declared property getter: - (id)imageOperationPool;	// 0xb80d5
// declared property getter: - (id)imageCache;	// 0xb8085
- (void)presentMailComposeViewController:(id)controller animated:(BOOL)animated;	// 0xb8055
- (void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;	// 0xb7ffd
- (BOOL)isComposingEmail;	// 0xb7fe5
- (void)dismissMailComposeViewControllerAnimated:(BOOL)animated;	// 0xb7fb9
- (void)composeEmailWithSubject:(id)subject body:(id)body animated:(BOOL)animated;	// 0xb7ed1
- (void)composeEmailWithSubject:(id)subject body:(id)body;	// 0xb7ead
- (void)composeEmailByRestoringAutosavedMessage;	// 0xb7d71
- (void)autosaveMessageWithCompletionBlock:(id)completionBlock;	// 0xb7cb9
// declared property getter: - (id)userAgent;	// 0xb7c85
- (id)URLBagKeyForIdentifier:(id)identifier;	// 0xb7c3d
// declared property setter: - (void)setUserAgent:(id)agent;	// 0xb7c05
- (void)setURLBagKey:(id)key forIdentifier:(id)identifier;	// 0xb7b79
// declared property setter: - (void)setOfferedAssetTypes:(CFArrayRef)types;	// 0xb7b45
- (void)resignActive;	// 0xb7a85
- (BOOL)reportAProblemForItemIdentifier:(unsigned long long)itemIdentifier;	// 0xb7a81
- (BOOL)presentOverlayBackgroundViewController:(id)controller;	// 0xb7a7d
- (void)presentExternalURLViewController:(id)controller;	// 0xb7a79
- (BOOL)presentAccountViewController:(id)controller showNavigationBar:(BOOL)bar animated:(BOOL)animated;	// 0xb7a75
- (BOOL)presentAccountViewController:(id)controller animated:(BOOL)animated;	// 0xb7a55
- (id)overlayConfigurationForStorePage:(id)storePage;	// 0xb791d
- (id)overlayBackgroundViewController;	// 0xb7919
- (BOOL)openURL:(id)url inClientWithIdentifier:(id)identifier;	// 0xb7851
- (BOOL)openURL:(id)url;	// 0xb77c1
- (BOOL)openClientURL:(id)url;	// 0xb77a9
// declared property getter: - (CFArrayRef)offeredAssetTypes;	// 0xb7799
- (id)newScriptInterface;	// 0xb7765
- (BOOL)libraryContainsItemIdentifier:(unsigned long long)identifier;	// 0xb7761
// declared property getter: - (BOOL)isStoreEnabled;	// 0xb7679
- (BOOL)gotoStorePage:(id)page animated:(BOOL)animated;	// 0xb7675
- (void)exitStoreWithReason:(int)reason;	// 0xb7641
- (void)endPreorderManagerSessionWithManager:(id)manager;	// 0xb7561
- (void)endDownloadManagerSessionForManager:(id)manager;	// 0xb7481
- (BOOL)displayClientURL:(id)url;	// 0xb747d
- (BOOL)dismissTopViewControllerAnimated:(BOOL)animated;	// 0xb7479
- (void)dismissOverlayBackgroundViewController;	// 0xb7475
- (BOOL)composeReviewWithViewController:(id)viewController animated:(BOOL)animated;	// 0xb73dd
- (void)cancelAllOperations;	// 0xb73a9
- (id)beginPreorderManagerSessionWithItemKinds:(id)itemKinds;	// 0xb70c1
- (id)beginDownloadManagerSessionWithManagerOptions:(id)managerOptions;	// 0xb6da9
- (id)beginDownloadManagerSessionForDownloadKind:(id)downloadKind;	// 0xb6ad5
- (void)becomeActive;	// 0xb6a41
- (void)dealloc;	// 0xb672d
- (id)initWithClientIdentifier:(id)clientIdentifier;	// 0xb6251
- (id)init;	// 0xb623d
@end
