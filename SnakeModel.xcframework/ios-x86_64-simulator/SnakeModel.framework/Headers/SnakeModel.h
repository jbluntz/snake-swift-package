#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SnakeModelKotlinThrowable, SnakeModelDirection, SnakeModelSnakeViewModel, SnakeModelPoint, SnakeModelNullableStateFlowWrapper<T>, SnakeModelSnake, SnakeModelStateFlowWrapper<T>, SnakeModelKotlinEnum<E>, SnakeModelKotlinArray<T>, SnakeModelKotlinUnit, SnakeModelKotlinx_coroutines_coreCancellationException, SnakeModelKotlinException, SnakeModelKotlinRuntimeException, SnakeModelKotlinIllegalStateException, SnakeModelKotlinx_coroutines_coreAtomicDesc, SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, SnakeModelKotlinx_coroutines_coreAtomicOp<__contravariant T>, SnakeModelKotlinx_coroutines_coreOpDescriptor, SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode, SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol SnakeModelKotlinx_coroutines_coreCoroutineScope, SnakeModelKotlinx_coroutines_coreFlow, SnakeModelKotlinx_coroutines_coreJob, SnakeModelKotlinx_coroutines_coreStateFlow, SnakeModelISnakeViewModel, SnakeModelKotlinComparable, SnakeModelKotlinCoroutineContext, SnakeModelKotlinx_coroutines_coreFlowCollector, SnakeModelKotlinx_coroutines_coreChildHandle, SnakeModelKotlinx_coroutines_coreChildJob, SnakeModelKotlinx_coroutines_coreDisposableHandle, SnakeModelKotlinSequence, SnakeModelKotlinx_coroutines_coreSelectClause0, SnakeModelKotlinCoroutineContextKey, SnakeModelKotlinCoroutineContextElement, SnakeModelKotlinx_coroutines_coreSharedFlow, SnakeModelKotlinIterator, SnakeModelKotlinx_coroutines_coreParentJob, SnakeModelKotlinx_coroutines_coreSelectInstance, SnakeModelKotlinSuspendFunction0, SnakeModelKotlinContinuation, SnakeModelKotlinFunction;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface SnakeModelBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SnakeModelBase (SnakeModelBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SnakeModelMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SnakeModelMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSnakeModelKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SnakeModelNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SnakeModelByte : SnakeModelNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SnakeModelUByte : SnakeModelNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SnakeModelShort : SnakeModelNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SnakeModelUShort : SnakeModelNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SnakeModelInt : SnakeModelNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SnakeModelUInt : SnakeModelNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SnakeModelLong : SnakeModelNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SnakeModelULong : SnakeModelNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SnakeModelFloat : SnakeModelNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SnakeModelDouble : SnakeModelNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SnakeModelBoolean : SnakeModelNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowWrapper")))
@interface SnakeModelFlowWrapper<T> : SnakeModelBase
- (instancetype)initWithScope:(id<SnakeModelKotlinx_coroutines_coreCoroutineScope>)scope flow:(id<SnakeModelKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(scope:flow:)"))) __attribute__((objc_designated_initializer));
- (id<SnakeModelKotlinx_coroutines_coreJob>)subscribeOnEach:(void (^)(T))onEach onError:(void (^)(SnakeModelKotlinThrowable *))onError onComplete:(void (^)(void))onComplete __attribute__((swift_name("subscribe(onEach:onError:onComplete:)")));
@end;

__attribute__((swift_name("ISnakeViewModel")))
@protocol SnakeModelISnakeViewModel
@required
- (void)advance __attribute__((swift_name("advance()")));
- (void)doInitXSize:(float)xSize ySize:(float)ySize __attribute__((swift_name("doInit(xSize:ySize:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)turnDirection:(SnakeModelDirection *)direction __attribute__((swift_name("turn(direction:)")));
@property (readonly) float appleRadius __attribute__((swift_name("appleRadius")));
@property (readonly) id<SnakeModelKotlinx_coroutines_coreFlow> dead __attribute__((swift_name("dead")));
@property (readonly) BOOL isInitialized __attribute__((swift_name("isInitialized")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NullableFlowWrapper")))
@interface SnakeModelNullableFlowWrapper<T> : SnakeModelBase
- (instancetype)initWithScope:(id<SnakeModelKotlinx_coroutines_coreCoroutineScope>)scope flow:(id<SnakeModelKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(scope:flow:)"))) __attribute__((objc_designated_initializer));
- (id<SnakeModelKotlinx_coroutines_coreJob>)subscribeOnEach:(void (^)(T _Nullable))onEach onError:(void (^)(SnakeModelKotlinThrowable *))onError onComplete:(void (^)(void))onComplete __attribute__((swift_name("subscribe(onEach:onError:onComplete:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NullableStateFlowWrapper")))
@interface SnakeModelNullableStateFlowWrapper<T> : SnakeModelBase
- (instancetype)initWithScope:(id<SnakeModelKotlinx_coroutines_coreCoroutineScope>)scope flow:(id<SnakeModelKotlinx_coroutines_coreStateFlow>)flow __attribute__((swift_name("init(scope:flow:)"))) __attribute__((objc_designated_initializer));
- (id<SnakeModelKotlinx_coroutines_coreJob>)subscribeOnEach:(void (^)(T _Nullable))onEach onError:(void (^)(SnakeModelKotlinThrowable *))onError onComplete:(void (^)(void))onComplete __attribute__((swift_name("subscribe(onEach:onError:onComplete:)")));
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SnakeViewModel")))
@interface SnakeModelSnakeViewModel : SnakeModelBase <SnakeModelISnakeViewModel>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)advance __attribute__((swift_name("advance()")));
- (void)doInitXSize:(float)xSize ySize:(float)ySize __attribute__((swift_name("doInit(xSize:ySize:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)turnDirection:(SnakeModelDirection *)direction __attribute__((swift_name("turn(direction:)")));
@property (readonly) id<SnakeModelKotlinx_coroutines_coreStateFlow> apple __attribute__((swift_name("apple")));
@property (readonly) float appleRadius __attribute__((swift_name("appleRadius")));
@property (readonly) id<SnakeModelKotlinx_coroutines_coreFlow> dead __attribute__((swift_name("dead")));
@property (readonly) BOOL isInitialized __attribute__((swift_name("isInitialized")));
@property (readonly) id<SnakeModelKotlinx_coroutines_coreStateFlow> snake __attribute__((swift_name("snake")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SnakeViewModelIos")))
@interface SnakeModelSnakeViewModelIos : SnakeModelBase <SnakeModelISnakeViewModel>
- (instancetype)initWithViewModel:(SnakeModelSnakeViewModel *)viewModel __attribute__((swift_name("init(viewModel:)"))) __attribute__((objc_designated_initializer));
- (void)advance __attribute__((swift_name("advance()")));
- (void)doInitXSize:(float)xSize ySize:(float)ySize __attribute__((swift_name("doInit(xSize:ySize:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)turnDirection:(SnakeModelDirection *)direction __attribute__((swift_name("turn(direction:)")));
@property (readonly) SnakeModelNullableStateFlowWrapper<SnakeModelPoint *> *apple __attribute__((swift_name("apple")));
@property (readonly) float appleRadius __attribute__((swift_name("appleRadius")));
@property (readonly) id<SnakeModelKotlinx_coroutines_coreFlow> dead __attribute__((swift_name("dead")));
@property (readonly) BOOL isInitialized __attribute__((swift_name("isInitialized")));
@property (readonly) SnakeModelStateFlowWrapper<SnakeModelSnake *> *snake __attribute__((swift_name("snake")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateFlowWrapper")))
@interface SnakeModelStateFlowWrapper<T> : SnakeModelBase
- (instancetype)initWithScope:(id<SnakeModelKotlinx_coroutines_coreCoroutineScope>)scope flow:(id<SnakeModelKotlinx_coroutines_coreStateFlow>)flow __attribute__((swift_name("init(scope:flow:)"))) __attribute__((objc_designated_initializer));
- (id<SnakeModelKotlinx_coroutines_coreJob>)subscribeOnEach:(void (^)(T))onEach onError:(void (^)(SnakeModelKotlinThrowable *))onError onComplete:(void (^)(void))onComplete __attribute__((swift_name("subscribe(onEach:onError:onComplete:)")));
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SnakeModelKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SnakeModelKotlinEnum<E> : SnakeModelBase <SnakeModelKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Direction")))
@interface SnakeModelDirection : SnakeModelKotlinEnum<SnakeModelDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SnakeModelDirection *up __attribute__((swift_name("up")));
@property (class, readonly) SnakeModelDirection *down __attribute__((swift_name("down")));
@property (class, readonly) SnakeModelDirection *left __attribute__((swift_name("left")));
@property (class, readonly) SnakeModelDirection *right __attribute__((swift_name("right")));
+ (SnakeModelKotlinArray<SnakeModelDirection *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Point")))
@interface SnakeModelPoint : SnakeModelBase
- (instancetype)initWithX:(float)x y:(float)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
- (float)component1 __attribute__((swift_name("component1()")));
- (float)component2 __attribute__((swift_name("component2()")));
- (SnakeModelPoint *)doCopyX:(float)x y:(float)y __attribute__((swift_name("doCopy(x:y:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SnakeModelPoint *)minusOther:(SnakeModelPoint *)other __attribute__((swift_name("minus(other:)")));
- (SnakeModelPoint *)shiftXDistance:(float)distance __attribute__((swift_name("shiftX(distance:)")));
- (SnakeModelPoint *)shiftYDistance:(float)distance __attribute__((swift_name("shiftY(distance:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Snake")))
@interface SnakeModelSnake : SnakeModelBase
- (instancetype)initWithBaseLength:(float)baseLength start:(SnakeModelPoint *)start direction:(SnakeModelDirection *)direction __attribute__((swift_name("init(baseLength:start:direction:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseLength:(float)baseLength targetLength:(float)targetLength points:(NSArray<SnakeModelPoint *> *)points direction:(SnakeModelDirection *)direction __attribute__((swift_name("init(baseLength:targetLength:points:direction:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsPoint:(SnakeModelPoint *)point __attribute__((swift_name("contains(point:)")));
- (SnakeModelSnake *)growGrowth:(float)growth __attribute__((swift_name("grow(growth:)")));
- (SnakeModelSnake *)move __attribute__((swift_name("move()")));
- (SnakeModelSnake *)turnDirection:(SnakeModelDirection *)direction __attribute__((swift_name("turn(direction:)")));
@property (readonly) NSArray<SnakeModelPoint *> *points __attribute__((swift_name("points")));
@property (readonly) float speed __attribute__((swift_name("speed")));
@property (readonly) float width __attribute__((swift_name("width")));
@end;

@interface SnakeModelDirection (Extensions)
- (BOOL)isOppositeDirection:(SnakeModelDirection *)direction __attribute__((swift_name("isOpposite(direction:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SnakeModelKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SnakeModelKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SnakeModelKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SnakeModelKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(SnakeModelKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SnakeModelKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SnakeModelKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SnakeModelKotlinCoroutineContextElement> _Nullable)getKey:(id<SnakeModelKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SnakeModelKotlinCoroutineContext>)minusKeyKey:(id<SnakeModelKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SnakeModelKotlinCoroutineContext>)plusContext:(id<SnakeModelKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SnakeModelKotlinCoroutineContextElement <SnakeModelKotlinCoroutineContext>
@required
@property (readonly) id<SnakeModelKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol SnakeModelKotlinx_coroutines_coreJob <SnakeModelKotlinCoroutineContextElement>
@required
- (id<SnakeModelKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<SnakeModelKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SnakeModelKotlinx_coroutines_coreCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (SnakeModelKotlinx_coroutines_coreCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SnakeModelKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SnakeModelKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<SnakeModelKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(SnakeModelKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(SnakeModelKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<SnakeModelKotlinx_coroutines_coreJob>)plusOther:(id<SnakeModelKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SnakeModelKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SnakeModelKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SnakeModelKotlinThrowable : SnakeModelBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SnakeModelKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SnakeModelKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SnakeModelKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SnakeModelKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol SnakeModelKotlinx_coroutines_coreSharedFlow <SnakeModelKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol SnakeModelKotlinx_coroutines_coreStateFlow <SnakeModelKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SnakeModelKotlinArray<T> : SnakeModelBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SnakeModelInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SnakeModelKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SnakeModelKotlinException : SnakeModelKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SnakeModelKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SnakeModelKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SnakeModelKotlinRuntimeException : SnakeModelKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SnakeModelKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SnakeModelKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SnakeModelKotlinIllegalStateException : SnakeModelKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SnakeModelKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SnakeModelKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface SnakeModelKotlinCancellationException : SnakeModelKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SnakeModelKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SnakeModelKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SnakeModelKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(SnakeModelKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SnakeModelKotlinUnit : SnakeModelBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SnakeModelKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol SnakeModelKotlinx_coroutines_coreChildHandle <SnakeModelKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(SnakeModelKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol SnakeModelKotlinx_coroutines_coreChildJob <SnakeModelKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<SnakeModelKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCancellationException")))
@interface SnakeModelKotlinx_coroutines_coreCancellationException : SnakeModelKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SnakeModelKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(SnakeModelKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol SnakeModelKotlinSequence
@required
- (id<SnakeModelKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SnakeModelKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<SnakeModelKotlinx_coroutines_coreSelectInstance>)select block:(id<SnakeModelKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SnakeModelKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SnakeModelKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol SnakeModelKotlinx_coroutines_coreParentJob <SnakeModelKotlinx_coroutines_coreJob>
@required
- (SnakeModelKotlinx_coroutines_coreCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SnakeModelKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<SnakeModelKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(SnakeModelKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(SnakeModelKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<SnakeModelKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol SnakeModelKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol SnakeModelKotlinSuspendFunction0 <SnakeModelKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface SnakeModelKotlinx_coroutines_coreAtomicDesc : SnakeModelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SnakeModelKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(SnakeModelKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property SnakeModelKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface SnakeModelKotlinx_coroutines_coreOpDescriptor : SnakeModelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(SnakeModelKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SnakeModelKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : SnakeModelKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) SnakeModelKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol SnakeModelKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SnakeModelKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface SnakeModelKotlinx_coroutines_coreAtomicOp<__contravariant T> : SnakeModelKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) SnakeModelKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode : SnakeModelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(SnakeModelBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SnakeModelBoolean *(^)(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SnakeModelBoolean *(^)(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(SnakeModelBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(SnakeModelBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : SnakeModelKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SnakeModelKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(SnakeModelKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SnakeModelKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SnakeModelKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SnakeModelKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SnakeModelKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
