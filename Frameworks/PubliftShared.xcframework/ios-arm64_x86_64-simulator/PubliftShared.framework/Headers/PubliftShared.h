#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PubliftSharedFuseConfig, PubliftSharedKtor_client_coreHttpClient, PubliftSharedTelemetryCompanion, PubliftSharedFuseZoneFamily, PubliftSharedFuseZone, PubliftSharedFusePrebidSizeCompanion, PubliftSharedFusePrebidSize, PubliftSharedFuseSize, PubliftSharedBreakpointArray, PubliftSharedBreakpointMap, PubliftSharedExperimentConfigCompanion, PubliftSharedExperimentConfig, PubliftSharedFusePrebidConfig, PubliftSharedFusePrebidConfigCompanion, PubliftSharedFuseSizeCompanion, PubliftSharedFuseSizeFixed, PubliftSharedFuseSizeGamAdaptiveAnchored, PubliftSharedFuseSizeGamAdaptiveInline, PubliftSharedWindowDimensions, PubliftSharedFuseSizeGamFluid, PubliftSharedFuseTargetingCompanion, PubliftSharedFuseTargeting, PubliftSharedSharedDI, PubliftSharedFuseAdViewIdGenerator, PubliftSharedTelemetry, PubliftSharedKotlinEnumCompanion, PubliftSharedKotlinEnum<E>, PubliftSharedFuseLogLevel, PubliftSharedKotlinArray<T>, PubliftSharedFuseLoggerCompanion, PubliftSharedKotlinThrowable, PubliftSharedFuseAdRequestState<V>, PubliftSharedFuseAdRequestStateError<V>, PubliftSharedFuseAdViewInstance<V>, PubliftSharedFuseAdRequestStateLoaded<V>, PubliftSharedFuseAdRequestStateLoading<V>, PubliftSharedFuseAdViewDimension, PubliftSharedFuseAdViewDimensionFixed, PubliftSharedFuseAdViewDimensionUnrestricted, PubliftSharedGamRequestParams, PubliftSharedFuseAdViewInstanceListener<V>, PubliftSharedGamSize, PubliftSharedFuseAdViewLogEventCompanion, PubliftSharedFuseAdViewInstanceFactory<V>, PubliftSharedFuseAdViewInspector, PubliftSharedFuseBreakpointMapTransformer, PubliftSharedTrie, PubliftSharedKotlinx_datetimeInstant, PubliftSharedKotlinRegex, PubliftSharedKtor_client_coreHttpClientEngineConfig, PubliftSharedKtor_client_coreHttpClientConfig<T>, PubliftSharedKtor_eventsEvents, PubliftSharedKtor_client_coreHttpReceivePipeline, PubliftSharedKtor_client_coreHttpRequestPipeline, PubliftSharedKtor_client_coreHttpResponsePipeline, PubliftSharedKtor_client_coreHttpSendPipeline, PubliftSharedKotlinException, PubliftSharedKotlinRuntimeException, PubliftSharedKotlinIllegalStateException, PubliftSharedKotlinx_datetimeInstantCompanion, PubliftSharedKotlinRegexOption, PubliftSharedKotlinRegexCompanion, PubliftSharedKtor_client_coreHttpRequestData, PubliftSharedKtor_client_coreHttpResponseData, PubliftSharedKotlinx_coroutines_coreCoroutineDispatcher, PubliftSharedKtor_client_coreProxyConfig, PubliftSharedKtor_utilsAttributeKey<T>, PubliftSharedKtor_eventsEventDefinition<T>, PubliftSharedKtor_utilsPipelinePhase, PubliftSharedKtor_utilsPipeline<TSubject, TContext>, PubliftSharedKtor_client_coreHttpReceivePipelinePhases, PubliftSharedKtor_client_coreHttpResponse, PubliftSharedKotlinUnit, PubliftSharedKtor_client_coreHttpRequestPipelinePhases, PubliftSharedKtor_client_coreHttpRequestBuilder, PubliftSharedKtor_client_coreHttpResponsePipelinePhases, PubliftSharedKtor_client_coreHttpResponseContainer, PubliftSharedKtor_client_coreHttpClientCall, PubliftSharedKtor_client_coreHttpSendPipelinePhases, PubliftSharedKotlinx_serialization_coreSerializersModule, PubliftSharedKotlinx_serialization_coreSerialKind, PubliftSharedKotlinNothing, PubliftSharedKotlinMatchResultDestructured, PubliftSharedKotlinIntRange, PubliftSharedKtor_httpUrl, PubliftSharedKtor_httpHttpMethod, PubliftSharedKtor_httpOutgoingContent, PubliftSharedKtor_httpHttpStatusCode, PubliftSharedKtor_utilsGMTDate, PubliftSharedKtor_httpHttpProtocolVersion, PubliftSharedKotlinAbstractCoroutineContextElement, PubliftSharedKotlinx_coroutines_coreCoroutineDispatcherKey, PubliftSharedKtor_httpHeadersBuilder, PubliftSharedKtor_client_coreHttpRequestBuilderCompanion, PubliftSharedKtor_httpURLBuilder, PubliftSharedKtor_utilsTypeInfo, PubliftSharedKtor_client_coreHttpClientCallCompanion, PubliftSharedKotlinMatchGroup, PubliftSharedKotlinIntProgressionCompanion, PubliftSharedKotlinIntIterator, PubliftSharedKotlinIntProgression, PubliftSharedKotlinIntRangeCompanion, PubliftSharedKtor_httpUrlCompanion, PubliftSharedKtor_httpURLProtocol, PubliftSharedKtor_httpHttpMethodCompanion, PubliftSharedKtor_httpContentType, PubliftSharedKotlinCancellationException, PubliftSharedKtor_httpHttpStatusCodeCompanion, PubliftSharedKtor_utilsGMTDateCompanion, PubliftSharedKtor_utilsWeekDay, PubliftSharedKtor_utilsMonth, PubliftSharedKtor_httpHttpProtocolVersionCompanion, PubliftSharedKotlinAbstractCoroutineContextKey<B, E>, PubliftSharedKtor_ioMemory, PubliftSharedKtor_ioChunkBuffer, PubliftSharedKtor_ioBuffer, PubliftSharedKotlinByteArray, PubliftSharedKtor_ioByteReadPacket, PubliftSharedKtor_utilsStringValuesBuilderImpl, PubliftSharedKtor_httpURLBuilderCompanion, PubliftSharedKtor_httpURLProtocolCompanion, PubliftSharedKtor_httpHeaderValueParam, PubliftSharedKtor_httpHeaderValueWithParametersCompanion, PubliftSharedKtor_httpHeaderValueWithParameters, PubliftSharedKtor_httpContentTypeCompanion, PubliftSharedKtor_utilsWeekDayCompanion, PubliftSharedKtor_utilsMonthCompanion, PubliftSharedKtor_ioMemoryCompanion, PubliftSharedKtor_ioBufferCompanion, PubliftSharedKtor_ioChunkBufferCompanion, PubliftSharedKotlinByteIterator, PubliftSharedKtor_ioInputCompanion, PubliftSharedKtor_ioInput, PubliftSharedKtor_ioByteReadPacketCompanion, PubliftSharedKotlinKTypeProjection, PubliftSharedKotlinKVariance, PubliftSharedKotlinKTypeProjectionCompanion;

@protocol PubliftSharedConfigListener, PubliftSharedDeviceInfo, PubliftSharedConfigResolver, PubliftSharedUserConsentSupplier, PubliftSharedFuseZoneFamilySupplier, PubliftSharedFuseZoneSupplierListener, PubliftSharedFuseZoneSupplier, PubliftSharedFuseConfigSupplier, PubliftSharedKotlinx_serialization_coreKSerializer, PubliftSharedFuseAdViewInstanceSupplier, PubliftSharedKotlinComparable, PubliftSharedFuseAdViewDimensionsSupplierListener, PubliftSharedFuseAdViewInspectorInfoProvider, PubliftSharedFuseAdViewRequestManager, PubliftSharedFuseAdViewReloadHandlerListener, PubliftSharedFuseAdViewDimensionsSupplier, PubliftSharedWindowDimensionsSupplier, PubliftSharedFuseScreenIdSupplier, PubliftSharedGamSizeTransformer, PubliftSharedViewDidAppearSupplier, PubliftSharedFuseAdViewRequestSizeSupplierListener, PubliftSharedKotlinx_coroutines_coreSemaphore, PubliftSharedViewDidAppearSupplierListener, PubliftSharedFuseAdViewCacheStrategy, PubliftSharedKotlinCoroutineContext, PubliftSharedKotlinx_coroutines_coreCoroutineScope, PubliftSharedKtor_ioCloseable, PubliftSharedKtor_client_coreHttpClientEngine, PubliftSharedKtor_client_coreHttpClientEngineCapability, PubliftSharedKtor_utilsAttributes, PubliftSharedKotlinx_serialization_coreEncoder, PubliftSharedKotlinx_serialization_coreSerialDescriptor, PubliftSharedKotlinx_serialization_coreSerializationStrategy, PubliftSharedKotlinx_serialization_coreDecoder, PubliftSharedKotlinx_serialization_coreDeserializationStrategy, PubliftSharedKotlinIterator, PubliftSharedKotlinMatchResult, PubliftSharedKotlinSequence, PubliftSharedKotlinCoroutineContextElement, PubliftSharedKotlinCoroutineContextKey, PubliftSharedKtor_client_coreHttpClientPlugin, PubliftSharedKotlinx_coroutines_coreDisposableHandle, PubliftSharedKotlinSuspendFunction2, PubliftSharedKotlinx_serialization_coreCompositeEncoder, PubliftSharedKotlinAnnotation, PubliftSharedKotlinx_serialization_coreCompositeDecoder, PubliftSharedKotlinx_datetimeDateTimeFormat, PubliftSharedKotlinMatchGroupCollection, PubliftSharedKtor_httpHeaders, PubliftSharedKotlinx_coroutines_coreJob, PubliftSharedKotlinContinuation, PubliftSharedKotlinContinuationInterceptor, PubliftSharedKotlinx_coroutines_coreRunnable, PubliftSharedKotlinFunction, PubliftSharedKtor_httpHttpMessage, PubliftSharedKtor_ioByteReadChannel, PubliftSharedKtor_httpHttpMessageBuilder, PubliftSharedKtor_client_coreHttpRequest, PubliftSharedKotlinx_serialization_coreSerializersModuleCollector, PubliftSharedKotlinKClass, PubliftSharedKotlinAppendable, PubliftSharedKotlinIterable, PubliftSharedKotlinCollection, PubliftSharedKotlinClosedRange, PubliftSharedKotlinOpenEndRange, PubliftSharedKtor_httpParameters, PubliftSharedKotlinMapEntry, PubliftSharedKtor_utilsStringValues, PubliftSharedKotlinx_coroutines_coreChildHandle, PubliftSharedKotlinx_coroutines_coreChildJob, PubliftSharedKotlinx_coroutines_coreSelectClause0, PubliftSharedKtor_ioReadSession, PubliftSharedKotlinSuspendFunction1, PubliftSharedKtor_utilsStringValuesBuilder, PubliftSharedKtor_httpParametersBuilder, PubliftSharedKotlinKType, PubliftSharedKotlinKDeclarationContainer, PubliftSharedKotlinKAnnotatedElement, PubliftSharedKotlinKClassifier, PubliftSharedKotlinx_coroutines_coreParentJob, PubliftSharedKotlinx_coroutines_coreSelectInstance, PubliftSharedKotlinx_coroutines_coreSelectClause, PubliftSharedKtor_ioObjectPool;

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
@interface PubliftSharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface PubliftSharedBase (PubliftSharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface PubliftSharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PubliftSharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorPubliftSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface PubliftSharedNumber : NSNumber
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
@interface PubliftSharedByte : PubliftSharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface PubliftSharedUByte : PubliftSharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface PubliftSharedShort : PubliftSharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface PubliftSharedUShort : PubliftSharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface PubliftSharedInt : PubliftSharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface PubliftSharedUInt : PubliftSharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface PubliftSharedLong : PubliftSharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface PubliftSharedULong : PubliftSharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface PubliftSharedFloat : PubliftSharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface PubliftSharedDouble : PubliftSharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface PubliftSharedBoolean : PubliftSharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("DeviceInfo")))
@protocol PubliftSharedDeviceInfo
@required
@property (readonly) NSString *gamVersion __attribute__((swift_name("gamVersion")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@property (readonly) NSString *platformVersion __attribute__((swift_name("platformVersion")));
@property (readonly) NSString *prebidVersion __attribute__((swift_name("prebidVersion")));
@property (readonly) int32_t screenHeight __attribute__((swift_name("screenHeight")));
@property (readonly) int32_t screenWidth __attribute__((swift_name("screenWidth")));
@property (readonly) NSString *sdkVersion __attribute__((swift_name("sdkVersion")));
@end

__attribute__((swift_name("ConfigListener")))
@protocol PubliftSharedConfigListener
@required
- (void)onConfigChangedConfig:(PubliftSharedFuseConfig *)config __attribute__((swift_name("onConfigChanged(config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Telemetry")))
@interface PubliftSharedTelemetry : PubliftSharedBase <PubliftSharedConfigListener>
- (instancetype)initWithTagId:(NSString *)tagId tenantCode:(NSString *)tenantCode httpClient:(PubliftSharedKtor_client_coreHttpClient *)httpClient deviceInfo:(id<PubliftSharedDeviceInfo>)deviceInfo configResolver:(id<PubliftSharedConfigResolver>)configResolver userConsentSupplier:(id<PubliftSharedUserConsentSupplier>)userConsentSupplier startTimeMs:(int64_t)startTimeMs __attribute__((swift_name("init(tagId:tenantCode:httpClient:deviceInfo:configResolver:userConsentSupplier:startTimeMs:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedTelemetryCompanion *companion __attribute__((swift_name("companion")));
- (void)onConfigChangedConfig:(PubliftSharedFuseConfig *)config __attribute__((swift_name("onConfigChanged(config:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)recordFuseLoadWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("recordFuseLoad(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)recordImpressionLeakDisplayTimeMs:(int64_t)displayTimeMs loadedTimeMs:(int64_t)loadedTimeMs code:(NSString *)code instanceId:(NSString *)instanceId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("recordImpressionLeak(displayTimeMs:loadedTimeMs:code:instanceId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Telemetry.Companion")))
@interface PubliftSharedTelemetryCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedTelemetryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("FuseZoneFamilySupplier")))
@protocol PubliftSharedFuseZoneFamilySupplier
@required
- (PubliftSharedFuseZoneFamily * _Nullable)getFamilyCode:(NSString *)code __attribute__((swift_name("getFamily(code:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigFuseZoneFamilySupplier")))
@interface PubliftSharedConfigFuseZoneFamilySupplier : PubliftSharedBase <PubliftSharedFuseZoneFamilySupplier, PubliftSharedConfigListener>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PubliftSharedFuseZoneFamily * _Nullable)getFamilyCode:(NSString *)code __attribute__((swift_name("getFamily(code:)")));
- (void)onConfigChangedConfig:(PubliftSharedFuseConfig *)config __attribute__((swift_name("onConfigChanged(config:)")));
@end

__attribute__((swift_name("FuseZoneSupplier")))
@protocol PubliftSharedFuseZoneSupplier
@required
- (void)addListenerListener:(id<PubliftSharedFuseZoneSupplierListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (PubliftSharedFuseZone * _Nullable)getZone __attribute__((swift_name("getZone()")));
- (void)removeListenerListener:(id<PubliftSharedFuseZoneSupplierListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigFuseZoneSupplier")))
@interface PubliftSharedConfigFuseZoneSupplier : PubliftSharedBase <PubliftSharedFuseZoneSupplier, PubliftSharedConfigListener>
- (instancetype)initWithCode:(NSString *)code __attribute__((swift_name("init(code:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<PubliftSharedFuseZoneSupplierListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (PubliftSharedFuseZone * _Nullable)getZone __attribute__((swift_name("getZone()")));
- (void)onConfigChangedConfig:(PubliftSharedFuseConfig *)config __attribute__((swift_name("onConfigChanged(config:)")));
- (void)removeListenerListener:(id<PubliftSharedFuseZoneSupplierListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@end

__attribute__((swift_name("FuseConfigSupplier")))
@protocol PubliftSharedFuseConfigSupplier
@required
- (void)addListenerListener_:(id<PubliftSharedConfigListener>)listener __attribute__((swift_name("addListener(listener_:)")));
- (PubliftSharedFuseConfig * _Nullable)getConfig __attribute__((swift_name("getConfig()")));
- (void)removeListenerListener_:(id<PubliftSharedConfigListener>)listener __attribute__((swift_name("removeListener(listener_:)")));
@end

__attribute__((swift_name("ConfigResolver")))
@protocol PubliftSharedConfigResolver <PubliftSharedFuseConfigSupplier>
@required
- (void)clearListeners __attribute__((swift_name("clearListeners()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resolveConfigForceUpdate:(BOOL)forceUpdate completionHandler:(void (^)(PubliftSharedFuseConfig * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("resolveConfig(forceUpdate:completionHandler:)")));
- (void)setManualConfigConfig:(NSString * _Nullable)config __attribute__((swift_name("setManualConfig(config:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FusePrebidSize")))
@interface PubliftSharedFusePrebidSize : PubliftSharedBase
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedFusePrebidSizeCompanion *companion __attribute__((swift_name("companion")));
- (PubliftSharedFusePrebidSize *)doCopyWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("doCopy(width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FusePrebidSize.Companion")))
@interface PubliftSharedFusePrebidSizeCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedFusePrebidSizeCompanion *shared __attribute__((swift_name("shared")));
- (id<PubliftSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BreakpointArray")))
@interface PubliftSharedBreakpointArray : PubliftSharedBase
- (instancetype)initWithMinWidth:(uint32_t)minWidth sizes:(NSArray<PubliftSharedFuseSize *> *)sizes __attribute__((swift_name("init(minWidth:sizes:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedBreakpointArray *)doCopyMinWidth:(uint32_t)minWidth sizes:(NSArray<PubliftSharedFuseSize *> *)sizes __attribute__((swift_name("doCopy(minWidth:sizes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)prettyPrint __attribute__((swift_name("prettyPrint()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) uint32_t minWidth __attribute__((swift_name("minWidth")));
@property (readonly) NSArray<PubliftSharedFuseSize *> *sizes __attribute__((swift_name("sizes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BreakpointMap")))
@interface PubliftSharedBreakpointMap : PubliftSharedBase
- (instancetype)initWithXs:(PubliftSharedBreakpointArray *)xs s:(PubliftSharedBreakpointArray * _Nullable)s m:(PubliftSharedBreakpointArray * _Nullable)m l:(PubliftSharedBreakpointArray * _Nullable)l xl:(PubliftSharedBreakpointArray * _Nullable)xl __attribute__((swift_name("init(xs:s:m:l:xl:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedBreakpointMap *)doCopyXs:(PubliftSharedBreakpointArray *)xs s:(PubliftSharedBreakpointArray * _Nullable)s m:(PubliftSharedBreakpointArray * _Nullable)m l:(PubliftSharedBreakpointArray * _Nullable)l xl:(PubliftSharedBreakpointArray * _Nullable)xl __attribute__((swift_name("doCopy(xs:s:m:l:xl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)prettyPrint __attribute__((swift_name("prettyPrint()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PubliftSharedBreakpointArray * _Nullable l __attribute__((swift_name("l")));
@property (readonly) PubliftSharedBreakpointArray * _Nullable m __attribute__((swift_name("m")));
@property (readonly) PubliftSharedBreakpointArray * _Nullable s __attribute__((swift_name("s")));
@property (readonly) PubliftSharedBreakpointArray * _Nullable xl __attribute__((swift_name("xl")));
@property (readonly) PubliftSharedBreakpointArray *xs __attribute__((swift_name("xs")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExperimentConfig")))
@interface PubliftSharedExperimentConfig : PubliftSharedBase
- (instancetype)initWithName:(NSString *)name key:(NSString *)key weight:(int32_t)weight __attribute__((swift_name("init(name:key:weight:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedExperimentConfigCompanion *companion __attribute__((swift_name("companion")));
- (PubliftSharedExperimentConfig *)doCopyName:(NSString *)name key:(NSString *)key weight:(int32_t)weight __attribute__((swift_name("doCopy(name:key:weight:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t weight __attribute__((swift_name("weight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExperimentConfig.Companion")))
@interface PubliftSharedExperimentConfigCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedExperimentConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<PubliftSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseConfig")))
@interface PubliftSharedFuseConfig : PubliftSharedBase
- (instancetype)initWithVersion:(int64_t)version prebid:(PubliftSharedFusePrebidConfig * _Nullable)prebid zones:(NSArray<PubliftSharedFuseZone *> *)zones publicationId:(int32_t)publicationId accountCode:(NSString * _Nullable)accountCode experiments:(NSArray<PubliftSharedExperimentConfig *> * _Nullable)experiments __attribute__((swift_name("init(version:prebid:zones:publicationId:accountCode:experiments:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedFuseConfig *)doCopyVersion:(int64_t)version prebid:(PubliftSharedFusePrebidConfig * _Nullable)prebid zones:(NSArray<PubliftSharedFuseZone *> *)zones publicationId:(int32_t)publicationId accountCode:(NSString * _Nullable)accountCode experiments:(NSArray<PubliftSharedExperimentConfig *> * _Nullable)experiments __attribute__((swift_name("doCopy(version:prebid:zones:publicationId:accountCode:experiments:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (PubliftSharedFuseZone * _Nullable)findZoneCode:(NSString *)code __attribute__((swift_name("findZone(code:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable accountCode __attribute__((swift_name("accountCode")));
@property (readonly) NSArray<PubliftSharedExperimentConfig *> * _Nullable experiments __attribute__((swift_name("experiments")));
@property (readonly) PubliftSharedFusePrebidConfig * _Nullable prebid __attribute__((swift_name("prebid")));
@property (readonly) int32_t publicationId __attribute__((swift_name("publicationId")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@property (readonly) NSArray<PubliftSharedFuseZone *> *zones __attribute__((swift_name("zones")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FusePrebidConfig")))
@interface PubliftSharedFusePrebidConfig : PubliftSharedBase
- (instancetype)initWithUrl:(NSString *)url accountId:(NSString *)accountId __attribute__((swift_name("init(url:accountId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedFusePrebidConfigCompanion *companion __attribute__((swift_name("companion")));
- (PubliftSharedFusePrebidConfig *)doCopyUrl:(NSString *)url accountId:(NSString *)accountId __attribute__((swift_name("doCopy(url:accountId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account_id")
*/
@property (readonly) NSString *accountId __attribute__((swift_name("accountId")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FusePrebidConfig.Companion")))
@interface PubliftSharedFusePrebidConfigCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedFusePrebidConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<PubliftSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("FuseSize")))
@interface PubliftSharedFuseSize : PubliftSharedBase
@property (class, readonly, getter=companion) PubliftSharedFuseSizeCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)prettyPrint __attribute__((swift_name("prettyPrint()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseSize.Companion")))
@interface PubliftSharedFuseSizeCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedFuseSizeCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseSize.Fixed")))
@interface PubliftSharedFuseSizeFixed : PubliftSharedFuseSize
- (instancetype)initWithWidth:(uint32_t)width height:(uint32_t)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedFuseSizeFixed *)doCopyWidth:(uint32_t)width height:(uint32_t)height __attribute__((swift_name("doCopy(width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)prettyPrint __attribute__((swift_name("prettyPrint()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) uint32_t height __attribute__((swift_name("height")));
@property (readonly) uint32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseSize.GamAdaptiveAnchored")))
@interface PubliftSharedFuseSizeGamAdaptiveAnchored : PubliftSharedFuseSize
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)gamAdaptiveAnchored __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedFuseSizeGamAdaptiveAnchored *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)prettyPrint __attribute__((swift_name("prettyPrint()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseSize.GamAdaptiveInline")))
@interface PubliftSharedFuseSizeGamAdaptiveInline : PubliftSharedFuseSize
- (instancetype)initWithMaxHeightOverride:(PubliftSharedUInt * _Nullable)maxHeightOverride __attribute__((swift_name("init(maxHeightOverride:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedFuseSizeGamAdaptiveInline *)doCopyMaxHeightOverride:(PubliftSharedUInt * _Nullable)maxHeightOverride __attribute__((swift_name("doCopy(maxHeightOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (uint32_t)getMaxHeightWindowDimensions:(PubliftSharedWindowDimensions *)windowDimensions __attribute__((swift_name("getMaxHeight(windowDimensions:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)prettyPrint __attribute__((swift_name("prettyPrint()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PubliftSharedUInt * _Nullable maxHeightOverride __attribute__((swift_name("maxHeightOverride")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseSize.GamFluid")))
@interface PubliftSharedFuseSizeGamFluid : PubliftSharedFuseSize
- (instancetype)initWithHeight:(uint32_t)height __attribute__((swift_name("init(height:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedFuseSizeGamFluid *)doCopyHeight:(uint32_t)height __attribute__((swift_name("doCopy(height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)prettyPrint __attribute__((swift_name("prettyPrint()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) uint32_t height __attribute__((swift_name("height")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseTargeting")))
@interface PubliftSharedFuseTargeting : PubliftSharedBase
- (instancetype)initWithKey:(NSString *)key value:(NSArray<NSString *> *)value __attribute__((swift_name("init(key:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedFuseTargetingCompanion *companion __attribute__((swift_name("companion")));
- (PubliftSharedFuseTargeting *)doCopyKey:(NSString *)key value:(NSArray<NSString *> *)value __attribute__((swift_name("doCopy(key:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSArray<NSString *> *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseTargeting.Companion")))
@interface PubliftSharedFuseTargetingCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedFuseTargetingCompanion *shared __attribute__((swift_name("shared")));
- (id<PubliftSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseZone")))
@interface PubliftSharedFuseZone : PubliftSharedBase
- (instancetype)initWithCode:(NSString *)code enabled:(BOOL)enabled gamAdUnitId:(NSString *)gamAdUnitId breakpointMap:(PubliftSharedBreakpointMap *)breakpointMap targeting:(NSArray<PubliftSharedFuseTargeting *> * _Nullable)targeting prebidConfigId:(NSString * _Nullable)prebidConfigId prebidSize:(PubliftSharedFusePrebidSize * _Nullable)prebidSize __attribute__((swift_name("init(code:enabled:gamAdUnitId:breakpointMap:targeting:prebidConfigId:prebidSize:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedFuseZone *)doCopyCode:(NSString *)code enabled:(BOOL)enabled gamAdUnitId:(NSString *)gamAdUnitId breakpointMap:(PubliftSharedBreakpointMap *)breakpointMap targeting:(NSArray<PubliftSharedFuseTargeting *> * _Nullable)targeting prebidConfigId:(NSString * _Nullable)prebidConfigId prebidSize:(PubliftSharedFusePrebidSize * _Nullable)prebidSize __attribute__((swift_name("doCopy(code:enabled:gamAdUnitId:breakpointMap:targeting:prebidConfigId:prebidSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)prettyPrint __attribute__((swift_name("prettyPrint()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PubliftSharedBreakpointMap *breakpointMap __attribute__((swift_name("breakpointMap")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) NSString *gamAdUnitId __attribute__((swift_name("gamAdUnitId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prebid_config_id")
*/
@property (readonly) NSString * _Nullable prebidConfigId __attribute__((swift_name("prebidConfigId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prebid_size")
*/
@property (readonly) PubliftSharedFusePrebidSize * _Nullable prebidSize __attribute__((swift_name("prebidSize")));
@property (readonly) NSArray<PubliftSharedFuseTargeting *> * _Nullable targeting __attribute__((swift_name("targeting")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseZoneFamily")))
@interface PubliftSharedFuseZoneFamily : PubliftSharedBase
- (instancetype)initWithName:(NSString *)name zones:(NSArray<PubliftSharedFuseZone *> *)zones __attribute__((swift_name("init(name:zones:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedFuseZoneFamily *)doCopyName:(NSString *)name zones:(NSArray<PubliftSharedFuseZone *> *)zones __attribute__((swift_name("doCopy(name:zones:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<PubliftSharedFuseZone *> *zones __attribute__((swift_name("zones")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedDI")))
@interface PubliftSharedSharedDI : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sharedDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedSharedDI *shared __attribute__((swift_name("shared")));
- (void)pause __attribute__((swift_name("pause()")));
- (void)resume __attribute__((swift_name("resume()")));
- (void)setupDirPath:(NSString *)dirPath tenantCode:(NSString *)tenantCode tagId:(NSString *)tagId deviceInfo:(id<PubliftSharedDeviceInfo>)deviceInfo userConsentSupplier:(id<PubliftSharedUserConsentSupplier>)userConsentSupplier instanceSupplier:(id<PubliftSharedFuseAdViewInstanceSupplier>)instanceSupplier __attribute__((swift_name("setup(dirPath:tenantCode:tagId:deviceInfo:userConsentSupplier:instanceSupplier:)")));
@property (readonly) id<PubliftSharedConfigResolver> configResolver __attribute__((swift_name("configResolver")));
@property (readonly) PubliftSharedFuseAdViewIdGenerator *idGenerator __attribute__((swift_name("idGenerator")));
@property (readonly) PubliftSharedTelemetry *telemetry __attribute__((swift_name("telemetry")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol PubliftSharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface PubliftSharedKotlinEnum<E> : PubliftSharedBase <PubliftSharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseLogLevel")))
@interface PubliftSharedFuseLogLevel : PubliftSharedKotlinEnum<PubliftSharedFuseLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PubliftSharedFuseLogLevel *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) PubliftSharedFuseLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) PubliftSharedFuseLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) PubliftSharedFuseLogLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) PubliftSharedFuseLogLevel *error __attribute__((swift_name("error")));
+ (PubliftSharedKotlinArray<PubliftSharedFuseLogLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PubliftSharedFuseLogLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseLogger")))
@interface PubliftSharedFuseLogger : PubliftSharedBase
@property (class, readonly, getter=companion) PubliftSharedFuseLoggerCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseLogger.Companion")))
@interface PubliftSharedFuseLoggerCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedFuseLoggerCompanion *shared __attribute__((swift_name("shared")));
- (void)debugMessage:(NSString *)message tag:(NSString * _Nullable)tag throwable:(PubliftSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("debug(message:tag:throwable:)")));
- (void)enableTestMode __attribute__((swift_name("enableTestMode()")));
- (void)errorMessage:(NSString *)message tag:(NSString * _Nullable)tag throwable:(PubliftSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("error(message:tag:throwable:)")));
- (void)infoMessage:(NSString *)message tag:(NSString * _Nullable)tag throwable:(PubliftSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("info(message:tag:throwable:)")));
- (void)logLevel:(PubliftSharedFuseLogLevel *)level message:(NSString *)message tag:(NSString * _Nullable)tag throwable:(PubliftSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("log(level:message:tag:throwable:)")));
- (void)verboseMessage:(NSString *)message tag:(NSString * _Nullable)tag throwable:(PubliftSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("verbose(message:tag:throwable:)")));
- (void)warnMessage:(NSString *)message tag:(NSString * _Nullable)tag throwable:(PubliftSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("warn(message:tag:throwable:)")));
@property PubliftSharedFuseLogLevel *logLevel __attribute__((swift_name("logLevel")));
@end

__attribute__((swift_name("FuseAdRequestState")))
@interface PubliftSharedFuseAdRequestState<V> : PubliftSharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseAdRequestStateError")))
@interface PubliftSharedFuseAdRequestStateError<V> : PubliftSharedFuseAdRequestState<V>
- (instancetype)initWithError:(id)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedFuseAdRequestStateError<V> *)doCopyError:(id)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseAdRequestStateLoaded")))
@interface PubliftSharedFuseAdRequestStateLoaded<V> : PubliftSharedFuseAdRequestState<V>
- (instancetype)initWithAdViewInstance:(PubliftSharedFuseAdViewInstance<V> *)adViewInstance __attribute__((swift_name("init(adViewInstance:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedFuseAdRequestStateLoaded<V> *)doCopyAdViewInstance:(PubliftSharedFuseAdViewInstance<V> *)adViewInstance __attribute__((swift_name("doCopy(adViewInstance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PubliftSharedFuseAdViewInstance<V> *adViewInstance __attribute__((swift_name("adViewInstance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseAdRequestStateLoading")))
@interface PubliftSharedFuseAdRequestStateLoading<V> : PubliftSharedFuseAdRequestState<V>
- (instancetype)initWithAdViewInstance:(PubliftSharedFuseAdViewInstance<V> *)adViewInstance __attribute__((swift_name("init(adViewInstance:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedFuseAdRequestStateLoading<V> *)doCopyAdViewInstance:(PubliftSharedFuseAdViewInstance<V> *)adViewInstance __attribute__((swift_name("doCopy(adViewInstance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PubliftSharedFuseAdViewInstance<V> *adViewInstance __attribute__((swift_name("adViewInstance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseAdRequestStateNotLoaded")))
@interface PubliftSharedFuseAdRequestStateNotLoaded<V> : PubliftSharedFuseAdRequestState<V>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("FuseAdViewDimension")))
@interface PubliftSharedFuseAdViewDimension : PubliftSharedBase
- (BOOL)valueFitsValue:(uint32_t)value __attribute__((swift_name("valueFits(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseAdViewDimension.Fixed")))
@interface PubliftSharedFuseAdViewDimensionFixed : PubliftSharedFuseAdViewDimension
- (instancetype)initWithValue:(uint32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedFuseAdViewDimensionFixed *)doCopyValue:(uint32_t)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (BOOL)valueFitsValue:(uint32_t)value __attribute__((swift_name("valueFits(value:)")));
@property (readonly) uint32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseAdViewDimension.Unrestricted")))
@interface PubliftSharedFuseAdViewDimensionUnrestricted : PubliftSharedFuseAdViewDimension
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unrestricted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedFuseAdViewDimensionUnrestricted *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (BOOL)valueFitsValue:(uint32_t)value __attribute__((swift_name("valueFits(value:)")));
@end

__attribute__((swift_name("FuseAdViewDimensionsSupplier")))
@protocol PubliftSharedFuseAdViewDimensionsSupplier
@required
- (void)addListenerListener__:(id<PubliftSharedFuseAdViewDimensionsSupplierListener>)listener __attribute__((swift_name("addListener(listener__:)")));
- (PubliftSharedFuseAdViewDimension * _Nullable)getHeight __attribute__((swift_name("getHeight()")));
- (PubliftSharedFuseAdViewDimension * _Nullable)getWidth __attribute__((swift_name("getWidth()")));
- (void)removeListenerListener__:(id<PubliftSharedFuseAdViewDimensionsSupplierListener>)listener __attribute__((swift_name("removeListener(listener__:)")));
@end

__attribute__((swift_name("FuseAdViewDimensionsSupplierListener")))
@protocol PubliftSharedFuseAdViewDimensionsSupplierListener
@required
- (void)onAdViewDimensionsChangedWidth:(PubliftSharedFuseAdViewDimension *)width height:(PubliftSharedFuseAdViewDimension *)height __attribute__((swift_name("onAdViewDimensionsChanged(width:height:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseAdViewIdGenerator")))
@interface PubliftSharedFuseAdViewIdGenerator : PubliftSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)buildInstanceIdCode:(NSString *)code ordinal:(int32_t)ordinal __attribute__((swift_name("buildInstanceId(code:ordinal:)")));
- (int32_t)nextOrdinalCode:(NSString *)code __attribute__((swift_name("nextOrdinal(code:)")));
@end

__attribute__((swift_name("FuseAdViewInspector")))
@interface PubliftSharedFuseAdViewInspector : PubliftSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)doShowTitle:(NSString *)title items:(NSArray<NSString *> *)items onDismiss:(void (^)(void))onDismiss __attribute__((swift_name("doShow(title:items:onDismiss:)")));
- (void)showTitle:(NSString *)title infoProviders:(NSArray<id<PubliftSharedFuseAdViewInspectorInfoProvider>> *)infoProviders __attribute__((swift_name("show(title:infoProviders:)")));
@end

__attribute__((swift_name("FuseAdViewInspectorInfoProvider")))
@protocol PubliftSharedFuseAdViewInspectorInfoProvider
@required
- (NSDictionary<NSString *, NSString *> *)provideInfo __attribute__((swift_name("provideInfo()")));
@end

__attribute__((swift_name("FuseAdViewInstance")))
@interface PubliftSharedFuseAdViewInstance<V> : PubliftSharedBase <PubliftSharedFuseAdViewInspectorInfoProvider>
- (instancetype)initWithZone:(PubliftSharedFuseZone *)zone requestParams:(PubliftSharedGamRequestParams *)requestParams idGenerator:(PubliftSharedFuseAdViewIdGenerator *)idGenerator __attribute__((swift_name("init(zone:requestParams:idGenerator:)"))) __attribute__((objc_designated_initializer));
- (NSString *)adViewDebugInfo __attribute__((swift_name("adViewDebugInfo()")));
- (void)addListenerListener___:(PubliftSharedFuseAdViewInstanceListener<V> *)listener __attribute__((swift_name("addListener(listener___:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)applyPrebidSize __attribute__((swift_name("applyPrebidSize()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)applyRequestParams __attribute__((swift_name("applyRequestParams()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)createPrebidAdUnit __attribute__((swift_name("createPrebidAdUnit()")));
- (void)destroy __attribute__((swift_name("destroy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)doInit __attribute__((swift_name("doInit()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (uint32_t)getAdViewHeight __attribute__((swift_name("getAdViewHeight()")));
- (void)loadAdRequestManager:(id<PubliftSharedFuseAdViewRequestManager>)requestManager __attribute__((swift_name("loadAd(requestManager:)")));
- (void)logLevel:(PubliftSharedFuseLogLevel *)level msgBuilder:(NSString *(^)(void))msgBuilder __attribute__((swift_name("log(level:msgBuilder:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)processAdLoadErrorError:(id)error message:(NSString * _Nullable)message __attribute__((swift_name("processAdLoadError(error:message:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)processAdLoaded __attribute__((swift_name("processAdLoaded()")));
- (NSDictionary<NSString *, NSString *> *)provideInfo __attribute__((swift_name("provideInfo()")));
- (void)removeListenerListener___:(PubliftSharedFuseAdViewInstanceListener<V> *)listener __attribute__((swift_name("removeListener(listener___:)")));
- (void)requestAd __attribute__((swift_name("requestAd()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)updateAdHeight __attribute__((swift_name("updateAdHeight()")));
@property (readonly) PubliftSharedLong * _Nullable adDidLoadFirstTimeMillis __attribute__((swift_name("adDidLoadFirstTimeMillis")));
@property (readonly) V adView __attribute__((swift_name("adView")));
@property (readonly) NSString *code __attribute__((swift_name("code")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property PubliftSharedFuseAdViewDimension *currentAdHeight __attribute__((swift_name("currentAdHeight")));
@property (readonly) NSString *instanceId __attribute__((swift_name("instanceId")));
@property (readonly) PubliftSharedGamRequestParams *requestParams __attribute__((swift_name("requestParams")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property PubliftSharedFuseAdRequestState<V> *state __attribute__((swift_name("state")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) PubliftSharedFuseZone *zone __attribute__((swift_name("zone")));
@end

__attribute__((swift_name("FuseAdViewInstanceFactory")))
@interface PubliftSharedFuseAdViewInstanceFactory<V> : PubliftSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PubliftSharedFuseAdViewInstance<V> *)createViewZone:(PubliftSharedFuseZone *)zone sizes:(NSArray<PubliftSharedGamSize *> *)sizes customTargeting:(NSDictionary<NSString *, NSArray<NSString *> *> * _Nullable)customTargeting __attribute__((swift_name("createView(zone:sizes:customTargeting:)")));
@end

__attribute__((swift_name("FuseAdViewInstanceListener")))
@interface PubliftSharedFuseAdViewInstanceListener<V> : PubliftSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onAdHeightChangedHeight:(PubliftSharedFuseAdViewDimension *)height __attribute__((swift_name("onAdHeightChanged(height:)")));
- (void)onStateChangedState:(PubliftSharedFuseAdRequestState<V> *)state __attribute__((swift_name("onStateChanged(state:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseAdViewLogEvent")))
@interface PubliftSharedFuseAdViewLogEvent : PubliftSharedBase
- (instancetype)initWithCode:(NSString *)code instance:(PubliftSharedFuseAdViewInstance<id> * _Nullable)instance __attribute__((swift_name("init(code:instance:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedFuseAdViewLogEventCompanion *companion __attribute__((swift_name("companion")));
- (void)logLevel:(PubliftSharedFuseLogLevel *)level msgBuilder:(NSString *(^)(void))msgBuilder __attribute__((swift_name("log(level:msgBuilder:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseAdViewLogEvent.Companion")))
@interface PubliftSharedFuseAdViewLogEventCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedFuseAdViewLogEventCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("FuseAdViewReloadHandlerListener")))
@protocol PubliftSharedFuseAdViewReloadHandlerListener
@required
- (void)onReloadRequiredZone:(PubliftSharedFuseZone *)zone sizes:(NSArray<PubliftSharedGamSize *> *)sizes __attribute__((swift_name("onReloadRequired(zone:sizes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseAdViewModel")))
@interface PubliftSharedFuseAdViewModel<V> : PubliftSharedFuseAdViewInstanceListener<V> <PubliftSharedFuseAdViewReloadHandlerListener, PubliftSharedFuseAdViewInspectorInfoProvider>
- (instancetype)initWithAdViewDimensionsSupplier:(id<PubliftSharedFuseAdViewDimensionsSupplier>)adViewDimensionsSupplier windowDimensionsSupplier:(id<PubliftSharedWindowDimensionsSupplier>)windowDimensionsSupplier zoneSupplier:(id<PubliftSharedFuseZoneSupplier>)zoneSupplier screenIdSupplier:(id<PubliftSharedFuseScreenIdSupplier>)screenIdSupplier sizeTransformer:(id<PubliftSharedGamSizeTransformer>)sizeTransformer viewDidAppearSupplier:(id<PubliftSharedViewDidAppearSupplier>)viewDidAppearSupplier requestManager:(id<PubliftSharedFuseAdViewRequestManager>)requestManager adViewInstanceFactory:(PubliftSharedFuseAdViewInstanceFactory<V> *)adViewInstanceFactory instanceSupplier:(id<PubliftSharedFuseAdViewInstanceSupplier>)instanceSupplier adViewInspector:(PubliftSharedFuseAdViewInspector *)adViewInspector telemetry:(PubliftSharedTelemetry *)telemetry customTargeting:(NSDictionary<NSString *, NSArray<NSString *> *> * _Nullable)customTargeting __attribute__((swift_name("init(adViewDimensionsSupplier:windowDimensionsSupplier:zoneSupplier:screenIdSupplier:sizeTransformer:viewDidAppearSupplier:requestManager:adViewInstanceFactory:instanceSupplier:adViewInspector:telemetry:customTargeting:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)addListenerListener:(PubliftSharedFuseAdViewInstanceListener<V> *)listener __attribute__((swift_name("addListener(listener:)")));
- (void)logLevel:(PubliftSharedFuseLogLevel *)level msgBuilder:(NSString *(^)(void))msgBuilder __attribute__((swift_name("log(level:msgBuilder:)")));
- (void)onAdHeightChangedHeight:(PubliftSharedFuseAdViewDimension *)height __attribute__((swift_name("onAdHeightChanged(height:)")));
- (void)onLeakDetectedViewDidAppearTimeMillis:(int64_t)viewDidAppearTimeMillis adDidLoadTimeMillis:(int64_t)adDidLoadTimeMillis __attribute__((swift_name("onLeakDetected(viewDidAppearTimeMillis:adDidLoadTimeMillis:)")));
- (void)onReloadRequiredZone:(PubliftSharedFuseZone *)zone sizes:(NSArray<PubliftSharedGamSize *> *)sizes __attribute__((swift_name("onReloadRequired(zone:sizes:)")));
- (void)onStateChangedState:(PubliftSharedFuseAdRequestState<V> *)state __attribute__((swift_name("onStateChanged(state:)")));
- (NSDictionary<NSString *, NSString *> *)provideInfo __attribute__((swift_name("provideInfo()")));
- (void)removeListenerListener:(PubliftSharedFuseAdViewInstanceListener<V> *)listener __attribute__((swift_name("removeListener(listener:)")));
- (void)showAdInspector __attribute__((swift_name("showAdInspector()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseAdViewReloadHandler")))
@interface PubliftSharedFuseAdViewReloadHandler : PubliftSharedBase
- (instancetype)initWithWindowDimensionsSupplier:(id<PubliftSharedWindowDimensionsSupplier>)windowDimensionsSupplier adViewDimensionsSupplier:(id<PubliftSharedFuseAdViewDimensionsSupplier>)adViewDimensionsSupplier zoneSupplier:(id<PubliftSharedFuseZoneSupplier>)zoneSupplier sizeTransformer:(id<PubliftSharedGamSizeTransformer>)sizeTransformer logEventPrinter:(void (^ _Nullable)(PubliftSharedFuseLogLevel *, NSString *(^)(void)))logEventPrinter __attribute__((swift_name("init(windowDimensionsSupplier:adViewDimensionsSupplier:zoneSupplier:sizeTransformer:logEventPrinter:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<PubliftSharedFuseAdViewReloadHandlerListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (PubliftSharedFuseBreakpointMapTransformer *)getCurrentBreakpointMapTransformer __attribute__((swift_name("getCurrentBreakpointMapTransformer()")));
- (void)removeListenerListener:(id<PubliftSharedFuseAdViewReloadHandlerListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@end

__attribute__((swift_name("FuseAdViewRequestManager")))
@protocol PubliftSharedFuseAdViewRequestManager
@required
- (void)cancelAdViewInstance:(PubliftSharedFuseAdViewInstance<id> *)adViewInstance __attribute__((swift_name("cancel(adViewInstance:)")));
- (void)loadAdViewInstance:(PubliftSharedFuseAdViewInstance<id> *)adViewInstance __attribute__((swift_name("load(adViewInstance:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseAdViewRequestSizeSupplier")))
@interface PubliftSharedFuseAdViewRequestSizeSupplier : PubliftSharedBase
- (instancetype)initWithWindowDimensionsSupplier:(id<PubliftSharedWindowDimensionsSupplier>)windowDimensionsSupplier adViewDimensionsSupplier:(id<PubliftSharedFuseAdViewDimensionsSupplier>)adViewDimensionsSupplier fuseZoneSupplier:(id<PubliftSharedFuseZoneSupplier>)fuseZoneSupplier gamSizeTransformer:(id<PubliftSharedGamSizeTransformer>)gamSizeTransformer logEventPrinter:(void (^ _Nullable)(PubliftSharedFuseLogLevel *, NSString *(^)(void)))logEventPrinter __attribute__((swift_name("init(windowDimensionsSupplier:adViewDimensionsSupplier:fuseZoneSupplier:gamSizeTransformer:logEventPrinter:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<PubliftSharedFuseAdViewRequestSizeSupplierListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (PubliftSharedFuseBreakpointMapTransformer *)getCurrentBreakpointMapTransformer __attribute__((swift_name("getCurrentBreakpointMapTransformer()")));
- (NSArray<PubliftSharedGamSize *> * _Nullable)getRequestSizes __attribute__((swift_name("getRequestSizes()")));
- (void)removeListenerListener:(id<PubliftSharedFuseAdViewRequestSizeSupplierListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@end

__attribute__((swift_name("FuseAdViewRequestSizeSupplierListener")))
@protocol PubliftSharedFuseAdViewRequestSizeSupplierListener
@required
- (void)onRequestSizesChangedSizes:(NSArray<PubliftSharedGamSize *> *)sizes __attribute__((swift_name("onRequestSizesChanged(sizes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseBreakpointMapTransformer")))
@interface PubliftSharedFuseBreakpointMapTransformer : PubliftSharedBase
- (instancetype)initWithGamSizeTransformer:(id<PubliftSharedGamSizeTransformer>)gamSizeTransformer windowDimensions:(PubliftSharedWindowDimensions *)windowDimensions viewWidth:(PubliftSharedFuseAdViewDimension * _Nullable)viewWidth viewHeight:(PubliftSharedFuseAdViewDimension * _Nullable)viewHeight __attribute__((swift_name("init(gamSizeTransformer:windowDimensions:viewWidth:viewHeight:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedFuseBreakpointMapTransformer *)doCopyGamSizeTransformer:(id<PubliftSharedGamSizeTransformer>)gamSizeTransformer windowDimensions:(PubliftSharedWindowDimensions *)windowDimensions viewWidth:(PubliftSharedFuseAdViewDimension * _Nullable)viewWidth viewHeight:(PubliftSharedFuseAdViewDimension * _Nullable)viewHeight __attribute__((swift_name("doCopy(gamSizeTransformer:windowDimensions:viewWidth:viewHeight:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSArray<PubliftSharedGamSize *> * _Nullable)getSizesBreakpointMap:(PubliftSharedBreakpointMap *)breakpointMap __attribute__((swift_name("getSizes(breakpointMap:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PubliftSharedGamSizeTransformer> gamSizeTransformer __attribute__((swift_name("gamSizeTransformer")));
@property (readonly) PubliftSharedFuseAdViewDimension * _Nullable viewHeight __attribute__((swift_name("viewHeight")));
@property (readonly) PubliftSharedFuseAdViewDimension * _Nullable viewWidth __attribute__((swift_name("viewWidth")));
@property (readonly) PubliftSharedWindowDimensions *windowDimensions __attribute__((swift_name("windowDimensions")));
@end

__attribute__((swift_name("FuseScreenIdSupplier")))
@protocol PubliftSharedFuseScreenIdSupplier
@required
- (NSString * _Nullable)getScreenId __attribute__((swift_name("getScreenId()")));
@end

__attribute__((swift_name("FuseZoneSupplierListener")))
@protocol PubliftSharedFuseZoneSupplierListener
@required
- (void)onZoneChangedZone:(PubliftSharedFuseZone *)zone __attribute__((swift_name("onZoneChanged(zone:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueuedAdViewRequestManager")))
@interface PubliftSharedQueuedAdViewRequestManager : PubliftSharedBase <PubliftSharedFuseAdViewRequestManager>
- (instancetype)initWithMaxActiveRequests:(int32_t)maxActiveRequests __attribute__((swift_name("init(maxActiveRequests:)"))) __attribute__((objc_designated_initializer));
- (uint32_t)activeRequests __attribute__((swift_name("activeRequests()")));
- (void)cancelAdViewInstance:(PubliftSharedFuseAdViewInstance<id> *)adViewInstance __attribute__((swift_name("cancel(adViewInstance:)")));
- (void)loadAdViewInstance:(PubliftSharedFuseAdViewInstance<id> *)adViewInstance __attribute__((swift_name("load(adViewInstance:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueuedAdViewRequestManagerRequestTask")))
@interface PubliftSharedQueuedAdViewRequestManagerRequestTask<V> : PubliftSharedFuseAdViewInstanceListener<V>
- (instancetype)initWithAdViewInstance:(PubliftSharedFuseAdViewInstance<V> *)adViewInstance requestLimiter:(id<PubliftSharedKotlinx_coroutines_coreSemaphore>)requestLimiter __attribute__((swift_name("init(adViewInstance:requestLimiter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)complete __attribute__((swift_name("complete()")));
- (void)onAdHeightChangedHeight:(PubliftSharedFuseAdViewDimension *)height __attribute__((swift_name("onAdHeightChanged(height:)")));
- (void)onStateChangedState:(PubliftSharedFuseAdRequestState<V> *)state __attribute__((swift_name("onStateChanged(state:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("start(completionHandler:)")));
@property (readonly) PubliftSharedFuseAdViewInstance<V> *adViewInstance __attribute__((swift_name("adViewInstance")));
@property void (^invokeOnCompletion)(void) __attribute__((swift_name("invokeOnCompletion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleAdViewRequestManager")))
@interface PubliftSharedSimpleAdViewRequestManager : PubliftSharedBase <PubliftSharedFuseAdViewRequestManager>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancelAdViewInstance:(PubliftSharedFuseAdViewInstance<id> *)adViewInstance __attribute__((swift_name("cancel(adViewInstance:)")));
- (void)loadAdViewInstance:(PubliftSharedFuseAdViewInstance<id> *)adViewInstance __attribute__((swift_name("load(adViewInstance:)")));
@end

__attribute__((swift_name("ViewDidAppearSupplier")))
@protocol PubliftSharedViewDidAppearSupplier
@required
- (void)addListenerListener____:(id<PubliftSharedViewDidAppearSupplierListener>)listener __attribute__((swift_name("addListener(listener____:)")));
- (void)removeListenerListener____:(id<PubliftSharedViewDidAppearSupplierListener>)listener __attribute__((swift_name("removeListener(listener____:)")));
@end

__attribute__((swift_name("ViewDidAppearSupplierListener")))
@protocol PubliftSharedViewDidAppearSupplierListener
@required
- (void)onViewDidAppear __attribute__((swift_name("onViewDidAppear()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WindowDimensions")))
@interface PubliftSharedWindowDimensions : PubliftSharedBase
- (instancetype)initWithWidth:(uint32_t)width height:(uint32_t)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedWindowDimensions *)doCopyWidth:(uint32_t)width height:(uint32_t)height __attribute__((swift_name("doCopy(width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)prettyPrint __attribute__((swift_name("prettyPrint()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) uint32_t height __attribute__((swift_name("height")));
@property (readonly) uint32_t width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("WindowDimensionsSupplier")))
@protocol PubliftSharedWindowDimensionsSupplier
@required
- (PubliftSharedWindowDimensions *)getDimensions __attribute__((swift_name("getDimensions()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GamRequestParams")))
@interface PubliftSharedGamRequestParams : PubliftSharedBase
- (instancetype)initWithAdUnitId:(NSString *)adUnitId adSizes:(NSArray<PubliftSharedGamSize *> *)adSizes customTargeting:(NSDictionary<NSString *, NSArray<NSString *> *> * _Nullable)customTargeting __attribute__((swift_name("init(adUnitId:adSizes:customTargeting:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedGamRequestParams *)doCopyAdUnitId:(NSString *)adUnitId adSizes:(NSArray<PubliftSharedGamSize *> *)adSizes customTargeting:(NSDictionary<NSString *, NSArray<NSString *> *> * _Nullable)customTargeting __attribute__((swift_name("doCopy(adUnitId:adSizes:customTargeting:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PubliftSharedGamSize *> *adSizes __attribute__((swift_name("adSizes")));
@property (readonly) NSString *adUnitId __attribute__((swift_name("adUnitId")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> * _Nullable customTargeting __attribute__((swift_name("customTargeting")));
@end

__attribute__((swift_name("GamSize")))
@interface PubliftSharedGamSize : PubliftSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) uint32_t height __attribute__((swift_name("height")));
@property (readonly) BOOL isFluid __attribute__((swift_name("isFluid")));
@property (readonly) BOOL isValid __attribute__((swift_name("isValid")));
@property (readonly) uint32_t width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("GamSizeTransformer")))
@protocol PubliftSharedGamSizeTransformer
@required
- (PubliftSharedGamSize *)transformSize:(PubliftSharedFuseSize *)size windowDimensions:(PubliftSharedWindowDimensions *)windowDimensions actualViewWidth:(uint32_t)actualViewWidth __attribute__((swift_name("transform(size:windowDimensions:actualViewWidth:)")));
@end

__attribute__((swift_name("FuseAdViewCacheStrategy")))
@protocol PubliftSharedFuseAdViewCacheStrategy
@required
- (NSArray<PubliftSharedFuseZone *> *)getZonesToPreloadFamily:(PubliftSharedFuseZoneFamily *)family zone:(PubliftSharedFuseZone *)zone previousCached:(BOOL)previousCached __attribute__((swift_name("getZonesToPreload(family:zone:previousCached:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseAdViewInstanceCache")))
@interface PubliftSharedFuseAdViewInstanceCache<V> : PubliftSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PubliftSharedFuseAdViewInstance<V> * _Nullable)findInstanceScreenId:(NSString * _Nullable)screenId params:(PubliftSharedGamRequestParams *)params __attribute__((swift_name("findInstance(screenId:params:)")));
- (void)saveInstanceScreenId:(NSString * _Nullable)screenId instance:(PubliftSharedFuseAdViewInstance<V> *)instance __attribute__((swift_name("saveInstance(screenId:instance:)")));
@end

__attribute__((swift_name("FuseAdViewInstanceSupplier")))
@protocol PubliftSharedFuseAdViewInstanceSupplier
@required
- (PubliftSharedFuseAdViewInstance<id> *)findViewInstanceFactory:(PubliftSharedFuseAdViewInstanceFactory<id> *)factory breakpointMapTransformer:(PubliftSharedFuseBreakpointMapTransformer *)breakpointMapTransformer zone:(PubliftSharedFuseZone *)zone sizes:(NSArray<PubliftSharedGamSize *> *)sizes customTargeting:(NSDictionary<NSString *, NSArray<NSString *> *> * _Nullable)customTargeting screenId:(NSString * _Nullable)screenId __attribute__((swift_name("findViewInstance(factory:breakpointMapTransformer:zone:sizes:customTargeting:screenId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FusePreloadNextAdViewCacheStrategy")))
@interface PubliftSharedFusePreloadNextAdViewCacheStrategy : PubliftSharedBase <PubliftSharedFuseAdViewCacheStrategy>
- (instancetype)initWithPreloadNextItemsCount:(int32_t)preloadNextItemsCount __attribute__((swift_name("init(preloadNextItemsCount:)"))) __attribute__((objc_designated_initializer));
- (NSArray<PubliftSharedFuseZone *> *)getZonesToPreloadFamily:(PubliftSharedFuseZoneFamily *)family zone:(PubliftSharedFuseZone *)zone previousCached:(BOOL)previousCached __attribute__((swift_name("getZonesToPreload(family:zone:previousCached:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreloadAdViewInstanceSupplier")))
@interface PubliftSharedPreloadAdViewInstanceSupplier<V> : PubliftSharedBase <PubliftSharedFuseAdViewInstanceSupplier>
- (instancetype)initWithRequestManager:(id<PubliftSharedFuseAdViewRequestManager>)requestManager familySupplier:(id<PubliftSharedFuseZoneFamilySupplier>)familySupplier strategy:(id<PubliftSharedFuseAdViewCacheStrategy>)strategy __attribute__((swift_name("init(requestManager:familySupplier:strategy:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedFuseAdViewInstance<V> *)findViewInstanceFactory:(PubliftSharedFuseAdViewInstanceFactory<V> *)factory breakpointMapTransformer:(PubliftSharedFuseBreakpointMapTransformer *)breakpointMapTransformer zone:(PubliftSharedFuseZone *)zone sizes:(NSArray<PubliftSharedGamSize *> *)sizes customTargeting:(NSDictionary<NSString *, NSArray<NSString *> *> * _Nullable)customTargeting screenId:(NSString * _Nullable)screenId __attribute__((swift_name("findViewInstance(factory:breakpointMapTransformer:zone:sizes:customTargeting:screenId:)")));
@property (readonly) id<PubliftSharedFuseAdViewRequestManager> requestManager __attribute__((swift_name("requestManager")));
@end

__attribute__((swift_name("UserConsentSupplier")))
@protocol PubliftSharedUserConsentSupplier
@required
- (PubliftSharedBoolean * _Nullable)hasPurposeConsentIndex:(int32_t)index __attribute__((swift_name("hasPurposeConsent(index:)")));
- (BOOL)hasUserConsent __attribute__((swift_name("hasUserConsent()")));
@property (readonly) NSString * _Nullable consentString __attribute__((swift_name("consentString")));
@property (readonly) BOOL hasCMP __attribute__((swift_name("hasCMP")));
@property (readonly) BOOL isCCPA __attribute__((swift_name("isCCPA")));
@property (readonly) BOOL isGDPR __attribute__((swift_name("isGDPR")));
@property (readonly) NSString * _Nullable purposeConsents __attribute__((swift_name("purposeConsents")));
@property (readonly) NSString * _Nullable usPrivacyString __attribute__((swift_name("usPrivacyString")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trie")))
@interface PubliftSharedTrie : PubliftSharedBase
- (instancetype)initWithSeparate:(NSArray<NSString *> *(^)(NSString *))separate __attribute__((swift_name("init(separate:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedTrie *)compress __attribute__((swift_name("compress()")));
- (NSDictionary<NSString *, NSArray<NSString *> *> *)findGroupsChildrenSizeLimit:(int32_t)childrenSizeLimit __attribute__((swift_name("findGroups(childrenSizeLimit:)")));
- (void)insertWord:(NSString *)word __attribute__((swift_name("insert(word:)")));
- (BOOL)searchWord:(NSString *)word __attribute__((swift_name("search(word:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigLoaderImplKt")))
@interface PubliftSharedConfigLoaderImplKt : PubliftSharedBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)delayUntilInstant:(PubliftSharedKotlinx_datetimeInstant *)instant completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delayUntil(instant:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuseAdViewDimensionsSupplierKt")))
@interface PubliftSharedFuseAdViewDimensionsSupplierKt : PubliftSharedBase
+ (NSString *)prettyPrint:(id<PubliftSharedFuseAdViewDimensionsSupplier>)receiver __attribute__((swift_name("prettyPrint(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringExtKt")))
@interface PubliftSharedStringExtKt : PubliftSharedBase
+ (NSArray<NSString *> *)splitWithDelimiters:(NSString *)receiver pattern:(NSString *)pattern __attribute__((swift_name("splitWithDelimiters(_:pattern:)")));
+ (NSArray<NSString *> *)splitWithDelimiters:(NSString *)receiver pattern_:(PubliftSharedKotlinRegex *)pattern __attribute__((swift_name("splitWithDelimiters(_:pattern_:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol PubliftSharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<PubliftSharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol PubliftSharedKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface PubliftSharedKtor_client_coreHttpClient : PubliftSharedBase <PubliftSharedKotlinx_coroutines_coreCoroutineScope, PubliftSharedKtor_ioCloseable>
- (instancetype)initWithEngine:(id<PubliftSharedKtor_client_coreHttpClientEngine>)engine userConfig:(PubliftSharedKtor_client_coreHttpClientConfig<PubliftSharedKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (PubliftSharedKtor_client_coreHttpClient *)configBlock:(void (^)(PubliftSharedKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<PubliftSharedKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PubliftSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<PubliftSharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<PubliftSharedKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) PubliftSharedKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) PubliftSharedKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) PubliftSharedKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) PubliftSharedKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) PubliftSharedKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) PubliftSharedKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface PubliftSharedKotlinThrowable : PubliftSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PubliftSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PubliftSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (PubliftSharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PubliftSharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface PubliftSharedKotlinException : PubliftSharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PubliftSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PubliftSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface PubliftSharedKotlinRuntimeException : PubliftSharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PubliftSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PubliftSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface PubliftSharedKotlinIllegalStateException : PubliftSharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PubliftSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PubliftSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface PubliftSharedKotlinCancellationException : PubliftSharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PubliftSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PubliftSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol PubliftSharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<PubliftSharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PubliftSharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol PubliftSharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<PubliftSharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<PubliftSharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol PubliftSharedKotlinx_serialization_coreKSerializer <PubliftSharedKotlinx_serialization_coreSerializationStrategy, PubliftSharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PubliftSharedKotlinEnumCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PubliftSharedKotlinArray<T> : PubliftSharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PubliftSharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PubliftSharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSemaphore")))
@protocol PubliftSharedKotlinx_coroutines_coreSemaphore
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)acquireWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("acquire(completionHandler:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (BOOL)tryAcquire __attribute__((swift_name("tryAcquire()")));
@property (readonly) int32_t availablePermits __attribute__((swift_name("availablePermits")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/InstantIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface PubliftSharedKotlinx_datetimeInstant : PubliftSharedBase <PubliftSharedKotlinComparable>
@property (class, readonly, getter=companion) PubliftSharedKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(PubliftSharedKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (PubliftSharedKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(PubliftSharedKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (PubliftSharedKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex")))
@interface PubliftSharedKotlinRegex : PubliftSharedBase
- (instancetype)initWithPattern:(NSString *)pattern __attribute__((swift_name("init(pattern:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern options:(NSSet<PubliftSharedKotlinRegexOption *> *)options __attribute__((swift_name("init(pattern:options:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern option:(PubliftSharedKotlinRegexOption *)option __attribute__((swift_name("init(pattern:option:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedKotlinRegexCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsMatchInInput:(id)input __attribute__((swift_name("containsMatchIn(input:)")));
- (id<PubliftSharedKotlinMatchResult> _Nullable)findInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("find(input:startIndex:)")));
- (id<PubliftSharedKotlinSequence>)findAllInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("findAll(input:startIndex:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (id<PubliftSharedKotlinMatchResult> _Nullable)matchAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchAt(input:index:)")));
- (id<PubliftSharedKotlinMatchResult> _Nullable)matchEntireInput:(id)input __attribute__((swift_name("matchEntire(input:)")));
- (BOOL)matchesInput:(id)input __attribute__((swift_name("matches(input:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (BOOL)matchesAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchesAt(input:index:)")));
- (NSString *)replaceInput:(id)input transform:(id (^)(id<PubliftSharedKotlinMatchResult>))transform __attribute__((swift_name("replace(input:transform:)")));
- (NSString *)replaceInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replace(input:replacement:)")));
- (NSString *)replaceFirstInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replaceFirst(input:replacement:)")));
- (NSArray<NSString *> *)splitInput:(id)input limit:(int32_t)limit __attribute__((swift_name("split(input:limit:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.6")
*/
- (id<PubliftSharedKotlinSequence>)splitToSequenceInput:(id)input limit:(int32_t)limit __attribute__((swift_name("splitToSequence(input:limit:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<PubliftSharedKotlinRegexOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol PubliftSharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<PubliftSharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<PubliftSharedKotlinCoroutineContextElement> _Nullable)getKey:(id<PubliftSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<PubliftSharedKotlinCoroutineContext>)minusKeyKey:(id<PubliftSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<PubliftSharedKotlinCoroutineContext>)plusContext:(id<PubliftSharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol PubliftSharedKtor_client_coreHttpClientEngine <PubliftSharedKotlinx_coroutines_coreCoroutineScope, PubliftSharedKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(PubliftSharedKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(PubliftSharedKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(PubliftSharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) PubliftSharedKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) PubliftSharedKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<PubliftSharedKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface PubliftSharedKtor_client_coreHttpClientEngineConfig : PubliftSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property PubliftSharedKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((deprecated("The [threadsCount] property is deprecated. The [Dispatchers.IO] is used by default.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface PubliftSharedKtor_client_coreHttpClientConfig<T> : PubliftSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PubliftSharedKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(PubliftSharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<PubliftSharedKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(PubliftSharedKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(PubliftSharedKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol PubliftSharedKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol PubliftSharedKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(PubliftSharedKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(PubliftSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(PubliftSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(PubliftSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(PubliftSharedKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(PubliftSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(PubliftSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(PubliftSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<PubliftSharedKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface PubliftSharedKtor_eventsEvents : PubliftSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(PubliftSharedKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<PubliftSharedKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(PubliftSharedKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(PubliftSharedKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface PubliftSharedKtor_utilsPipeline<TSubject, TContext> : PubliftSharedBase
- (instancetype)initWithPhases:(PubliftSharedKotlinArray<PubliftSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(PubliftSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PubliftSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(PubliftSharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(PubliftSharedKtor_utilsPipelinePhase *)reference phase:(PubliftSharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(PubliftSharedKtor_utilsPipelinePhase *)reference phase:(PubliftSharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(PubliftSharedKtor_utilsPipelinePhase *)phase block:(id<PubliftSharedKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<PubliftSharedKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(PubliftSharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(PubliftSharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(PubliftSharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(PubliftSharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<PubliftSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<PubliftSharedKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface PubliftSharedKtor_client_coreHttpReceivePipeline : PubliftSharedKtor_utilsPipeline<PubliftSharedKtor_client_coreHttpResponse *, PubliftSharedKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PubliftSharedKotlinArray<PubliftSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PubliftSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PubliftSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PubliftSharedKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface PubliftSharedKtor_client_coreHttpRequestPipeline : PubliftSharedKtor_utilsPipeline<id, PubliftSharedKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PubliftSharedKotlinArray<PubliftSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PubliftSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PubliftSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PubliftSharedKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface PubliftSharedKtor_client_coreHttpResponsePipeline : PubliftSharedKtor_utilsPipeline<PubliftSharedKtor_client_coreHttpResponseContainer *, PubliftSharedKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PubliftSharedKotlinArray<PubliftSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PubliftSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PubliftSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PubliftSharedKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface PubliftSharedKtor_client_coreHttpSendPipeline : PubliftSharedKtor_utilsPipeline<id, PubliftSharedKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PubliftSharedKotlinArray<PubliftSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PubliftSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PubliftSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PubliftSharedKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol PubliftSharedKotlinx_serialization_coreEncoder
@required
- (id<PubliftSharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<PubliftSharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<PubliftSharedKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
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
- (void)encodeNullableSerializableValueSerializer:(id<PubliftSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<PubliftSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) PubliftSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol PubliftSharedKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<PubliftSharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

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
@property (readonly) NSArray<id<PubliftSharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

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
@property (readonly) PubliftSharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol PubliftSharedKotlinx_serialization_coreDecoder
@required
- (id<PubliftSharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<PubliftSharedKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
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
- (PubliftSharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<PubliftSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<PubliftSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) PubliftSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol PubliftSharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface PubliftSharedKotlinx_datetimeInstantCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (PubliftSharedKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (PubliftSharedKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (PubliftSharedKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (PubliftSharedKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (PubliftSharedKotlinx_datetimeInstant *)parseInput:(id)input format:(id<PubliftSharedKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<PubliftSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) PubliftSharedKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) PubliftSharedKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegexOption")))
@interface PubliftSharedKotlinRegexOption : PubliftSharedKotlinEnum<PubliftSharedKotlinRegexOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PubliftSharedKotlinRegexOption *ignoreCase __attribute__((swift_name("ignoreCase")));
@property (class, readonly) PubliftSharedKotlinRegexOption *multiline __attribute__((swift_name("multiline")));
@property (class, readonly) PubliftSharedKotlinRegexOption *literal __attribute__((swift_name("literal")));
@property (class, readonly) PubliftSharedKotlinRegexOption *unixLines __attribute__((swift_name("unixLines")));
@property (class, readonly) PubliftSharedKotlinRegexOption *comments __attribute__((swift_name("comments")));
@property (class, readonly) PubliftSharedKotlinRegexOption *dotMatchesAll __attribute__((swift_name("dotMatchesAll")));
@property (class, readonly) PubliftSharedKotlinRegexOption *canonEq __attribute__((swift_name("canonEq")));
+ (PubliftSharedKotlinArray<PubliftSharedKotlinRegexOption *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PubliftSharedKotlinRegexOption *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex.Companion")))
@interface PubliftSharedKotlinRegexCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKotlinRegexCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)escapeLiteral:(NSString *)literal __attribute__((swift_name("escape(literal:)")));
- (NSString *)escapeReplacementLiteral:(NSString *)literal __attribute__((swift_name("escapeReplacement(literal:)")));
- (PubliftSharedKotlinRegex *)fromLiteralLiteral:(NSString *)literal __attribute__((swift_name("fromLiteral(literal:)")));
@end

__attribute__((swift_name("KotlinMatchResult")))
@protocol PubliftSharedKotlinMatchResult
@required
- (id<PubliftSharedKotlinMatchResult> _Nullable)next __attribute__((swift_name("next()")));
@property (readonly) PubliftSharedKotlinMatchResultDestructured *destructured __attribute__((swift_name("destructured")));
@property (readonly) NSArray<NSString *> *groupValues __attribute__((swift_name("groupValues")));
@property (readonly) id<PubliftSharedKotlinMatchGroupCollection> groups __attribute__((swift_name("groups")));
@property (readonly) PubliftSharedKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol PubliftSharedKotlinSequence
@required
- (id<PubliftSharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol PubliftSharedKotlinCoroutineContextElement <PubliftSharedKotlinCoroutineContext>
@required
@property (readonly) id<PubliftSharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol PubliftSharedKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface PubliftSharedKtor_client_coreHttpRequestData : PubliftSharedBase
- (instancetype)initWithUrl:(PubliftSharedKtor_httpUrl *)url method:(PubliftSharedKtor_httpHttpMethod *)method headers:(id<PubliftSharedKtor_httpHeaders>)headers body:(PubliftSharedKtor_httpOutgoingContent *)body executionContext:(id<PubliftSharedKotlinx_coroutines_coreJob>)executionContext attributes:(id<PubliftSharedKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<PubliftSharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PubliftSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PubliftSharedKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<PubliftSharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<PubliftSharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PubliftSharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PubliftSharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface PubliftSharedKtor_client_coreHttpResponseData : PubliftSharedBase
- (instancetype)initWithStatusCode:(PubliftSharedKtor_httpHttpStatusCode *)statusCode requestTime:(PubliftSharedKtor_utilsGMTDate *)requestTime headers:(id<PubliftSharedKtor_httpHeaders>)headers version:(PubliftSharedKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<PubliftSharedKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<PubliftSharedKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<PubliftSharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PubliftSharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) PubliftSharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) PubliftSharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface PubliftSharedKotlinAbstractCoroutineContextElement : PubliftSharedBase <PubliftSharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<PubliftSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<PubliftSharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol PubliftSharedKotlinContinuationInterceptor <PubliftSharedKotlinCoroutineContextElement>
@required
- (id<PubliftSharedKotlinContinuation>)interceptContinuationContinuation:(id<PubliftSharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<PubliftSharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface PubliftSharedKotlinx_coroutines_coreCoroutineDispatcher : PubliftSharedKotlinAbstractCoroutineContextElement <PubliftSharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<PubliftSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PubliftSharedKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<PubliftSharedKotlinCoroutineContext>)context block:(id<PubliftSharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<PubliftSharedKotlinCoroutineContext>)context block:(id<PubliftSharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<PubliftSharedKotlinContinuation>)interceptContinuationContinuation:(id<PubliftSharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<PubliftSharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (PubliftSharedKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (PubliftSharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(PubliftSharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<PubliftSharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface PubliftSharedKtor_client_coreProxyConfig : PubliftSharedBase
- (instancetype)initWithUrl:(PubliftSharedKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PubliftSharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol PubliftSharedKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(PubliftSharedKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) PubliftSharedKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface PubliftSharedKtor_utilsAttributeKey<T> : PubliftSharedBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface PubliftSharedKtor_eventsEventDefinition<T> : PubliftSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol PubliftSharedKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface PubliftSharedKtor_utilsPipelinePhase : PubliftSharedBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol PubliftSharedKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol PubliftSharedKotlinSuspendFunction2 <PubliftSharedKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface PubliftSharedKtor_client_coreHttpReceivePipelinePhases : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol PubliftSharedKtor_httpHttpMessage
@required
@property (readonly) id<PubliftSharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface PubliftSharedKtor_client_coreHttpResponse : PubliftSharedBase <PubliftSharedKtor_httpHttpMessage, PubliftSharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PubliftSharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<PubliftSharedKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) PubliftSharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) PubliftSharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) PubliftSharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface PubliftSharedKotlinUnit : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface PubliftSharedKtor_client_coreHttpRequestPipelinePhases : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol PubliftSharedKtor_httpHttpMessageBuilder
@required
@property (readonly) PubliftSharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface PubliftSharedKtor_client_coreHttpRequestBuilder : PubliftSharedBase <PubliftSharedKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) PubliftSharedKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (PubliftSharedKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<PubliftSharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<PubliftSharedKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<PubliftSharedKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (PubliftSharedKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(PubliftSharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (PubliftSharedKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(PubliftSharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(PubliftSharedKtor_httpURLBuilder *, PubliftSharedKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<PubliftSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property PubliftSharedKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<PubliftSharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) PubliftSharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property PubliftSharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PubliftSharedKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface PubliftSharedKtor_client_coreHttpResponsePipelinePhases : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface PubliftSharedKtor_client_coreHttpResponseContainer : PubliftSharedBase
- (instancetype)initWithExpectedType:(PubliftSharedKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(PubliftSharedKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PubliftSharedKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface PubliftSharedKtor_client_coreHttpClientCall : PubliftSharedBase <PubliftSharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(PubliftSharedKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(PubliftSharedKtor_client_coreHttpClient *)client requestData:(PubliftSharedKtor_client_coreHttpRequestData *)requestData responseData:(PubliftSharedKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(PubliftSharedKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(PubliftSharedKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<PubliftSharedKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<PubliftSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PubliftSharedKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<PubliftSharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<PubliftSharedKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property PubliftSharedKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface PubliftSharedKtor_client_coreHttpSendPipelinePhases : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) PubliftSharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol PubliftSharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<PubliftSharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PubliftSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PubliftSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) PubliftSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface PubliftSharedKotlinx_serialization_coreSerializersModule : PubliftSharedBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<PubliftSharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PubliftSharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<PubliftSharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<PubliftSharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PubliftSharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PubliftSharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PubliftSharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PubliftSharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol PubliftSharedKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface PubliftSharedKotlinx_serialization_coreSerialKind : PubliftSharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol PubliftSharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<PubliftSharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PubliftSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PubliftSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<PubliftSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) PubliftSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface PubliftSharedKotlinNothing : PubliftSharedBase
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormat")))
@protocol PubliftSharedKotlinx_datetimeDateTimeFormat
@required
- (NSString *)formatValue:(id _Nullable)value __attribute__((swift_name("format(value:)")));
- (id<PubliftSharedKotlinAppendable>)formatToAppendable:(id<PubliftSharedKotlinAppendable>)appendable value:(id _Nullable)value __attribute__((swift_name("formatTo(appendable:value:)")));
- (id _Nullable)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (id _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchResultDestructured")))
@interface PubliftSharedKotlinMatchResultDestructured : PubliftSharedBase
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NSArray<NSString *> *)toList __attribute__((swift_name("toList()")));
@property (readonly) id<PubliftSharedKotlinMatchResult> match __attribute__((swift_name("match")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol PubliftSharedKotlinIterable
@required
- (id<PubliftSharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinCollection")))
@protocol PubliftSharedKotlinCollection <PubliftSharedKotlinIterable>
@required
- (BOOL)containsElement:(id _Nullable)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinMatchGroupCollection")))
@protocol PubliftSharedKotlinMatchGroupCollection <PubliftSharedKotlinCollection>
@required
- (PubliftSharedKotlinMatchGroup * _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
@end

__attribute__((swift_name("KotlinIntProgression")))
@interface PubliftSharedKotlinIntProgression : PubliftSharedBase <PubliftSharedKotlinIterable>
@property (class, readonly, getter=companion) PubliftSharedKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (PubliftSharedKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol PubliftSharedKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol PubliftSharedKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface PubliftSharedKotlinIntRange : PubliftSharedKotlinIntProgression <PubliftSharedKotlinClosedRange, PubliftSharedKotlinOpenEndRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(PubliftSharedInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(PubliftSharedInt *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
@property (readonly) PubliftSharedInt *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Int type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) PubliftSharedInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) PubliftSharedInt *start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface PubliftSharedKtor_httpUrl : PubliftSharedBase
@property (class, readonly, getter=companion) PubliftSharedKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<PubliftSharedKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) PubliftSharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface PubliftSharedKtor_httpHttpMethod : PubliftSharedBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (PubliftSharedKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol PubliftSharedKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PubliftSharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol PubliftSharedKtor_httpHeaders <PubliftSharedKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface PubliftSharedKtor_httpOutgoingContent : PubliftSharedBase
- (id _Nullable)getPropertyKey:(PubliftSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(PubliftSharedKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<PubliftSharedKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) PubliftSharedLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) PubliftSharedKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<PubliftSharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol PubliftSharedKotlinx_coroutines_coreJob <PubliftSharedKotlinCoroutineContextElement>
@required
- (id<PubliftSharedKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<PubliftSharedKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(PubliftSharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (PubliftSharedKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<PubliftSharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(PubliftSharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<PubliftSharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(PubliftSharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<PubliftSharedKotlinx_coroutines_coreJob>)plusOther_:(id<PubliftSharedKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start_ __attribute__((swift_name("start()")));
@property (readonly) id<PubliftSharedKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<PubliftSharedKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<PubliftSharedKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface PubliftSharedKtor_httpHttpStatusCode : PubliftSharedBase <PubliftSharedKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(PubliftSharedKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (PubliftSharedKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (PubliftSharedKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface PubliftSharedKtor_utilsGMTDate : PubliftSharedBase <PubliftSharedKotlinComparable>
@property (class, readonly, getter=companion) PubliftSharedKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(PubliftSharedKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (PubliftSharedKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(PubliftSharedKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(PubliftSharedKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) PubliftSharedKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) PubliftSharedKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface PubliftSharedKtor_httpHttpProtocolVersion : PubliftSharedBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (PubliftSharedKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol PubliftSharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<PubliftSharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface PubliftSharedKotlinAbstractCoroutineContextKey<B, E> : PubliftSharedBase <PubliftSharedKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<PubliftSharedKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<PubliftSharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface PubliftSharedKotlinx_coroutines_coreCoroutineDispatcherKey : PubliftSharedKotlinAbstractCoroutineContextKey<id<PubliftSharedKotlinContinuationInterceptor>, PubliftSharedKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<PubliftSharedKotlinCoroutineContextKey>)baseKey safeCast:(id<PubliftSharedKotlinCoroutineContextElement> _Nullable (^)(id<PubliftSharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol PubliftSharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol PubliftSharedKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(PubliftSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(PubliftSharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(PubliftSharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(PubliftSharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(PubliftSharedKtor_ioChunkBuffer *)dst completionHandler:(void (^)(PubliftSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(PubliftSharedKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(PubliftSharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(PubliftSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(PubliftSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(PubliftSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(PubliftSharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(PubliftSharedByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(PubliftSharedDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(PubliftSharedFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(PubliftSharedKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(PubliftSharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(PubliftSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(PubliftSharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(PubliftSharedKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(PubliftSharedKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<PubliftSharedKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(PubliftSharedShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<PubliftSharedKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<PubliftSharedKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(PubliftSharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) PubliftSharedKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol PubliftSharedKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<PubliftSharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<PubliftSharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<PubliftSharedKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PubliftSharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface PubliftSharedKtor_utilsStringValuesBuilderImpl : PubliftSharedBase <PubliftSharedKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<PubliftSharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<PubliftSharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<PubliftSharedKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PubliftSharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) PubliftSharedMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface PubliftSharedKtor_httpHeadersBuilder : PubliftSharedKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<PubliftSharedKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface PubliftSharedKtor_client_coreHttpRequestBuilderCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface PubliftSharedKtor_httpURLBuilder : PubliftSharedBase
- (instancetype)initWithProtocol:(PubliftSharedKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<PubliftSharedKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (PubliftSharedKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<PubliftSharedKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<PubliftSharedKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property PubliftSharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface PubliftSharedKtor_utilsTypeInfo : PubliftSharedBase
- (instancetype)initWithType:(id<PubliftSharedKotlinKClass>)type reifiedType:(id<PubliftSharedKotlinKType>)reifiedType kotlinType:(id<PubliftSharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedKtor_utilsTypeInfo *)doCopyType:(id<PubliftSharedKotlinKClass>)type reifiedType:(id<PubliftSharedKotlinKType>)reifiedType kotlinType:(id<PubliftSharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PubliftSharedKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<PubliftSharedKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<PubliftSharedKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface PubliftSharedKtor_client_coreHttpClientCallCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PubliftSharedKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol PubliftSharedKtor_client_coreHttpRequest <PubliftSharedKtor_httpHttpMessage, PubliftSharedKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<PubliftSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PubliftSharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) PubliftSharedKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) PubliftSharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PubliftSharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol PubliftSharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<PubliftSharedKotlinKClass>)kClass provider:(id<PubliftSharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<PubliftSharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<PubliftSharedKotlinKClass>)kClass serializer:(id<PubliftSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<PubliftSharedKotlinKClass>)baseClass actualClass:(id<PubliftSharedKotlinKClass>)actualClass actualSerializer:(id<PubliftSharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<PubliftSharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<PubliftSharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<PubliftSharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<PubliftSharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<PubliftSharedKotlinKClass>)baseClass defaultSerializerProvider:(id<PubliftSharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol PubliftSharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol PubliftSharedKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol PubliftSharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol PubliftSharedKotlinKClass <PubliftSharedKotlinKDeclarationContainer, PubliftSharedKotlinKAnnotatedElement, PubliftSharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol PubliftSharedKotlinAppendable
@required
- (id<PubliftSharedKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<PubliftSharedKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<PubliftSharedKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchGroup")))
@interface PubliftSharedKotlinMatchGroup : PubliftSharedBase
- (instancetype)initWithValue:(NSString *)value range:(PubliftSharedKotlinIntRange *)range __attribute__((swift_name("init(value:range:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedKotlinMatchGroup *)doCopyValue:(NSString *)value range:(PubliftSharedKotlinIntRange *)range __attribute__((swift_name("doCopy(value:range:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PubliftSharedKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface PubliftSharedKotlinIntProgressionCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (PubliftSharedKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface PubliftSharedKotlinIntIterator : PubliftSharedBase <PubliftSharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PubliftSharedInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface PubliftSharedKotlinIntRangeCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PubliftSharedKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface PubliftSharedKtor_httpUrlCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol PubliftSharedKtor_httpParameters <PubliftSharedKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface PubliftSharedKtor_httpURLProtocol : PubliftSharedBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (PubliftSharedKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface PubliftSharedKtor_httpHttpMethodCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (PubliftSharedKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<PubliftSharedKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) PubliftSharedKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) PubliftSharedKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) PubliftSharedKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) PubliftSharedKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) PubliftSharedKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) PubliftSharedKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) PubliftSharedKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol PubliftSharedKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface PubliftSharedKtor_httpHeaderValueWithParameters : PubliftSharedBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<PubliftSharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<PubliftSharedKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface PubliftSharedKtor_httpContentType : PubliftSharedKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<PubliftSharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<PubliftSharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PubliftSharedKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(PubliftSharedKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (PubliftSharedKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (PubliftSharedKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol PubliftSharedKotlinx_coroutines_coreChildHandle <PubliftSharedKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(PubliftSharedKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<PubliftSharedKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol PubliftSharedKotlinx_coroutines_coreChildJob <PubliftSharedKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<PubliftSharedKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol PubliftSharedKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) PubliftSharedKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<PubliftSharedKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(PubliftSharedKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<PubliftSharedKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol PubliftSharedKotlinx_coroutines_coreSelectClause0 <PubliftSharedKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface PubliftSharedKtor_httpHttpStatusCodeCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (PubliftSharedKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) PubliftSharedKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<PubliftSharedKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface PubliftSharedKtor_utilsGMTDateCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PubliftSharedKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface PubliftSharedKtor_utilsWeekDay : PubliftSharedKotlinEnum<PubliftSharedKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PubliftSharedKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PubliftSharedKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) PubliftSharedKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) PubliftSharedKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) PubliftSharedKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) PubliftSharedKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) PubliftSharedKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) PubliftSharedKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (PubliftSharedKotlinArray<PubliftSharedKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface PubliftSharedKtor_utilsMonth : PubliftSharedKotlinEnum<PubliftSharedKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PubliftSharedKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PubliftSharedKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) PubliftSharedKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) PubliftSharedKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) PubliftSharedKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) PubliftSharedKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) PubliftSharedKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) PubliftSharedKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) PubliftSharedKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) PubliftSharedKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) PubliftSharedKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) PubliftSharedKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) PubliftSharedKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (PubliftSharedKotlinArray<PubliftSharedKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface PubliftSharedKtor_httpHttpProtocolVersionCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (PubliftSharedKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (PubliftSharedKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) PubliftSharedKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) PubliftSharedKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) PubliftSharedKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) PubliftSharedKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) PubliftSharedKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface PubliftSharedKtor_ioMemory : PubliftSharedBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(PubliftSharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(PubliftSharedKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (PubliftSharedKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (PubliftSharedKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface PubliftSharedKtor_ioBuffer : PubliftSharedBase
- (instancetype)initWithMemory:(PubliftSharedKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) PubliftSharedKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (PubliftSharedKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(PubliftSharedKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) PubliftSharedKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface PubliftSharedKtor_ioChunkBuffer : PubliftSharedKtor_ioBuffer
- (instancetype)initWithMemory:(PubliftSharedKtor_ioMemory *)memory origin:(PubliftSharedKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<PubliftSharedKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (instancetype)initWithMemory:(PubliftSharedKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PubliftSharedKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (PubliftSharedKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (PubliftSharedKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<PubliftSharedKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) PubliftSharedKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) PubliftSharedKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface PubliftSharedKotlinByteArray : PubliftSharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PubliftSharedByte *(^)(PubliftSharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PubliftSharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface PubliftSharedKtor_ioInput : PubliftSharedBase <PubliftSharedKtor_ioCloseable>
- (instancetype)initWithHead:(PubliftSharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<PubliftSharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) PubliftSharedKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PubliftSharedKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(PubliftSharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(PubliftSharedKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(PubliftSharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<PubliftSharedKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<PubliftSharedKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<PubliftSharedKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface PubliftSharedKtor_ioByteReadPacket : PubliftSharedKtor_ioInput
- (instancetype)initWithHead:(PubliftSharedKtor_ioChunkBuffer *)head pool:(id<PubliftSharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(PubliftSharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<PubliftSharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PubliftSharedKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (PubliftSharedKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PubliftSharedKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(PubliftSharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol PubliftSharedKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (PubliftSharedKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol PubliftSharedKotlinSuspendFunction1 <PubliftSharedKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface PubliftSharedKtor_httpURLBuilderCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol PubliftSharedKtor_httpParametersBuilder <PubliftSharedKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol PubliftSharedKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<PubliftSharedKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<PubliftSharedKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface PubliftSharedKtor_httpURLProtocolCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (PubliftSharedKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) PubliftSharedKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) PubliftSharedKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) PubliftSharedKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) PubliftSharedKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) PubliftSharedKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, PubliftSharedKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface PubliftSharedKtor_httpHeaderValueParam : PubliftSharedBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (PubliftSharedKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface PubliftSharedKtor_httpHeaderValueWithParametersCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<PubliftSharedKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface PubliftSharedKtor_httpContentTypeCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (PubliftSharedKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) PubliftSharedKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol PubliftSharedKotlinx_coroutines_coreParentJob <PubliftSharedKotlinx_coroutines_coreJob>
@required
- (PubliftSharedKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol PubliftSharedKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<PubliftSharedKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<PubliftSharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface PubliftSharedKtor_utilsWeekDayCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (PubliftSharedKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (PubliftSharedKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface PubliftSharedKtor_utilsMonthCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (PubliftSharedKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (PubliftSharedKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface PubliftSharedKtor_ioMemoryCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PubliftSharedKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface PubliftSharedKtor_ioBufferCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PubliftSharedKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol PubliftSharedKtor_ioObjectPool <PubliftSharedKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface PubliftSharedKtor_ioChunkBufferCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PubliftSharedKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<PubliftSharedKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<PubliftSharedKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface PubliftSharedKotlinByteIterator : PubliftSharedBase <PubliftSharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PubliftSharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface PubliftSharedKtor_ioInputCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface PubliftSharedKtor_ioByteReadPacketCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PubliftSharedKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface PubliftSharedKotlinKTypeProjection : PubliftSharedBase
- (instancetype)initWithVariance:(PubliftSharedKotlinKVariance * _Nullable)variance type:(id<PubliftSharedKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PubliftSharedKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (PubliftSharedKotlinKTypeProjection *)doCopyVariance:(PubliftSharedKotlinKVariance * _Nullable)variance type:(id<PubliftSharedKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PubliftSharedKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) PubliftSharedKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface PubliftSharedKotlinKVariance : PubliftSharedKotlinEnum<PubliftSharedKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PubliftSharedKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) PubliftSharedKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) PubliftSharedKotlinKVariance *out __attribute__((swift_name("out")));
+ (PubliftSharedKotlinArray<PubliftSharedKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PubliftSharedKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface PubliftSharedKotlinKTypeProjectionCompanion : PubliftSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PubliftSharedKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PubliftSharedKotlinKTypeProjection *)contravariantType:(id<PubliftSharedKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PubliftSharedKotlinKTypeProjection *)covariantType:(id<PubliftSharedKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PubliftSharedKotlinKTypeProjection *)invariantType:(id<PubliftSharedKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) PubliftSharedKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
