#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedTruvideoSdkConfiguration, SharedTruvideoSdkSettings, SharedTruvideoSdkAuthentication, SharedBuildConfig, SharedConfigurationModule, SharedKodein_diDIModule, SharedTruvideoSdkIpResult, SharedTruvideoSdkDeviceUtilCompanion, SharedTruvideoSdkDeviceInterface, SharedTruvideoSdkDeviceUtil, SharedTruvideoSdkNetworkUtilCompanion, SharedTruvideoSdkNetworkType, SharedTruvideoSdkNetworkInterface, SharedTruvideoSdkNetworkUtil, SharedTruvideoSdkLogSeverity, SharedTruvideoSdkHttpResponse, SharedTruvideoJwtInfo, SharedTruvideoSdkAuthenticationCompanion, SharedTruvideoSdkIpConfiguration, SharedTruvideoSdkLogConfiguration, SharedTruvideoSdkConfigurationCompanion, SharedTruvideoSdkHttpErrorResponseCompanion, SharedTruvideoSdkHttpErrorResponse, SharedTruvideoSdkIPResponseCompanion, SharedTruvideoSdkIPResponse, SharedTruvideoSdkIpConfigurationCompanion, SharedTruvideoSdkLogModule, SharedTruvideoSdkLogCompanion, SharedTruvideoSdkLog, SharedTruvideoSdkLogConfigurationCompanion, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedKotlinArray<T>, SharedTruvideoSdkStorageCredentials, SharedTruvideoSdkSettingsCompanion, SharedTruvideoSdkStorageCredentialsCompanion, SharedTruvideoSdkCommonExceptionParser, NSError, SharedKotlinThrowable, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKodein_diDIBuilderDelegateBinder<T>, SharedKotlinx_serialization_coreSerializersModule, SharedKotlinx_serialization_coreSerialKind, SharedKotlinNothing, SharedKodein_diDIKey<__contravariant C, __contravariant A, __covariant T>, SharedKodein_diScopeRegistry, SharedKotlinKTypeProjection, SharedKotlinUnit, SharedKodein_diDITrigger, SharedKodein_diReference<__covariant T>, SharedKotlinKVariance, SharedKotlinKTypeProjectionCompanion, SharedKodein_diDIDefinition<C, A, T>, SharedKotlinTriple<__covariant A, __covariant B, __covariant C>, SharedKodein_diSearchSpecs, SharedKodein_diDIDefining<C, A, T>;

@protocol SharedAuthService, SharedConnectivityService, SharedHttpService, SharedIpService, SharedLocalStorageService, SharedLogService, SharedHttpAdapter, SharedLogAdapter, SharedKotlinx_serialization_coreKSerializer, SharedKotlinComparable, SharedKotlinx_coroutines_coreStateFlow, SharedLogFileUploadHandler, SharedLocalStorageRepository, SharedTruvideoSdkCommon, SharedKodein_diDIBuilder, SharedKotlinKProperty, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKotlinIterator, SharedKotlinx_coroutines_coreFlowCollector, SharedKotlinx_coroutines_coreFlow, SharedKotlinx_coroutines_coreSharedFlow, SharedKodein_diDIBinding, SharedKodein_diDIBuilderDirectBinder, SharedKodein_diDIBuilderTypeBinder, SharedKaveritTypeToken, SharedKodein_diDIBuilderArgSetBinder, SharedKodein_diDIBuilderSetBinder, SharedKodein_diContextTranslator, SharedKodein_diDIBuilderConstantBinder, SharedKodein_diDirectDI, SharedKodein_diDIContainerBuilder, SharedKodein_diDIBindBuilder, SharedKodein_diScope, SharedKodein_diDIBindBuilderWithScope, SharedKotlinKType, SharedKotlinKAnnotatedElement, SharedKotlinKCallable, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedKodein_diDIBindingCopier, SharedKodein_diBindingDI, SharedKodein_diBinding, SharedKodein_diDIContext, SharedKodein_diDIContainer, SharedKodein_diDI, SharedKodein_diDirectDIAware, SharedKodein_diDirectDIBase, SharedKotlinKClassifier, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedKotlinKClass, SharedKodein_diWithContext, SharedKodein_diDITree, SharedKodein_diDIAware, SharedKodein_diScopeCloseable, SharedKotlinKDeclarationContainer, SharedKodein_diExternalSource, SharedKotlinLazy;

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
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("TruvideoSdkCommon")))
@protocol SharedTruvideoSdkCommon
@required
@property (readonly) id<SharedAuthService> auth __attribute__((swift_name("auth")));
@property (readonly) SharedTruvideoSdkConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) id<SharedConnectivityService> connectivity __attribute__((swift_name("connectivity")));
@property (readonly) id<SharedHttpService> http __attribute__((swift_name("http")));
@property (readonly) id<SharedIpService> ip __attribute__((swift_name("ip")));
@property (readonly) id<SharedLocalStorageService> localStorage __attribute__((swift_name("localStorage")));
@property (readonly) id<SharedLogService> log __attribute__((swift_name("log")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("GetSettingsUseCase")))
@protocol SharedGetSettingsUseCase
@required

/**
 * @note This method converts instances of TruvideoSdkCommonException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeBaseUrl:(NSString *)baseUrl deviceID:(NSString *)deviceID accessToken:(NSString *)accessToken completionHandler:(void (^)(SharedTruvideoSdkSettings * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(baseUrl:deviceID:accessToken:completionHandler:)")));
@end

__attribute__((swift_name("RefreshTokenUseCase")))
@protocol SharedRefreshTokenUseCase
@required

/**
 * @note This method converts instances of TruvideoSdkCommonException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeBaseUrl:(NSString *)baseUrl apiKey:(NSString *)apiKey refreshToken:(NSString *)refreshToken deviceID:(NSString *)deviceID accessTokenTTL:(SharedLong * _Nullable)accessTokenTTL refreshTokenTTL:(SharedLong * _Nullable)refreshTokenTTL completionHandler:(void (^)(SharedTruvideoSdkAuthentication * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(baseUrl:apiKey:refreshToken:deviceID:accessTokenTTL:refreshTokenTTL:completionHandler:)")));
@end

__attribute__((swift_name("RegisterDeviceUseCase")))
@protocol SharedRegisterDeviceUseCase
@required

/**
 * @note This method converts instances of TruvideoSdkCommonException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeBaseUrl:(NSString *)baseUrl apiKey:(NSString *)apiKey payload:(NSString *)payload signature:(NSString *)signature deviceID:(NSString * _Nullable)deviceID accessTokenTTL:(SharedLong * _Nullable)accessTokenTTL refreshTokenTTL:(SharedLong * _Nullable)refreshTokenTTL externalId:(NSString *)externalId completionHandler:(void (^)(SharedTruvideoSdkAuthentication * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(baseUrl:apiKey:payload:signature:deviceID:accessTokenTTL:refreshTokenTTL:externalId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuildConfig")))
@interface SharedBuildConfig : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)buildConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBuildConfig *shared __attribute__((swift_name("shared")));
@property (readonly) int64_t BUILD_TIME __attribute__((swift_name("BUILD_TIME")));
@property (readonly) NSString *NAME __attribute__((swift_name("NAME")));
@property (readonly) NSString *VERSION __attribute__((swift_name("VERSION")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationModule")))
@interface SharedConfigurationModule : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)configurationModule __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedConfigurationModule *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKodein_diDIModule *module __attribute__((swift_name("module")));
@end

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("TruvideoSdkAuthenticationRequiredException")))
@interface SharedTruvideoSdkAuthenticationRequiredException : NSObject
@end

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("TruvideoSdkConnectivityRequiredException")))
@interface SharedTruvideoSdkConnectivityRequiredException : NSObject
@end

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("TruvideoSdkException")))
@interface SharedTruvideoSdkException : NSObject
@end

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("TruvideoSdkFailReachServerException")))
@interface SharedTruvideoSdkFailReachServerException : NSObject
@end

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("TruvideoSdkNotInitializedException")))
@interface SharedTruvideoSdkNotInitializedException : NSObject
@end

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("TruvideoSdkUnauthorizedRequestException")))
@interface SharedTruvideoSdkUnauthorizedRequestException : NSObject
@end

__attribute__((swift_name("LocalStorageRepository")))
@protocol SharedLocalStorageRepository
@required
- (void)deleteKey:(NSString *)key __attribute__((swift_name("delete(key:)")));
- (BOOL)readBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("readBoolean(key:defaultValue:)")));
- (int32_t)readIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("readInt(key:defaultValue:)")));
- (int64_t)readLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("readLong(key:defaultValue:)")));
- (NSString *)readStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("readString(key:defaultValue:)")));
- (void)storeBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("storeBoolean(key:value:)")));
- (void)storeIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("storeInt(key:value:)")));
- (void)storeLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("storeLong(key:value:)")));
- (void)storeStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("storeString(key:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsOnlineUseCase")))
@interface SharedIsOnlineUseCase : SharedBase
- (instancetype)initWithHttpAdapter:(id<SharedHttpAdapter>)httpAdapter logAdapter:(id<SharedLogAdapter>)logAdapter __attribute__((swift_name("init(httpAdapter:logAdapter:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FetchIpUseCase")))
@interface SharedFetchIpUseCase : SharedBase
- (instancetype)initWithHttpAdapter:(id<SharedHttpAdapter>)httpAdapter logAdapter:(id<SharedLogAdapter>)logAdapter __attribute__((swift_name("init(httpAdapter:logAdapter:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeUrl:(NSString *)url completionHandler:(void (^)(SharedTruvideoSdkIpResult * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(url:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkCommonExceptionParser")))
@interface SharedTruvideoSdkCommonExceptionParser : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkDeviceUtil")))
@interface SharedTruvideoSdkDeviceUtil : SharedBase
@property (class, readonly, getter=companion) SharedTruvideoSdkDeviceUtilCompanion *companion __attribute__((swift_name("companion")));
- (void)doInitCallback:(SharedTruvideoSdkDeviceInterface *)callback __attribute__((swift_name("doInit(callback:)")));
@property (readonly) NSString *brand __attribute__((swift_name("brand")));
@property (readonly) NSString *model __attribute__((swift_name("model")));
@property (readonly) NSString *osVersion __attribute__((swift_name("osVersion")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkDeviceUtil.Companion")))
@interface SharedTruvideoSdkDeviceUtilCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkDeviceUtilCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedTruvideoSdkDeviceUtil *instance __attribute__((swift_name("instance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkNetworkUtil")))
@interface SharedTruvideoSdkNetworkUtil : SharedBase
@property (class, readonly, getter=companion) SharedTruvideoSdkNetworkUtilCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkNetworkType *)getType __attribute__((swift_name("getType()")));
- (void)doInitCallback:(SharedTruvideoSdkNetworkInterface *)callback __attribute__((swift_name("doInit(callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkNetworkUtil.Companion")))
@interface SharedTruvideoSdkNetworkUtilCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkNetworkUtilCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedTruvideoSdkNetworkUtil *instance __attribute__((swift_name("instance")));
@end

__attribute__((swift_name("TruvideoSdkDeviceInterface")))
@interface SharedTruvideoSdkDeviceInterface : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getModel __attribute__((swift_name("getModel()")));
@end

__attribute__((swift_name("TruvideoSdkNetworkInterface")))
@interface SharedTruvideoSdkNetworkInterface : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedTruvideoSdkNetworkType *)getType __attribute__((swift_name("getType()")));
@end

__attribute__((swift_name("LogAdapter")))
@protocol SharedLogAdapter
@required
- (void)addTag:(NSString *)tag msg:(NSString *)msg severity:(SharedTruvideoSdkLogSeverity *)severity __attribute__((swift_name("add(tag:msg:severity:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogAdapterImpl")))
@interface SharedLogAdapterImpl : SharedBase <SharedLogAdapter>
- (instancetype)initWithLogService:(id<SharedLogService>)logService __attribute__((swift_name("init(logService:)"))) __attribute__((objc_designated_initializer));
- (void)addTag:(NSString *)tag msg:(NSString *)msg severity:(SharedTruvideoSdkLogSeverity *)severity __attribute__((swift_name("add(tag:msg:severity:)")));
@end

__attribute__((swift_name("HttpAdapter")))
@protocol SharedHttpAdapter
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUrl:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers retry:(BOOL)retry completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("get(url:headers:retry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)headUrl:(NSString *)url retry:(BOOL)retry completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("head(url:retry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUrl:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers body:(id _Nullable)body retry:(BOOL)retry completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("post(url:headers:body:retry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putUrl:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers body:(id _Nullable)body retry:(BOOL)retry completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("put(url:headers:body:retry:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoJwtInfo")))
@interface SharedTruvideoJwtInfo : SharedBase
- (instancetype)initWithExpirationTime:(SharedLong * _Nullable)expirationTime isExpired:(BOOL)isExpired __attribute__((swift_name("init(expirationTime:isExpired:)"))) __attribute__((objc_designated_initializer));
- (SharedTruvideoJwtInfo *)doCopyExpirationTime:(SharedLong * _Nullable)expirationTime isExpired:(BOOL)isExpired __attribute__((swift_name("doCopy(expirationTime:isExpired:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLong * _Nullable expirationTime __attribute__((swift_name("expirationTime")));
@property (readonly) BOOL isExpired __attribute__((swift_name("isExpired")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkAuthentication")))
@interface SharedTruvideoSdkAuthentication : SharedBase
- (instancetype)initWithId:(NSString *)id accessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken __attribute__((swift_name("init(id:accessToken:refreshToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkAuthenticationCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkAuthentication *)doCopyId:(NSString *)id accessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken __attribute__((swift_name("doCopy(id:accessToken:refreshToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *refreshToken __attribute__((swift_name("refreshToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkAuthentication.Companion")))
@interface SharedTruvideoSdkAuthenticationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkAuthenticationCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkAuthentication *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkConfiguration")))
@interface SharedTruvideoSdkConfiguration : SharedBase
- (instancetype)initWithDebug:(BOOL)debug tokenExtraSec:(int32_t)tokenExtraSec authValidPeriod:(int64_t)authValidPeriod ip:(SharedTruvideoSdkIpConfiguration *)ip log:(SharedTruvideoSdkLogConfiguration *)log settingsBoxName:(NSString *)settingsBoxName __attribute__((swift_name("init(debug:tokenExtraSec:authValidPeriod:ip:log:settingsBoxName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkConfigurationCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkConfiguration *)doCopyDebug:(BOOL)debug tokenExtraSec:(int32_t)tokenExtraSec authValidPeriod:(int64_t)authValidPeriod ip:(SharedTruvideoSdkIpConfiguration *)ip log:(SharedTruvideoSdkLogConfiguration *)log settingsBoxName:(NSString *)settingsBoxName __attribute__((swift_name("doCopy(debug:tokenExtraSec:authValidPeriod:ip:log:settingsBoxName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int64_t authValidPeriod __attribute__((swift_name("authValidPeriod")));
@property BOOL debug __attribute__((swift_name("debug")));
@property SharedTruvideoSdkIpConfiguration *ip __attribute__((swift_name("ip")));
@property SharedTruvideoSdkLogConfiguration *log __attribute__((swift_name("log")));
@property NSString *settingsBoxName __attribute__((swift_name("settingsBoxName")));
@property int32_t tokenExtraSec __attribute__((swift_name("tokenExtraSec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkConfiguration.Companion")))
@interface SharedTruvideoSdkConfigurationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkConfiguration *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkHttpErrorResponse")))
@interface SharedTruvideoSdkHttpErrorResponse : SharedBase
- (instancetype)initWithType:(NSString *)type title:(NSString *)title status:(int32_t)status detail:(NSString *)detail instance:(NSString *)instance message:(NSString *)message params:(NSString *)params __attribute__((swift_name("init(type:title:status:detail:instance:message:params:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkHttpErrorResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkHttpErrorResponse *)doCopyType:(NSString *)type title:(NSString *)title status:(int32_t)status detail:(NSString *)detail instance:(NSString *)instance message:(NSString *)message params:(NSString *)params __attribute__((swift_name("doCopy(type:title:status:detail:instance:message:params:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *detail __attribute__((swift_name("detail")));
@property (readonly) NSString *instance __attribute__((swift_name("instance")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *params __attribute__((swift_name("params")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkHttpErrorResponse.Companion")))
@interface SharedTruvideoSdkHttpErrorResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkHttpErrorResponseCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkHttpErrorResponse *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkHttpResponse")))
@interface SharedTruvideoSdkHttpResponse : SharedBase
- (instancetype)initWithCode:(int32_t)code body:(NSString *)body isSuccess:(BOOL)isSuccess __attribute__((swift_name("init(code:body:isSuccess:)"))) __attribute__((objc_designated_initializer));
- (SharedTruvideoSdkHttpResponse *)doCopyCode:(int32_t)code body:(NSString *)body isSuccess:(BOOL)isSuccess __attribute__((swift_name("doCopy(code:body:isSuccess:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *body __attribute__((swift_name("body")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkIPResponse")))
@interface SharedTruvideoSdkIPResponse : SharedBase
- (instancetype)initWithOrigin:(NSString *)origin __attribute__((swift_name("init(origin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkIPResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkIPResponse *)doCopyOrigin:(NSString *)origin __attribute__((swift_name("doCopy(origin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *origin __attribute__((swift_name("origin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkIPResponse.Companion")))
@interface SharedTruvideoSdkIPResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkIPResponseCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkIPResponse *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkIpConfiguration")))
@interface SharedTruvideoSdkIpConfiguration : SharedBase
- (instancetype)initWithInterval:(int64_t)interval enabled:(BOOL)enabled __attribute__((swift_name("init(interval:enabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkIpConfigurationCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkIpConfiguration *)doCopyInterval:(int64_t)interval enabled:(BOOL)enabled __attribute__((swift_name("doCopy(interval:enabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL enabled __attribute__((swift_name("enabled")));
@property int64_t interval __attribute__((swift_name("interval")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkIpConfiguration.Companion")))
@interface SharedTruvideoSdkIpConfigurationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkIpConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkIpConfiguration *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkIpResult")))
@interface SharedTruvideoSdkIpResult : SharedBase
- (instancetype)initWithOrigin:(NSString *)origin epoch:(int64_t)epoch __attribute__((swift_name("init(origin:epoch:)"))) __attribute__((objc_designated_initializer));
- (SharedTruvideoSdkIpResult *)doCopyOrigin:(NSString *)origin epoch:(int64_t)epoch __attribute__((swift_name("doCopy(origin:epoch:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epoch __attribute__((swift_name("epoch")));
@property (readonly) NSString *origin __attribute__((swift_name("origin")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLog")))
@interface SharedTruvideoSdkLog : SharedBase
- (instancetype)initWithTag:(NSString *)tag message:(NSString *)message severity:(SharedTruvideoSdkLogSeverity *)severity module:(SharedTruvideoSdkLogModule * _Nullable)module moduleVersion:(NSString *)moduleVersion __attribute__((swift_name("init(tag:message:severity:module:moduleVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkLogCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkLog *)doCopyTag:(NSString *)tag message:(NSString *)message severity:(SharedTruvideoSdkLogSeverity *)severity module:(SharedTruvideoSdkLogModule * _Nullable)module moduleVersion:(NSString *)moduleVersion __attribute__((swift_name("doCopy(tag:message:severity:module:moduleVersion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (BOOL)withModuleVersion __attribute__((swift_name("withModuleVersion()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) SharedTruvideoSdkLogModule * _Nullable module __attribute__((swift_name("module")));
@property (readonly) NSString *moduleVersion __attribute__((swift_name("moduleVersion")));
@property (readonly) SharedTruvideoSdkLogSeverity *severity __attribute__((swift_name("severity")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLog.Companion")))
@interface SharedTruvideoSdkLogCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkLogCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkLog *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLogConfiguration")))
@interface SharedTruvideoSdkLogConfiguration : SharedBase
- (instancetype)initWithSyncInterval:(int64_t)syncInterval syncDelayInterval:(int64_t)syncDelayInterval printEnabled:(BOOL)printEnabled appendToFileEnabled:(BOOL)appendToFileEnabled severity:(SharedTruvideoSdkLogSeverity *)severity bufferFileSize:(int64_t)bufferFileSize maxRetryCount:(int32_t)maxRetryCount minFreeSpace:(int64_t)minFreeSpace __attribute__((swift_name("init(syncInterval:syncDelayInterval:printEnabled:appendToFileEnabled:severity:bufferFileSize:maxRetryCount:minFreeSpace:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkLogConfigurationCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkLogConfiguration *)doCopySyncInterval:(int64_t)syncInterval syncDelayInterval:(int64_t)syncDelayInterval printEnabled:(BOOL)printEnabled appendToFileEnabled:(BOOL)appendToFileEnabled severity:(SharedTruvideoSdkLogSeverity *)severity bufferFileSize:(int64_t)bufferFileSize maxRetryCount:(int32_t)maxRetryCount minFreeSpace:(int64_t)minFreeSpace __attribute__((swift_name("doCopy(syncInterval:syncDelayInterval:printEnabled:appendToFileEnabled:severity:bufferFileSize:maxRetryCount:minFreeSpace:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL appendToFileEnabled __attribute__((swift_name("appendToFileEnabled")));
@property int64_t bufferFileSize __attribute__((swift_name("bufferFileSize")));
@property int32_t maxRetryCount __attribute__((swift_name("maxRetryCount")));
@property int64_t minFreeSpace __attribute__((swift_name("minFreeSpace")));
@property BOOL printEnabled __attribute__((swift_name("printEnabled")));
@property SharedTruvideoSdkLogSeverity *severity __attribute__((swift_name("severity")));
@property int64_t syncDelayInterval __attribute__((swift_name("syncDelayInterval")));
@property int64_t syncInterval __attribute__((swift_name("syncInterval")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLogConfiguration.Companion")))
@interface SharedTruvideoSdkLogConfigurationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkLogConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkLogConfiguration *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLogModule")))
@interface SharedTruvideoSdkLogModule : SharedKotlinEnum<SharedTruvideoSdkLogModule *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTruvideoSdkLogModule *common __attribute__((swift_name("common")));
@property (class, readonly) SharedTruvideoSdkLogModule *core __attribute__((swift_name("core")));
@property (class, readonly) SharedTruvideoSdkLogModule *camera __attribute__((swift_name("camera")));
@property (class, readonly) SharedTruvideoSdkLogModule *media __attribute__((swift_name("media")));
@property (class, readonly) SharedTruvideoSdkLogModule *video __attribute__((swift_name("video")));
@property (class, readonly) SharedTruvideoSdkLogModule *image __attribute__((swift_name("image")));
+ (SharedKotlinArray<SharedTruvideoSdkLogModule *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedTruvideoSdkLogModule *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLogSeverity")))
@interface SharedTruvideoSdkLogSeverity : SharedKotlinEnum<SharedTruvideoSdkLogSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTruvideoSdkLogSeverity *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) SharedTruvideoSdkLogSeverity *debug __attribute__((swift_name("debug")));
@property (class, readonly) SharedTruvideoSdkLogSeverity *info __attribute__((swift_name("info")));
@property (class, readonly) SharedTruvideoSdkLogSeverity *warning __attribute__((swift_name("warning")));
@property (class, readonly) SharedTruvideoSdkLogSeverity *error __attribute__((swift_name("error")));
+ (SharedKotlinArray<SharedTruvideoSdkLogSeverity *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedTruvideoSdkLogSeverity *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkNetworkType")))
@interface SharedTruvideoSdkNetworkType : SharedKotlinEnum<SharedTruvideoSdkNetworkType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTruvideoSdkNetworkType *none __attribute__((swift_name("none")));
@property (class, readonly) SharedTruvideoSdkNetworkType *wifi __attribute__((swift_name("wifi")));
@property (class, readonly) SharedTruvideoSdkNetworkType *wifiAware __attribute__((swift_name("wifiAware")));
@property (class, readonly) SharedTruvideoSdkNetworkType *bluetooth __attribute__((swift_name("bluetooth")));
@property (class, readonly) SharedTruvideoSdkNetworkType *cellular __attribute__((swift_name("cellular")));
@property (class, readonly) SharedTruvideoSdkNetworkType *ethernet __attribute__((swift_name("ethernet")));
@property (class, readonly) SharedTruvideoSdkNetworkType *usb __attribute__((swift_name("usb")));
@property (class, readonly) SharedTruvideoSdkNetworkType *vpn __attribute__((swift_name("vpn")));
@property (class, readonly) SharedTruvideoSdkNetworkType *lowPan __attribute__((swift_name("lowPan")));
+ (SharedKotlinArray<SharedTruvideoSdkNetworkType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedTruvideoSdkNetworkType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkSettings")))
@interface SharedTruvideoSdkSettings : SharedBase
- (instancetype)initWithCameraModule:(BOOL)cameraModule noiseCancelling:(BOOL)noiseCancelling credentials:(SharedTruvideoSdkStorageCredentials *)credentials __attribute__((swift_name("init(cameraModule:noiseCancelling:credentials:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkSettingsCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkSettings *)doCopyCameraModule:(BOOL)cameraModule noiseCancelling:(BOOL)noiseCancelling credentials:(SharedTruvideoSdkStorageCredentials *)credentials __attribute__((swift_name("doCopy(cameraModule:noiseCancelling:credentials:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSDictionary<NSString *, id> *)toObfuscateMapObfuscate:(BOOL)obfuscate __attribute__((swift_name("toObfuscateMap(obfuscate:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL cameraModule __attribute__((swift_name("cameraModule")));
@property (readonly) SharedTruvideoSdkStorageCredentials *credentials __attribute__((swift_name("credentials")));
@property (readonly) BOOL noiseCancelling __attribute__((swift_name("noiseCancelling")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkSettings.Companion")))
@interface SharedTruvideoSdkSettingsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkSettingsCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkSettings *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkStorageCredentials")))
@interface SharedTruvideoSdkStorageCredentials : SharedBase
- (instancetype)initWithIdentityID:(NSString *)identityID identityPoolID:(NSString *)identityPoolID region:(NSString *)region bucketName:(NSString *)bucketName bucketFolderMedia:(NSString *)bucketFolderMedia bucketFolderLogs:(NSString *)bucketFolderLogs newBucketFolderMedia:(NSString *)newBucketFolderMedia newBucketFolderLogs:(NSString *)newBucketFolderLogs __attribute__((swift_name("init(identityID:identityPoolID:region:bucketName:bucketFolderMedia:bucketFolderLogs:newBucketFolderMedia:newBucketFolderLogs:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkStorageCredentialsCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkStorageCredentials *)doCopyIdentityID:(NSString *)identityID identityPoolID:(NSString *)identityPoolID region:(NSString *)region bucketName:(NSString *)bucketName bucketFolderMedia:(NSString *)bucketFolderMedia bucketFolderLogs:(NSString *)bucketFolderLogs newBucketFolderMedia:(NSString *)newBucketFolderMedia newBucketFolderLogs:(NSString *)newBucketFolderLogs __attribute__((swift_name("doCopy(identityID:identityPoolID:region:bucketName:bucketFolderMedia:bucketFolderLogs:newBucketFolderMedia:newBucketFolderLogs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSDictionary<NSString *, NSString *> *)toObfuscateMapObfuscate:(BOOL)obfuscate __attribute__((swift_name("toObfuscateMap(obfuscate:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bucketFolderLogs __attribute__((swift_name("bucketFolderLogs")));
@property (readonly) NSString *bucketFolderMedia __attribute__((swift_name("bucketFolderMedia")));
@property (readonly) NSString *bucketName __attribute__((swift_name("bucketName")));
@property (readonly) NSString *identityID __attribute__((swift_name("identityID")));
@property (readonly) NSString *identityPoolID __attribute__((swift_name("identityPoolID")));
@property (readonly, getter=doNewBucketFolderLogs) NSString *newBucketFolderLogs __attribute__((swift_name("newBucketFolderLogs")));
@property (readonly, getter=doNewBucketFolderMedia) NSString *newBucketFolderMedia __attribute__((swift_name("newBucketFolderMedia")));
@property (readonly) NSString *region __attribute__((swift_name("region")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkStorageCredentials.Companion")))
@interface SharedTruvideoSdkStorageCredentialsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkStorageCredentialsCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkStorageCredentials *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("HttpService")))
@protocol SharedHttpService
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUrl:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers retry:(BOOL)retry completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("get(url:headers:retry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)headUrl:(NSString *)url retry:(BOOL)retry completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("head(url:retry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUrl:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers body:(id _Nullable)body retry:(BOOL)retry completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("post(url:headers:body:retry:completionHandler:)")));
@end

__attribute__((swift_name("IpService")))
@protocol SharedIpService
@required
- (void)fetch __attribute__((swift_name("fetch()")));
- (void)start __attribute__((swift_name("start()")));
- (void)stop __attribute__((swift_name("stop()")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> ip __attribute__((swift_name("ip")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> isFetching __attribute__((swift_name("isFetching")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> isStarted __attribute__((swift_name("isStarted")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> lastUpdated __attribute__((swift_name("lastUpdated")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> nextUpdateAt __attribute__((swift_name("nextUpdateAt")));
@end

__attribute__((swift_name("LogService")))
@protocol SharedLogService
@required
- (void)addLog:(SharedTruvideoSdkLog *)log __attribute__((swift_name("add(log:)")));
- (void)addMultipleLogs:(NSArray<SharedTruvideoSdkLog *> *)logs __attribute__((swift_name("addMultiple(logs:)")));
- (void)deleteAll __attribute__((swift_name("deleteAll()")));
- (void)initializeHandler:(id<SharedLogFileUploadHandler>)handler __attribute__((swift_name("initialize(handler:)")));
- (void)start __attribute__((swift_name("start()")));
- (void)stop __attribute__((swift_name("stop()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)suspendAddLog:(SharedTruvideoSdkLog *)log completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("suspendAdd(log:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)suspendAddMultipleLogs:(NSArray<SharedTruvideoSdkLog *> *)logs completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("suspendAddMultiple(logs:completionHandler:)")));
- (void)syncIncludeErrorFiles:(BOOL)includeErrorFiles __attribute__((swift_name("sync(includeErrorFiles:)")));
@property (readonly) NSString *currentBufferFilePath __attribute__((swift_name("currentBufferFilePath")));
@property (readonly) int64_t currentBufferFileSize __attribute__((swift_name("currentBufferFileSize")));
@property (readonly) NSString *directoryPath __attribute__((swift_name("directoryPath")));
@property (readonly) NSString *errorDirectoryPath __attribute__((swift_name("errorDirectoryPath")));
@property id<SharedLogFileUploadHandler> _Nullable handler __attribute__((swift_name("handler")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> isInitialized __attribute__((swift_name("isInitialized")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> isRunning __attribute__((swift_name("isRunning")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> isStarted __attribute__((swift_name("isStarted")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> nextRunAt __attribute__((swift_name("nextRunAt")));
@property (readonly) NSString *pendingDirectoryPath __attribute__((swift_name("pendingDirectoryPath")));
@end

__attribute__((swift_name("LogFileUploadHandler")))
@protocol SharedLogFileUploadHandler
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadPath:(NSString *)path credentials:(SharedTruvideoSdkStorageCredentials *)credentials completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("upload(path:credentials:completionHandler:)")));
@end

__attribute__((swift_name("LocalStorageService")))
@protocol SharedLocalStorageService
@required
- (int32_t)readIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("readInt(key:defaultValue:)")));
- (int64_t)readLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("readLong(key:defaultValue:)")));
- (NSString *)readStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("readString(key:defaultValue:)")));
- (void)storeIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("storeInt(key:value:)")));
- (void)storeLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("storeLong(key:value:)")));
- (void)storeStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("storeString(key:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalStorageServiceImpl")))
@interface SharedLocalStorageServiceImpl : SharedBase <SharedLocalStorageService>
- (instancetype)initWithLocalStorageRepository:(id<SharedLocalStorageRepository>)localStorageRepository __attribute__((swift_name("init(localStorageRepository:)"))) __attribute__((objc_designated_initializer));
- (int32_t)readIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("readInt(key:defaultValue:)")));
- (int64_t)readLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("readLong(key:defaultValue:)")));
- (NSString *)readStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("readString(key:defaultValue:)")));
- (void)storeIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("storeInt(key:value:)")));
- (void)storeLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("storeLong(key:value:)")));
- (void)storeStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("storeString(key:value:)")));
@end

__attribute__((swift_name("AuthService")))
@protocol SharedAuthService
@required

/**
 * @note This method converts instances of TruvideoSdkCommonException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authenticateBaseUrl:(NSString *)baseUrl apiKey:(NSString *)apiKey payload:(NSString *)payload signature:(NSString *)signature accessTokenTTL:(SharedLong * _Nullable)accessTokenTTL refreshTokenTTL:(SharedLong * _Nullable)refreshTokenTTL externalId:(NSString *)externalId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("authenticate(baseUrl:apiKey:payload:signature:accessTokenTTL:refreshTokenTTL:externalId:completionHandler:)")));

/**
 * @note This method converts instances of TruvideoSdkCommonException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)clearAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("clear()")));

/**
 * @note This method converts instances of TruvideoSdkCommonException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)generatePayloadAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("generatePayload()")));

/**
 * @note This method converts instances of TruvideoSdkCommonException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)getApiKeyAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getApiKey()")));

/**
 * @note This method converts instances of TruvideoSdkCommonException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedTruvideoSdkAuthentication * _Nullable)getAuthenticationAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getAuthentication()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of TruvideoSdkCommonException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedTruvideoSdkSettings * _Nullable)getSettingsAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getSettings()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of TruvideoSdkCommonException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)doInitAccessTokenTTL:(SharedLong * _Nullable)accessTokenTTL refreshTokenTTL:(SharedLong * _Nullable)refreshTokenTTL forceRefresh:(BOOL)forceRefresh completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("doInit(accessTokenTTL:refreshTokenTTL:forceRefresh:completionHandler:)")));

/**
 * @note This method converts instances of TruvideoSdkCommonException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)isAuthenticatedAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("isAuthenticated()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of TruvideoSdkCommonException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)isAuthenticationExpiredAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("isAuthenticationExpired()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of TruvideoSdkCommonException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)isInValidPeriodAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("isInValidPeriod()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of TruvideoSdkCommonException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshAccessTokenTTL:(SharedLong * _Nullable)accessTokenTTL refreshTokenTTL:(SharedLong * _Nullable)refreshTokenTTL forceRefresh:(BOOL)forceRefresh completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("refresh(accessTokenTTL:refreshTokenTTL:forceRefresh:completionHandler:)")));

/**
 * @note This method converts instances of TruvideoSdkCommonAuthenticationRequiredException, TruvideoSdkCommonException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)throwAuthenticationRequiredExceptionAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("throwAuthenticationRequiredException()")));

/**
 * @note This method converts instances of TruvideoSdkCommonException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)throwExceptionAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("throwException()")));

/**
 * @note This method converts instances of TruvideoSdkCommonFailReachServerException, TruvideoSdkCommonException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)throwFailReachServerExceptionAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("throwFailReachServerException()")));

/**
 * @note This method converts instances of TruvideoSdkCommonNotInitializedException, TruvideoSdkCommonException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)throwNonInitializedExceptionAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("throwNonInitializedException()")));

/**
 * @note This method converts instances of TruvideoSdkCommonUnauthorizedRequestException, TruvideoSdkCommonException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)throwUnauthorizedExceptionAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("throwUnauthorizedException()")));

/**
 * @note This method converts instances of TruvideoSdkCommonUnauthorizedRequestException, TruvideoSdkCommonException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)throwUnauthorizedException2AndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("throwUnauthorizedException2()")));
@property (readonly) BOOL isInitialized_ __attribute__((swift_name("isInitialized_")));
@end

__attribute__((swift_name("ConnectivityService")))
@protocol SharedConnectivityService
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)isOnlineWithCompletionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isOnline(completionHandler:)")));

/**
 * @note This method converts instances of TruvideoSdkCommonException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)validateConnectivityWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("validateConnectivity(completionHandler:)")));
@end

@interface SharedTruvideoSdkCommonExceptionParser (Extensions)
- (NSError *)parseException:(id)exception __attribute__((swift_name("parse(exception:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkCommonKt")))
@interface SharedTruvideoSdkCommonKt : SharedBase
@property (class, readonly) id<SharedTruvideoSdkCommon> sdk_common __attribute__((swift_name("sdk_common")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("TruvideoSdkCommonException")))
@interface SharedTruvideoSdkCommonException : NSObject
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIModule")))
@interface SharedKodein_diDIModule : SharedBase
- (instancetype)initWithName:(NSString *)name allowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<SharedKodein_diDIBuilder>))init __attribute__((swift_name("init(name:allowSilentOverride:prefix:init:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAllowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<SharedKodein_diDIBuilder>))init __attribute__((swift_name("init(allowSilentOverride:prefix:init:)"))) __attribute__((objc_designated_initializer));
- (SharedKodein_diDIModule *)doCopyAllowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<SharedKodein_diDIBuilder>))init __attribute__((swift_name("doCopy(allowSilentOverride:prefix:init:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (SharedKodein_diDIModule *)getValueThisRef:(id _Nullable)thisRef property:(id<SharedKotlinKProperty>)property __attribute__((swift_name("getValue(thisRef:property:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSilentOverride __attribute__((swift_name("allowSilentOverride")));
@property (readonly, getter=doInit) void (^init)(id<SharedKodein_diDIBuilder>) __attribute__((swift_name("init")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *prefix __attribute__((swift_name("prefix")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol SharedKotlinx_coroutines_coreSharedFlow <SharedKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol SharedKotlinx_coroutines_coreStateFlow <SharedKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("TruvideoSdkCommonAuthenticationRequiredException")))
@interface SharedTruvideoSdkCommonAuthenticationRequiredException : NSObject
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("TruvideoSdkCommonFailReachServerException")))
@interface SharedTruvideoSdkCommonFailReachServerException : NSObject
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("TruvideoSdkCommonNotInitializedException")))
@interface SharedTruvideoSdkCommonNotInitializedException : NSObject
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("TruvideoSdkCommonUnauthorizedRequestException")))
@interface SharedTruvideoSdkCommonUnauthorizedRequestException : NSObject
@end

__attribute__((swift_name("Kodein_diDIBindBuilder")))
@protocol SharedKodein_diDIBindBuilder
@required
@property (readonly) id<SharedKaveritTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) BOOL explicitContext __attribute__((swift_name("explicitContext")));
@end

__attribute__((swift_name("Kodein_diDIBindBuilderWithScope")))
@protocol SharedKodein_diDIBindBuilderWithScope <SharedKodein_diDIBindBuilder>
@required
@property (readonly) id<SharedKodein_diScope> scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Kodein_diDIBuilder")))
@protocol SharedKodein_diDIBuilder <SharedKodein_diDIBindBuilder, SharedKodein_diDIBindBuilderWithScope>
@required
- (void)AddBindInSetTag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides binding:(id<SharedKodein_diDIBinding>)binding __attribute__((swift_name("AddBindInSet(tag:overrides:binding:)")));
- (id<SharedKodein_diDIBuilderDirectBinder>)BindTag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides __attribute__((swift_name("Bind(tag:overrides:)"))) __attribute__((deprecated("This is not used, it will be removed")));
- (void)BindTag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides binding:(id<SharedKodein_diDIBinding>)binding __attribute__((swift_name("Bind(tag:overrides:binding:)")));
- (id<SharedKodein_diDIBuilderTypeBinder>)BindType:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides __attribute__((swift_name("Bind(type:tag:overrides:)")));
- (void)BindInArgSetTag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides argType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type creator:(void (^)(id<SharedKodein_diDIBuilderArgSetBinder>))creator __attribute__((swift_name("BindInArgSet(tag:overrides:argType:type:creator:)")));
- (void)BindInSetTag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides type:(id<SharedKaveritTypeToken>)type creator:(void (^)(id<SharedKodein_diDIBuilderSetBinder>))creator __attribute__((swift_name("BindInSet(tag:overrides:type:creator:)")));
- (void)BindSetTag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides binding:(id<SharedKodein_diDIBinding>)binding __attribute__((swift_name("BindSet(tag:overrides:binding:)"))) __attribute__((deprecated("Use AddBindInSet instead.")));
- (SharedKodein_diDIBuilderDelegateBinder<id> *)DelegateType:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides __attribute__((swift_name("Delegate(type:tag:overrides:)")));
- (void)InBindArgSetTag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides argType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type creator:(void (^)(id<SharedKodein_diDIBuilderArgSetBinder>))creator __attribute__((swift_name("InBindArgSet(tag:overrides:argType:type:creator:)")));
- (void)InBindSetTag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides type:(id<SharedKaveritTypeToken>)type creator:(void (^)(id<SharedKodein_diDIBuilderSetBinder>))creator __attribute__((swift_name("InBindSet(tag:overrides:type:creator:)")));
- (void)RegisterContextTranslatorTranslator:(id<SharedKodein_diContextTranslator>)translator __attribute__((swift_name("RegisterContextTranslator(translator:)")));
- (id<SharedKodein_diDIBuilderConstantBinder>)constantTag:(id)tag overrides:(SharedBoolean * _Nullable)overrides __attribute__((swift_name("constant(tag:overrides:)")));
- (void)importModule:(SharedKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("import(module:allowOverride:)")));
- (void)importAllModules:(SharedKotlinArray<SharedKodein_diDIModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride:)")));
- (void)importAllModules:(id)modules allowOverride_:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride_:)")));
- (void)importOnceModule:(SharedKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("importOnce(module:allowOverride:)")));
- (void)onReadyCb:(void (^)(id<SharedKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
@property (readonly) id<SharedKodein_diDIContainerBuilder> containerBuilder __attribute__((swift_name("containerBuilder")));
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end

__attribute__((swift_name("KotlinKCallable")))
@protocol SharedKotlinKCallable <SharedKotlinKAnnotatedElement>
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id<SharedKotlinKType> returnType __attribute__((swift_name("returnType")));
@end

__attribute__((swift_name("KotlinKProperty")))
@protocol SharedKotlinKProperty <SharedKotlinKCallable>
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kodein_diBinding")))
@protocol SharedKodein_diBinding
@required
- (id (^)(id _Nullable))getFactoryKey:(SharedKodein_diDIKey<id, id, id> *)key di:(id<SharedKodein_diBindingDI>)di __attribute__((swift_name("getFactory(key:di:)")));
@end

__attribute__((swift_name("Kodein_diDIBinding")))
@protocol SharedKodein_diDIBinding <SharedKodein_diBinding>
@required
- (NSString *)factoryFullName __attribute__((swift_name("factoryFullName()")));
- (NSString *)factoryName __attribute__((swift_name("factoryName()")));
@property (readonly) id<SharedKaveritTypeToken> argType __attribute__((swift_name("argType")));
@property (readonly) id<SharedKaveritTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) id<SharedKodein_diDIBindingCopier> _Nullable copier __attribute__((swift_name("copier")));
@property (readonly) id<SharedKaveritTypeToken> createdType __attribute__((swift_name("createdType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) id<SharedKodein_diScope> _Nullable scope __attribute__((swift_name("scope")));
@property (readonly) BOOL supportSubTypes __attribute__((swift_name("supportSubTypes")));
@end

__attribute__((swift_name("Kodein_diDIBuilderDirectBinder")))
@protocol SharedKodein_diDIBuilderDirectBinder
@required
@end

__attribute__((swift_name("Kodein_diDIBuilderTypeBinder")))
@protocol SharedKodein_diDIBuilderTypeBinder
@required
- (void)withBinding:(id<SharedKodein_diDIBinding>)binding __attribute__((swift_name("with(binding:)")));
@end

__attribute__((swift_name("KaveritTypeToken")))
@protocol SharedKaveritTypeToken
@required
- (SharedKotlinArray<id<SharedKaveritTypeToken>> *)getGenericParameters __attribute__((swift_name("getGenericParameters()")));
- (id<SharedKaveritTypeToken>)getRaw __attribute__((swift_name("getRaw()")));
- (NSArray<id<SharedKaveritTypeToken>> *)getSuper __attribute__((swift_name("getSuper()")));
- (BOOL)isAssignableFromTypeToken:(id<SharedKaveritTypeToken>)typeToken __attribute__((swift_name("isAssignableFrom(typeToken:)")));
- (BOOL)isGeneric __attribute__((swift_name("isGeneric()")));
- (BOOL)isWildcard __attribute__((swift_name("isWildcard()")));
- (NSString *)qualifiedDispString __attribute__((swift_name("qualifiedDispString()")));
- (NSString *)qualifiedErasedDispString __attribute__((swift_name("qualifiedErasedDispString()")));
- (NSString *)simpleDispString __attribute__((swift_name("simpleDispString()")));
- (NSString *)simpleErasedDispString __attribute__((swift_name("simpleErasedDispString()")));
@end

__attribute__((swift_name("Kodein_diDIBuilderArgSetBinder")))
@protocol SharedKodein_diDIBuilderArgSetBinder
@required
- (void)addCreateBinding:(id<SharedKodein_diDIBinding> (^)(void))createBinding __attribute__((swift_name("add(createBinding:)")));
- (void)bindTag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides createBinding:(id<SharedKodein_diDIBinding> (^)(void))createBinding __attribute__((swift_name("bind(tag:overrides:createBinding:)")));
@end

__attribute__((swift_name("Kodein_diDIBuilderSetBinder")))
@protocol SharedKodein_diDIBuilderSetBinder
@required
- (void)addCreateBinding_:(id<SharedKodein_diDIBinding> (^)(void))createBinding __attribute__((swift_name("add(createBinding_:)")));
- (void)bindTag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides createBinding_:(id<SharedKodein_diDIBinding> (^)(void))createBinding __attribute__((swift_name("bind(tag:overrides:createBinding_:)")));
@end

__attribute__((swift_name("Kodein_diDIBuilderDelegateBinder")))
@interface SharedKodein_diDIBuilderDelegateBinder<T> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)ToType:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("To(type:tag:)")));
- (void)toTag:(id _Nullable)tag __attribute__((swift_name("to(tag:)")));
@end

__attribute__((swift_name("Kodein_diContextTranslator")))
@protocol SharedKodein_diContextTranslator
@required
- (id _Nullable)translateDi:(id<SharedKodein_diDirectDI>)di ctx:(id)ctx __attribute__((swift_name("translate(di:ctx:)")));
@property (readonly) id<SharedKaveritTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) id<SharedKaveritTypeToken> scopeType __attribute__((swift_name("scopeType")));
@end

__attribute__((swift_name("Kodein_diDIBuilderConstantBinder")))
@protocol SharedKodein_diDIBuilderConstantBinder
@required
- (void)WithValueType:(id<SharedKaveritTypeToken>)valueType value:(id)value __attribute__((swift_name("With(valueType:value:)")));
@end

__attribute__((swift_name("Kodein_diDirectDIAware")))
@protocol SharedKodein_diDirectDIAware
@required
@property (readonly) id<SharedKodein_diDirectDI> directDI __attribute__((swift_name("directDI")));
@end

__attribute__((swift_name("Kodein_diDirectDIBase")))
@protocol SharedKodein_diDirectDIBase <SharedKodein_diDirectDIAware>
@required
- (id (^)(id _Nullable))FactoryArgType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Factory(argType:type:tag:)")));
- (id (^ _Nullable)(id _Nullable))FactoryOrNullArgType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("FactoryOrNull(argType:type:tag:)")));
- (id)InstanceType:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Instance(type:tag:)")));
- (id)InstanceArgType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("Instance(argType:type:tag:arg:)")));
- (id _Nullable)InstanceOrNullType:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("InstanceOrNull(type:tag:)")));
- (id _Nullable)InstanceOrNullArgType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("InstanceOrNull(argType:type:tag:arg:)")));
- (id<SharedKodein_diDirectDI>)OnContext:(id<SharedKodein_diDIContext>)context __attribute__((swift_name("On(context:)")));
- (id (^)(void))ProviderType:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Provider(type:tag:)")));
- (id (^)(void))ProviderArgType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("Provider(argType:type:tag:arg:)")));
- (id (^ _Nullable)(void))ProviderOrNullType:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("ProviderOrNull(type:tag:)")));
- (id (^ _Nullable)(void))ProviderOrNullArgType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("ProviderOrNull(argType:type:tag:arg:)")));
@property (readonly) id<SharedKodein_diDIContainer> container __attribute__((swift_name("container")));
@property (readonly) id<SharedKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<SharedKodein_diDI> lazy __attribute__((swift_name("lazy")));
@end

__attribute__((swift_name("Kodein_diDirectDI")))
@protocol SharedKodein_diDirectDI <SharedKodein_diDirectDIBase>
@required
@end

__attribute__((swift_name("Kodein_diDIContainerBuilder")))
@protocol SharedKodein_diDIContainerBuilder
@required
- (void)bindKey:(SharedKodein_diDIKey<id, id, id> *)key binding:(id<SharedKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule overrides:(SharedBoolean * _Nullable)overrides __attribute__((swift_name("bind(key:binding:fromModule:overrides:)")));
- (void)extendContainer:(id<SharedKodein_diDIContainer>)container allowOverride:(BOOL)allowOverride copy:(NSSet<SharedKodein_diDIKey<id, id, id> *> *)copy __attribute__((swift_name("extend(container:allowOverride:copy:)")));
- (void)onReadyCb:(void (^)(id<SharedKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
- (void)registerContextTranslatorTranslator:(id<SharedKodein_diContextTranslator>)translator __attribute__((swift_name("registerContextTranslator(translator:)")));
- (id<SharedKodein_diDIContainerBuilder>)subBuilderAllowOverride:(BOOL)allowOverride silentOverride:(BOOL)silentOverride __attribute__((swift_name("subBuilder(allowOverride:silentOverride:)")));
@end

__attribute__((swift_name("Kodein_diScope")))
@protocol SharedKodein_diScope
@required
- (SharedKodein_diScopeRegistry *)getRegistryContext:(id _Nullable)context __attribute__((swift_name("getRegistry(context:)")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol SharedKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<SharedKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<SharedKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end

__attribute__((swift_name("Kodein_diDIBindingCopier")))
@protocol SharedKodein_diDIBindingCopier
@required
- (id<SharedKodein_diDIBinding>)doCopyBuilder:(id<SharedKodein_diDIContainerBuilder>)builder __attribute__((swift_name("doCopy(builder:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIKey")))
@interface SharedKodein_diDIKey<__contravariant C, __contravariant A, __covariant T> : SharedBase
- (instancetype)initWithContextType:(id<SharedKaveritTypeToken>)contextType argType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (SharedKodein_diDIKey<C, A, T> *)doCopyContextType:(id<SharedKaveritTypeToken>)contextType argType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("doCopy(contextType:argType:type:tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKaveritTypeToken> argType __attribute__((swift_name("argType")));
@property (readonly) NSString *bindDescription __attribute__((swift_name("bindDescription")));
@property (readonly) NSString *bindFullDescription __attribute__((swift_name("bindFullDescription")));
@property (readonly) id<SharedKaveritTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) NSString *internalDescription __attribute__((swift_name("internalDescription")));
@property (readonly) id _Nullable tag __attribute__((swift_name("tag")));
@property (readonly) id<SharedKaveritTypeToken> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Kodein_diWithContext")))
@protocol SharedKodein_diWithContext
@required
@property (readonly) id context __attribute__((swift_name("context")));
@end

__attribute__((swift_name("Kodein_diBindingDI")))
@protocol SharedKodein_diBindingDI <SharedKodein_diDirectDI, SharedKodein_diWithContext>
@required
- (id<SharedKodein_diBindingDI>)onErasedContext __attribute__((swift_name("onErasedContext()")));
- (id (^)(id _Nullable))overriddenFactory __attribute__((swift_name("overriddenFactory()")));
- (id (^ _Nullable)(id _Nullable))overriddenFactoryOrNull __attribute__((swift_name("overriddenFactoryOrNull()")));
@end

__attribute__((swift_name("Kodein_diDIContext")))
@protocol SharedKodein_diDIContext
@required
@property (readonly) id<SharedKaveritTypeToken> type __attribute__((swift_name("type")));
@property (readonly) id value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kodein_diDIContainer")))
@protocol SharedKodein_diDIContainer
@required
- (NSArray<id (^)(id _Nullable)> *)allFactoriesKey:(SharedKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allFactories(key:context:overrideLevel:)")));
- (NSArray<id (^)(void)> *)allProvidersKey:(SharedKodein_diDIKey<id, SharedKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allProviders(key:context:overrideLevel:)")));
- (id (^)(id _Nullable))factoryKey:(SharedKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factory(key:context:overrideLevel:)")));
- (id (^ _Nullable)(id _Nullable))factoryOrNullKey:(SharedKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factoryOrNull(key:context:overrideLevel:)")));
- (id (^)(void))providerKey:(SharedKodein_diDIKey<id, SharedKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("provider(key:context:overrideLevel:)")));
- (id (^ _Nullable)(void))providerOrNullKey:(SharedKodein_diDIKey<id, SharedKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("providerOrNull(key:context:overrideLevel:)")));
@property (readonly) id<SharedKodein_diDITree> tree __attribute__((swift_name("tree")));
@end

__attribute__((swift_name("Kodein_diDIAware")))
@protocol SharedKodein_diDIAware
@required
@property (readonly) id<SharedKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<SharedKodein_diDIContext> diContext __attribute__((swift_name("diContext")));
@property (readonly) SharedKodein_diDITrigger * _Nullable diTrigger __attribute__((swift_name("diTrigger")));
@end

__attribute__((swift_name("Kodein_diDI")))
@protocol SharedKodein_diDI <SharedKodein_diDIAware>
@required
@property (readonly) id<SharedKodein_diDIContainer> container __attribute__((swift_name("container")));
@end

__attribute__((swift_name("Kodein_diScopeCloseable")))
@protocol SharedKodein_diScopeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Kodein_diScopeRegistry")))
@interface SharedKodein_diScopeRegistry : SharedBase <SharedKodein_diScopeCloseable>
- (void)clear __attribute__((swift_name("clear_()")));
- (void)close __attribute__((swift_name("close()")));
- (id)getOrCreateKey:(id)key sync:(BOOL)sync creator:(SharedKodein_diReference<id> *(^)(void))creator __attribute__((swift_name("getOrCreate(key:sync:creator:)")));
- (id _Nullable (^ _Nullable)(void))getOrNullKey:(id)key __attribute__((swift_name("getOrNull(key:)")));
- (void)removeKey:(id)key __attribute__((swift_name("remove(key:)")));
- (id)values __attribute__((swift_name("values()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface SharedKotlinKTypeProjection : SharedBase
- (instancetype)initWithVariance:(SharedKotlinKVariance * _Nullable)variance type:(id<SharedKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (SharedKotlinKTypeProjection *)doCopyVariance:(SharedKotlinKVariance * _Nullable)variance type:(id<SharedKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) SharedKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass provider:(id<SharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kodein_diDITree")))
@protocol SharedKodein_diDITree
@required
- (NSArray<SharedKotlinTriple<SharedKodein_diDIKey<id, id, id> *, SharedKodein_diDIDefinition<id, id, id> *, id<SharedKodein_diContextTranslator>> *> *)findKey:(SharedKodein_diDIKey<id, id, id> *)key overrideLevel:(int32_t)overrideLevel all:(BOOL)all __attribute__((swift_name("find(key:overrideLevel:all:)")));
- (NSArray<SharedKotlinTriple<SharedKodein_diDIKey<id, id, id> *, NSArray<SharedKodein_diDIDefinition<id, id, id> *> *, id<SharedKodein_diContextTranslator>> *> *)findSearch:(SharedKodein_diSearchSpecs *)search __attribute__((swift_name("find(search:)")));
- (SharedKotlinTriple<SharedKodein_diDIKey<id, id, id> *, NSArray<SharedKodein_diDIDefinition<id, id, id> *> *, id<SharedKodein_diContextTranslator>> * _Nullable)getKey:(SharedKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("get(key:)")));
@property (readonly) NSDictionary<SharedKodein_diDIKey<id, id, id> *, NSArray<SharedKodein_diDIDefinition<id, id, id> *> *> *bindings __attribute__((swift_name("bindings")));
@property (readonly) NSArray<id<SharedKodein_diExternalSource>> *externalSources __attribute__((swift_name("externalSources")));
@property (readonly) NSArray<id<SharedKodein_diContextTranslator>> *registeredTranslators __attribute__((swift_name("registeredTranslators")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDITrigger")))
@interface SharedKodein_diDITrigger : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) NSMutableArray<id<SharedKotlinLazy>> *properties __attribute__((swift_name("properties")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diReference")))
@interface SharedKodein_diReference<__covariant T> : SharedBase
- (instancetype)initWithCurrent:(T)current next:(T _Nullable (^)(void))next __attribute__((swift_name("init(current:next:)"))) __attribute__((objc_designated_initializer));
- (SharedKodein_diReference<T> *)doCopyCurrent:(T)current next:(T _Nullable (^)(void))next __attribute__((swift_name("doCopy(current:next:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T current __attribute__((swift_name("current")));
@property (readonly) T _Nullable (^next)(void) __attribute__((swift_name("next")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface SharedKotlinKVariance : SharedKotlinEnum<SharedKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) SharedKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) SharedKotlinKVariance *out __attribute__((swift_name("out")));
+ (SharedKotlinArray<SharedKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface SharedKotlinKTypeProjectionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKotlinKTypeProjection *)contravariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKotlinKTypeProjection *)covariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKotlinKTypeProjection *)invariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) SharedKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("Kodein_diDIDefining")))
@interface SharedKodein_diDIDefining<C, A, T> : SharedBase
- (instancetype)initWithBinding:(id<SharedKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKodein_diDIBinding> binding __attribute__((swift_name("binding")));
@property (readonly) NSString * _Nullable fromModule __attribute__((swift_name("fromModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIDefinition")))
@interface SharedKodein_diDIDefinition<C, A, T> : SharedKodein_diDIDefining<C, A, T>
- (instancetype)initWithBinding:(id<SharedKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule tree:(id<SharedKodein_diDITree>)tree __attribute__((swift_name("init(binding:fromModule:tree:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBinding:(id<SharedKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<SharedKodein_diDITree> tree __attribute__((swift_name("tree")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinTriple")))
@interface SharedKotlinTriple<__covariant A, __covariant B, __covariant C> : SharedBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("init(first:second:third:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinTriple<A, B, C> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("doCopy(first:second:third:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@property (readonly) C _Nullable third __attribute__((swift_name("third")));
@end

__attribute__((swift_name("Kodein_diSearchSpecs")))
@interface SharedKodein_diSearchSpecs : SharedBase
- (instancetype)initWithContextType:(id<SharedKaveritTypeToken> _Nullable)contextType argType:(id<SharedKaveritTypeToken> _Nullable)argType type:(id<SharedKaveritTypeToken> _Nullable)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property id<SharedKaveritTypeToken> _Nullable argType __attribute__((swift_name("argType")));
@property id<SharedKaveritTypeToken> _Nullable contextType __attribute__((swift_name("contextType")));
@property id _Nullable tag __attribute__((swift_name("tag")));
@property id<SharedKaveritTypeToken> _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Kodein_diExternalSource")))
@protocol SharedKodein_diExternalSource
@required
- (id (^ _Nullable)(id _Nullable))getFactoryDi:(id<SharedKodein_diBindingDI>)di key:(SharedKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("getFactory(di:key:)")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol SharedKotlinLazy
@required
- (BOOL)isInitialized__ __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
