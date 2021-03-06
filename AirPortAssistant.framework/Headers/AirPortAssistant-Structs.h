/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

typedef struct ACPBrowserSession *ACPBrowserSessionRef;

typedef struct AutoGuessContext AutoGuessContext;

typedef struct AssistantContext AssistantContext;

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __dispatch_semaphore_s__
#define __dispatch_semaphore_s__ 1
typedef struct dispatch_semaphore_s dispatch_semaphore_s;
#endif

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __dispatch_source_s__
#define __dispatch_source_s__ 1
typedef struct dispatch_source_s dispatch_source_s;
#endif

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __CFDictionaryRef__
#define __CFDictionaryRef__ 1
typedef const struct __CFDictionary *CFDictionaryRef;
#endif
typedef struct AssistantCallbackContext {
	AssistantContext *_field1;
	int _field2;
	CFDictionaryRef _field3;
	int _field4;
	dispatch_semaphore_s *_field5;
	dispatch_source_s *_field6;
	void *_field7;
} AssistantCallbackContext;

typedef struct {
	unsigned ethernetPortCount;
	unsigned productID;
	unsigned productFamily;
} XXStruct_bxvjXB;

typedef struct WiFiShimContext WiFiShimContext;

typedef struct BSConfigurationContext *BSConfigurationContextRef;

typedef struct _BaseStation BaseStation;

typedef struct StepByStepContext StepByStepContext;

typedef struct __CTFont *CTFontRef;

typedef struct __CTLine *CTLineRef;

typedef struct {
	CGPoint _field1;
	CGPoint _field2;
	CGPoint _field3;
	CGPoint _field4;
} XXStruct_BUymIA;


