#import <React/RCTBridgeModule.h>

@interface RCT_EXTERN_MODULE(TruVideoReactCoreSdk, NSObject)

RCT_EXTERN_METHOD(authetication:(NSString)apiKey withSecretKey:(NSString)secretKey
                 withResolver:(RCTPromiseResolveBlock)resolve
                 withRejecter:(RCTPromiseRejectBlock)reject)

RCT_EXTERN_METHOD(clearAuthentication:(RCTPromiseResolveBlock)resolve
                withRejecter:(RCTPromiseRejectBlock)reject)

+ (BOOL)requiresMainQueueSetup
{
  return NO;
}

@end
