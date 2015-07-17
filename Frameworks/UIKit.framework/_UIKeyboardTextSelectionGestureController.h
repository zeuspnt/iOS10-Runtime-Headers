/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKeyboardTextSelectionGestureController : NSObject <UIGestureRecognizerDelegate, _UIPanOrFlickGestureRecognizerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    }  _accumulatedAcceleration;
    struct CGPoint { 
        float x; 
        float y; 
    }  _accumulatedBounding;
    NSMutableArray * _activeGestures;
    struct CGPoint { 
        float x; 
        float y; 
    }  _cursorLocationBase;
    <_UIKeyboardTextSelectionGestureControllerDelegate> * _delegate;
    BOOL  _didSuppressSelectionGrabbers;
    BOOL  _isLongPressing;
    BOOL  _isPanning;
    double  _lastPanTimestamp;
    struct CGPoint { 
        float x; 
        float y; 
    }  _lastPanTranslation;
    double  _lastPressTimestamp;
    int  _panGestureState;
    int  _previousRepeatedGranularity;
    BOOL  _suppressTwoFingerPan;
    double  _twoFingerTapTimestamp;
    BOOL  _wasNestedPinchingDisabled;
    BOOL  _wasScrollingEnabled;
}

@property (nonatomic) struct CGPoint { float x1; float x2; } accumulatedAcceleration;
@property (nonatomic) struct CGPoint { float x1; float x2; } accumulatedBounding;
@property (nonatomic) NSMutableArray *activeGestures;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIKeyboardTextSelectionGestureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSuppressSelectionGrabbers;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isLongPressing;
@property (nonatomic) BOOL isPanning;
@property (nonatomic) double lastPanTimestamp;
@property (nonatomic) struct CGPoint { float x1; float x2; } lastPanTranslation;
@property (nonatomic) double lastPressTimestamp;
@property (nonatomic) int panGestureState;
@property (nonatomic) int previousRepeatedGranularity;
@property (nonatomic, readonly) _UIKeyboardTextSelectionController *selectionController;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressTwoFingerPan;
@property (nonatomic) double twoFingerTapTimestamp;
@property (nonatomic) BOOL wasNestedPinchingDisabled;
@property (nonatomic) BOOL wasScrollingEnabled;

+ (id)sharedInstance;

- (void)_cleanupDeadGesturesIfNecessary;
- (void)_didEndIndirectSelectionGesture:(id)arg1;
- (void)_granularityExpandingGestureWithTimeInterval:(double)arg1;
- (void)_willBeginIndirectSelectionGesture:(id)arg1;
- (struct CGPoint { float x1; float x2; })acceleratedTranslation:(struct CGPoint { float x1; float x2; })arg1 velocity:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })accumulatedAcceleration;
- (struct CGPoint { float x1; float x2; })accumulatedBounding;
- (id)activeGestures;
- (id)addOneFingerTextSelectionGesturesToView:(id)arg1;
- (id)addTwoFingerPanRecognizerToView:(id)arg1;
- (id)addTwoFingerTapRecognizerToView:(id)arg1;
- (id)addTwoFingerTextSelectionGesturesToView:(id)arg1;
- (void)beginCursorManipulationFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)beginOneFingerSelectWithTranslation:(struct CGPoint { float x1; float x2; })arg1 executionContext:(id)arg2;
- (void)beginTwoFingerCursorPanWithTranslation:(struct CGPoint { float x1; float x2; })arg1 executionContext:(id)arg2;
- (void)beginTwoFingerLongPressWithTranslation:(struct CGPoint { float x1; float x2; })arg1 executionContext:(id)arg2;
- (void)beginTwoFingerPanWithTranslation:(struct CGPoint { float x1; float x2; })arg1 executionContext:(id)arg2;
- (struct CGPoint { float x1; float x2; })boundedTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (void)cancelTwoFingerLongPressWithExecutionContext:(id)arg1;
- (void)cancelTwoFingerPanWithExecutionContext:(id)arg1;
- (void)clearKeyboardTouchesForGesture:(id)arg1;
- (struct CGPoint { float x1; float x2; })cursorLocationForTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (void)didRemoveSelectionController;
- (BOOL)didSuppressSelectionGrabbers;
- (void)disableEnclosingScrollViewScrolling;
- (void)enableEnclosingScrollViewNestedPinching;
- (void)endOneFingerSelectWithExecutionContext:(id)arg1;
- (void)endTwoFingerLongPressWithExecutionContext:(id)arg1;
- (void)endTwoFingerPanWithExecutionContext:(id)arg1;
- (void)finishTwoFingerLongPressWithExecutionContext:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)gestureRecognizerShouldBeginResponse:(id)arg1;
- (void)handleTwoFingerFlickInDirection:(int)arg1 executionContext:(id)arg2;
- (void)indirectCursorPanGestureWithState:(int)arg1 withTranslation:(struct CGPoint { float x1; float x2; })arg2 withFlickDirection:(unsigned int)arg3;
- (void)indirectPanGestureWithState:(int)arg1 withTranslation:(struct CGPoint { float x1; float x2; })arg2 withFlickDirection:(unsigned int)arg3;
- (id)init;
- (BOOL)isLongPressing;
- (BOOL)isPanning;
- (double)lastPanTimestamp;
- (struct CGPoint { float x1; float x2; })lastPanTranslation;
- (double)lastPressTimestamp;
- (int)layoutDirectionFromFlickDirection:(unsigned int)arg1;
- (int)panGestureState;
- (int)previousRepeatedGranularity;
- (void)redisableEnclosingScrollViewNestedPinching;
- (id)selectionController;
- (void)setAccumulatedAcceleration:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAccumulatedBounding:(struct CGPoint { float x1; float x2; })arg1;
- (void)setActiveGestures:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidSuppressSelectionGrabbers:(BOOL)arg1;
- (void)setIsLongPressing:(BOOL)arg1;
- (void)setIsPanning:(BOOL)arg1;
- (void)setLastPanTimestamp:(double)arg1;
- (void)setLastPanTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLastPressTimestamp:(double)arg1;
- (void)setPanGestureState:(int)arg1;
- (void)setPreviousRepeatedGranularity:(int)arg1;
- (void)setSuppressTwoFingerPan:(BOOL)arg1;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (void)setWasNestedPinchingDisabled:(BOOL)arg1;
- (void)setWasScrollingEnabled:(BOOL)arg1;
- (BOOL)suppressTwoFingerPan;
- (void)twoFingerLongPressGestureWithState:(int)arg1 withTranslation:(struct CGPoint { float x1; float x2; })arg2;
- (void)twoFingerPan:(id)arg1;
- (id)twoFingerPanRecognizer;
- (void)twoFingerTap:(id)arg1;
- (id)twoFingerTapRecognizer;
- (double)twoFingerTapTimestamp;
- (void)updateOneFingerSelectWithTranslation:(struct CGPoint { float x1; float x2; })arg1 executionContext:(id)arg2;
- (void)updateTwoFingerLongPressWithTranslation:(struct CGPoint { float x1; float x2; })arg1 executionContext:(id)arg2;
- (void)updateTwoFingerPanWithTranslation:(struct CGPoint { float x1; float x2; })arg1 executionContext:(id)arg2;
- (BOOL)wasNestedPinchingDisabled;
- (BOOL)wasScrollingEnabled;
- (void)willRemoveSelectionController;

@end