#import "GestureRecognizer.h"

@interface GestureRecognitionModel : NSObject

@property GestureRecognizer *gestureDetector;

#pragma mark -
#pragma mark Setup
- (void)setup;
#pragma mark -

#pragma mark -
#pragma mark Gesture Data
- (void)fetchAndLoadGestures;
- (BOOL)fetchGestureDictionary;
- (void)saveGestureDictionary;
#pragma mark -

#pragma mark -
#pragma mark Setup Utilities
- (void)saveGestureWithStrokes:(NSMutableArray *)gestureStrokes andIdentity:(NSString *)identity;
- (Gesture *)getGestureWithIdentity:(NSString *)identity;
- (void)deleteGestureWithName:(NSString *)identity;
#pragma mark -

@end
