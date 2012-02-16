/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/GQLassoGenerator.h>
#import <iWorkImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface GQHLasso : XXUnknownSuperclass <GQLassoGenerator> {
}
+ (int)beginDocument:(id)document state:(id)state;	// 0x2a68d
+ (int)endDocument:(id)document state:(id)state;	// 0x2a6ed
+ (int)handleStylesheet:(id)stylesheet state:(id)state;	// 0x2a745
+ (int)beginWorkspace:(const char *)workspace state:(id)state;	// 0x2a78d
+ (int)endWorkspace:(id)workspace;	// 0x2a7dd
+ (int)handleWorkspaceStyle:(id)style state:(id)state;	// 0x2a689
+ (Class)beginWorkspacePage:(id)page state:(id)state;	// 0x2a7c1
+ (int)handleDrawableZOrder:(const char *)order state:(id)state;	// 0x2a905
@end