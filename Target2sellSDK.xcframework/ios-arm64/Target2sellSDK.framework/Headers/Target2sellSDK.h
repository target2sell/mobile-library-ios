#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NSObject, TSDKTarget2SellUserAgent, TSDKLibraryConfiguration, TSDKResource<T>, TSDKT2SError, TSDKResourceError<T>, TSDKResourceSuccess<T>, TSDKRecommendationParameters, TSDKTrackingParameters, TSDKRankParameters, TSDKKotlinThrowable, TSDKKotlinArray<T>, TSDKT2SErrorDefaultError, TSDKT2SErrorEnablerCMPError, TSDKT2SErrorUUIDMissingError, TSDKPlatform, TSDKPlatformCompanion, TSDKKotlinException, TSDKKotlinRuntimeException, TSDKKotlinIllegalStateException;

@protocol TSDKKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface TSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface TSDKBase (TSDKBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface TSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface TSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorTSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface TSDKNumber : NSNumber
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
@interface TSDKByte : TSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface TSDKUByte : TSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface TSDKShort : TSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface TSDKUShort : TSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface TSDKInt : TSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface TSDKUInt : TSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface TSDKLong : TSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface TSDKULong : TSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface TSDKFloat : TSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface TSDKDouble : TSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface TSDKBoolean : TSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibraryConfiguration")))
@interface TSDKLibraryConfiguration : TSDKBase
- (instancetype)initWithContext:(NSObject *)context customerId:(NSString *)customerId userAgent:(TSDKTarget2SellUserAgent *)userAgent enableCMP:(BOOL)enableCMP displayDebugLogs:(BOOL)displayDebugLogs __attribute__((swift_name("init(context:customerId:userAgent:enableCMP:displayDebugLogs:)"))) __attribute__((objc_designated_initializer));
- (NSObject *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (TSDKTarget2SellUserAgent *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (TSDKLibraryConfiguration *)doCopyContext:(NSObject *)context customerId:(NSString *)customerId userAgent:(TSDKTarget2SellUserAgent *)userAgent enableCMP:(BOOL)enableCMP displayDebugLogs:(BOOL)displayDebugLogs __attribute__((swift_name("doCopy(context:customerId:userAgent:enableCMP:displayDebugLogs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSObject *context __attribute__((swift_name("context")));
@property (readonly) NSString *customerId __attribute__((swift_name("customerId")));
@property (readonly) BOOL displayDebugLogs __attribute__((swift_name("displayDebugLogs")));
@property (readonly) BOOL enableCMP __attribute__((swift_name("enableCMP")));
@property (readonly) TSDKTarget2SellUserAgent *userAgent __attribute__((swift_name("userAgent")));
@end;

__attribute__((swift_name("Resource")))
@interface TSDKResource<T> : TSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceError")))
@interface TSDKResourceError<T> : TSDKResource<T>
- (instancetype)initWithError:(TSDKT2SError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (TSDKT2SError *)component1 __attribute__((swift_name("component1()")));
- (TSDKResourceError<T> *)doCopyError:(TSDKT2SError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TSDKT2SError *error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceSuccess")))
@interface TSDKResourceSuccess<T> : TSDKResource<T>
- (instancetype)initWithResult:(T _Nullable)result __attribute__((swift_name("init(result:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (TSDKResourceSuccess<T> *)doCopyResult:(T _Nullable)result __attribute__((swift_name("doCopy(result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Target2SellLibrary")))
@interface TSDKTarget2SellLibrary : TSDKBase
- (instancetype)initWithLibraryConfiguration:(TSDKLibraryConfiguration *)libraryConfiguration __attribute__((swift_name("init(libraryConfiguration:)"))) __attribute__((objc_designated_initializer));
- (void)disableCmp __attribute__((swift_name("disableCmp()")));
- (void)enableCmp __attribute__((swift_name("enableCmp()")));
- (NSString *)getRank __attribute__((swift_name("getRank()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecommendationsRecommendationParameters:(TSDKRecommendationParameters *)recommendationParameters completionHandler:(void (^)(TSDKResource<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecommendations(recommendationParameters:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendTrackingTrackingParameters:(TSDKTrackingParameters *)trackingParameters completionHandler:(void (^)(TSDKResource<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendTracking(trackingParameters:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)useOrganiseModuleRankParameters:(TSDKRankParameters *)rankParameters completionHandler:(void (^)(TSDKResource<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("useOrganiseModule(rankParameters:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface TSDKKotlinThrowable : TSDKBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (TSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("T2SError")))
@interface TSDKT2SError : TSDKKotlinThrowable
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("T2SError.DefaultError")))
@interface TSDKT2SErrorDefaultError : TSDKT2SError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (TSDKT2SErrorDefaultError *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("T2SError.EnablerCMPError")))
@interface TSDKT2SErrorEnablerCMPError : TSDKT2SError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)enablerCMPError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TSDKT2SErrorEnablerCMPError *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("T2SError.UUIDMissingError")))
@interface TSDKT2SErrorUUIDMissingError : TSDKT2SError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)uUIDMissingError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TSDKT2SErrorUUIDMissingError *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RankParameters")))
@interface TSDKRankParameters : TSDKBase
- (instancetype)initWithSetID:(NSString * _Nullable)setID __attribute__((swift_name("init(setID:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (TSDKRankParameters *)doCopySetID:(NSString * _Nullable)setID __attribute__((swift_name("doCopy(setID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable setID __attribute__((swift_name("setID")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecommendationParameters")))
@interface TSDKRecommendationParameters : TSDKBase
- (instancetype)initWithLocale:(NSString *)locale pageId:(int32_t)pageId userEmail:(NSString * _Nullable)userEmail language:(NSString * _Nullable)language itemId:(NSString * _Nullable)itemId basketProducts:(NSString * _Nullable)basketProducts categoryId:(TSDKInt * _Nullable)categoryId contextURL:(NSString * _Nullable)contextURL keywords:(NSString * _Nullable)keywords setId:(NSString * _Nullable)setId referer:(NSString * _Nullable)referer constraint:(NSString * _Nullable)constraint __attribute__((swift_name("init(locale:pageId:userEmail:language:itemId:basketProducts:categoryId:contextURL:keywords:setId:referer:constraint:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (TSDKInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (TSDKRecommendationParameters *)doCopyLocale:(NSString *)locale pageId:(int32_t)pageId userEmail:(NSString * _Nullable)userEmail language:(NSString * _Nullable)language itemId:(NSString * _Nullable)itemId basketProducts:(NSString * _Nullable)basketProducts categoryId:(TSDKInt * _Nullable)categoryId contextURL:(NSString * _Nullable)contextURL keywords:(NSString * _Nullable)keywords setId:(NSString * _Nullable)setId referer:(NSString * _Nullable)referer constraint:(NSString * _Nullable)constraint __attribute__((swift_name("doCopy(locale:pageId:userEmail:language:itemId:basketProducts:categoryId:contextURL:keywords:setId:referer:constraint:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable basketProducts __attribute__((swift_name("basketProducts")));
@property (readonly) TSDKInt * _Nullable categoryId __attribute__((swift_name("categoryId")));
@property (readonly) NSString * _Nullable constraint __attribute__((swift_name("constraint")));
@property (readonly) NSString * _Nullable contextURL __attribute__((swift_name("contextURL")));
@property (readonly) NSString * _Nullable itemId __attribute__((swift_name("itemId")));
@property (readonly) NSString * _Nullable keywords __attribute__((swift_name("keywords")));
@property (readonly) NSString * _Nullable language __attribute__((swift_name("language")));
@property (readonly) NSString *locale __attribute__((swift_name("locale")));
@property (readonly) int32_t pageId __attribute__((swift_name("pageId")));
@property (readonly) NSString * _Nullable referer __attribute__((swift_name("referer")));
@property (readonly) NSString * _Nullable setId __attribute__((swift_name("setId")));
@property (readonly) NSString * _Nullable userEmail __attribute__((swift_name("userEmail")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Target2SellUserAgent")))
@interface TSDKTarget2SellUserAgent : TSDKBase
- (instancetype)initWithApplicationName:(NSString *)applicationName applicationVersion:(NSString *)applicationVersion applicationPackageName:(NSString *)applicationPackageName applicationBuildVersion:(NSString *)applicationBuildVersion __attribute__((swift_name("init(applicationName:applicationVersion:applicationPackageName:applicationBuildVersion:)"))) __attribute__((objc_designated_initializer));
- (TSDKTarget2SellUserAgent *)doCopyApplicationName:(NSString *)applicationName applicationVersion:(NSString *)applicationVersion applicationPackageName:(NSString *)applicationPackageName applicationBuildVersion:(NSString *)applicationBuildVersion platform:(TSDKPlatform *)platform __attribute__((swift_name("doCopy(applicationName:applicationVersion:applicationPackageName:applicationBuildVersion:platform:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)formatUserAgent __attribute__((swift_name("formatUserAgent()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackingParameters")))
@interface TSDKTrackingParameters : TSDKBase
- (instancetype)initWithPageId:(int32_t)pageId userEmail:(NSString * _Nullable)userEmail userId:(NSString * _Nullable)userId eventType:(NSString * _Nullable)eventType spaceId:(NSString * _Nullable)spaceId productPosition:(NSString * _Nullable)productPosition basketProduct:(NSString * _Nullable)basketProduct language:(NSString * _Nullable)language domain:(NSString * _Nullable)domain itemId:(NSString * _Nullable)itemId categoryId:(TSDKInt * _Nullable)categoryId cartTotalAmount:(TSDKDouble * _Nullable)cartTotalAmount productQuantity:(NSString * _Nullable)productQuantity keywords:(NSString * _Nullable)keywords orderId:(NSString * _Nullable)orderId priceList:(NSString * _Nullable)priceList userRank:(NSString * _Nullable)userRank crm_XXX:(NSString * _Nullable)crm_XXX algorithm:(NSString * _Nullable)algorithm mediaRuleId:(NSString * _Nullable)mediaRuleId mediaCampaignId:(NSString * _Nullable)mediaCampaignId mediaAlgo:(NSString * _Nullable)mediaAlgo any:(NSString * _Nullable)any __attribute__((swift_name("init(pageId:userEmail:userId:eventType:spaceId:productPosition:basketProduct:language:domain:itemId:categoryId:cartTotalAmount:productQuantity:keywords:orderId:priceList:userRank:crm_XXX:algorithm:mediaRuleId:mediaCampaignId:mediaAlgo:any:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (TSDKInt * _Nullable)component11 __attribute__((swift_name("component11()")));
- (TSDKDouble * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSString * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (TSDKTrackingParameters *)doCopyPageId:(int32_t)pageId userEmail:(NSString * _Nullable)userEmail userId:(NSString * _Nullable)userId eventType:(NSString * _Nullable)eventType spaceId:(NSString * _Nullable)spaceId productPosition:(NSString * _Nullable)productPosition basketProduct:(NSString * _Nullable)basketProduct language:(NSString * _Nullable)language domain:(NSString * _Nullable)domain itemId:(NSString * _Nullable)itemId categoryId:(TSDKInt * _Nullable)categoryId cartTotalAmount:(TSDKDouble * _Nullable)cartTotalAmount productQuantity:(NSString * _Nullable)productQuantity keywords:(NSString * _Nullable)keywords orderId:(NSString * _Nullable)orderId priceList:(NSString * _Nullable)priceList userRank:(NSString * _Nullable)userRank crm_XXX:(NSString * _Nullable)crm_XXX algorithm:(NSString * _Nullable)algorithm mediaRuleId:(NSString * _Nullable)mediaRuleId mediaCampaignId:(NSString * _Nullable)mediaCampaignId mediaAlgo:(NSString * _Nullable)mediaAlgo any:(NSString * _Nullable)any __attribute__((swift_name("doCopy(pageId:userEmail:userId:eventType:spaceId:productPosition:basketProduct:language:domain:itemId:categoryId:cartTotalAmount:productQuantity:keywords:orderId:priceList:userRank:crm_XXX:algorithm:mediaRuleId:mediaCampaignId:mediaAlgo:any:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable algorithm __attribute__((swift_name("algorithm")));
@property (readonly) NSString * _Nullable any __attribute__((swift_name("any")));
@property (readonly) NSString * _Nullable basketProduct __attribute__((swift_name("basketProduct")));
@property (readonly) TSDKDouble * _Nullable cartTotalAmount __attribute__((swift_name("cartTotalAmount")));
@property (readonly) TSDKInt * _Nullable categoryId __attribute__((swift_name("categoryId")));
@property (readonly) NSString * _Nullable crm_XXX __attribute__((swift_name("crm_XXX")));
@property (readonly) NSString * _Nullable domain __attribute__((swift_name("domain")));
@property (readonly) NSString * _Nullable eventType __attribute__((swift_name("eventType")));
@property (readonly) NSString * _Nullable itemId __attribute__((swift_name("itemId")));
@property (readonly) NSString * _Nullable keywords __attribute__((swift_name("keywords")));
@property (readonly) NSString * _Nullable language __attribute__((swift_name("language")));
@property (readonly) NSString * _Nullable mediaAlgo __attribute__((swift_name("mediaAlgo")));
@property (readonly) NSString * _Nullable mediaCampaignId __attribute__((swift_name("mediaCampaignId")));
@property (readonly) NSString * _Nullable mediaRuleId __attribute__((swift_name("mediaRuleId")));
@property (readonly) NSString * _Nullable orderId __attribute__((swift_name("orderId")));
@property (readonly) int32_t pageId __attribute__((swift_name("pageId")));
@property (readonly) NSString * _Nullable priceList __attribute__((swift_name("priceList")));
@property (readonly) NSString * _Nullable productPosition __attribute__((swift_name("productPosition")));
@property (readonly) NSString * _Nullable productQuantity __attribute__((swift_name("productQuantity")));
@property (readonly) NSString * _Nullable spaceId __attribute__((swift_name("spaceId")));
@property (readonly) NSString * _Nullable userEmail __attribute__((swift_name("userEmail")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@property (readonly) NSString * _Nullable userRank __attribute__((swift_name("userRank")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface TSDKPlatform : TSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TSDKPlatformCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)device __attribute__((swift_name("device()")));
- (NSString *)generateUUID __attribute__((swift_name("generateUUID()")));
- (NSString *)osVersion __attribute__((swift_name("osVersion()")));
- (NSString *)platform __attribute__((swift_name("platform()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform.Companion")))
@interface TSDKPlatformCompanion : TSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TSDKPlatformCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("Preferences")))
@interface TSDKPreferences : NSObject
@end;

@interface TSDKKotlinThrowable (Extensions)
- (TSDKT2SErrorDefaultError *)toT2SError __attribute__((swift_name("toT2SError()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesKt")))
@interface TSDKPreferencesKt : TSDKBase
+ (NSString * _Nullable)getString:(NSObject *)receiver key:(NSString *)key __attribute__((swift_name("getString(_:key:)")));
+ (void)putString:(NSObject *)receiver key:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(_:key:value:)")));
@end;

__attribute__((swift_name("KotlinException")))
@interface TSDKKotlinException : TSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface TSDKKotlinRuntimeException : TSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface TSDKKotlinIllegalStateException : TSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface TSDKKotlinCancellationException : TSDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface TSDKKotlinArray<T> : TSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(TSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<TSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol TSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
