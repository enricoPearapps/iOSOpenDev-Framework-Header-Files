/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */


#import <iWorkImport/iWorkImport-Structs.h>


@protocol GQPObjectReader <NSObject>
- (int)beginReadingFromReader:(xmlTextReader *)reader processor:(id)processor;
- (int)doneReading:(id)reading;
@end