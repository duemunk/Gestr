#import <Foundation/Foundation.h>
#import "MultitouchSupport.h"
#import "MultitouchTouch.h"
#import "MultitouchEvent.h"
#import "MultitouchListener.h"

@interface MultitouchManager : NSObject

@property (readonly) BOOL forwardingMultitouchEventsToListeners;

- (void)startForwardingMultitouchEventsToListeners;
- (void)stopForwardingMultitouchEventsToListeners;
- (void)removeMultitouchListenersWithTarget:(id)target andCallback:(SEL)callback;
- (void)addMultitouchListenerWithTarget:(id)target callback:(SEL)callback andThread:(NSThread *)thread;
+ (BOOL)systemIsMultitouchCapable;
+ (MultitouchManager *)sharedMultitouchManager;

@end
